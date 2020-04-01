#include "diskimageatx.h"

#include <QtDebug>

DiskImageAtx::~DiskImageAtx()
{
    close();
}

void DiskImageAtx::close()
{
}

bool DiskImageAtx::format(const DiskGeometry&)
{
    return false;
}

bool DiskImageAtx::open(const QString &fileName, FileTypes::FileType /* type */)
{
    QFile *sourceFile;

    if (m_originalImageType == FileTypes::Atx) {
        sourceFile = new QFile(fileName);
    } else {
        sourceFile = new GzFile(fileName);
    }

    // Try to open the source file
    if (!sourceFile->open(QFile::Unbuffered | QFile::ReadOnly)) {
        qCritical() << "!e" << tr("Cannot open '%1': %2").arg(fileName).arg(sourceFile->errorString());
        delete sourceFile;
        return false;
    }

    // Try to read the header
    QByteArray header;
    header = sourceFile->read(48);
    if (header.size() != 48) {
        qCritical() << "!e" << tr("Cannot open '%1': %2")
                      .arg(fileName)
                      .arg(tr("Cannot read the header: %1.").arg(sourceFile->errorString()));
        sourceFile->close();
        delete sourceFile;
        return false;
    }

    // Validate the magic number
    QByteArray magic = QByteArray(header.data(), 4);
    if (magic != "AT8X") {
        qCritical() << "!e" << tr("Cannot open '%1': %2").arg(fileName).arg(tr("Not a valid ATX file."));
        sourceFile->close();
        delete sourceFile;
        return false;
    }

    int density = (int) (quint8) header[18];
    int size = (density == 2) ? 183936 : ((density == 1) ? 133120 : 92160);
    m_geometry.initialize(size);
    refreshNewGeometry();
    m_isReadOnly = sourceFile->isWritable();
    m_originalFileName = fileName;
    m_originalFileHeader = header;
    m_isModified = false;
    m_isUnmodifiable = false;
    m_isUnnamed = false;

    sourceFile->close();
    delete sourceFile;
    return true;
}

bool DiskImageAtx::seekToSector(quint16 sector)
{
    if (sector < 1 || sector > m_geometry.sectorCount()) {
        qCritical() << "!e" << tr("[%1] Cannot seek to sector %2: %3")
                       .arg(deviceName())
                       .arg(sector)
           .arg(tr("Sector number is out of bounds."));
    }
    qint64 pos = 16 + (sector - 1) * (m_geometry.bytesPerSector()+12);
    if (m_geometry.bytesPerSector() == 256) {
        if (sector <= 3) {
            pos = (sector - 1) * (128+12);
        } else {
            pos -= (384+36);
        }
    }
    if (!sourceFile->seek(pos)) {
        qCritical() << "!e" << tr("[%1] Cannot seek to sector %2: %3")
                       .arg(deviceName())
                       .arg(sector)
                       .arg(sourceFile->error());
        return false;
    }
    return true;
}

bool DiskImageAtx::readSector(quint16 sector, QByteArray &data)
{
    if (!seekToSector(sector)) {
        return false;
    }

    QByteArray header;
    header = sourceFile->read(12);

    if ((quint8)header[5] != 0)
    {
        int dupnum = count[sector];

        qDebug() << "!e" << tr("Duplicate sector: %1 dupnum: %2").arg(sector).arg(dupnum);

        count[sector] = (count[sector]+1) % ((quint8)header[5]+1);
        if (dupnum != 0)  {
            sector = m_geometry.sectorCount() + (quint8)header[6+dupnum];
            /* can dupnum be 5? */
            if (dupnum > 4 || sector <= 0 || sector > ((sourceFile->size()-16)/(128+12)))
            {
              qCritical() << "!e" << tr("Error in .pro image: sector: %1 dupnum: %2").arg(sector).arg(dupnum);
              return false;
            }
            seekToSector(sector);
            /* read sector header */
            header = sourceFile->read(12);
        }
    }

    wd1772status = header[1];
    if (wd1772status != 0xff)
    {
        qDebug() << "!e" << tr("Bad sector");
        return false;
    }

    data = sourceFile->read(m_geometry.bytesPerSector(sector));
    if (data.size() != m_geometry.bytesPerSector(sector)) {
        qCritical() << "!e" << tr("[%1] Cannot read from sector %2: %3.")
                       .arg(deviceName())
                       .arg(sector)
                       .arg(sourceFile->errorString());
        return false;
    }
    return true;
}

bool DiskImageAtx::writeSector(quint16, const QByteArray &)
{
    return false;
}

void DiskImageAtx::getStatus(QByteArray &status)
{
    status[0] = m_isReadOnly * 8 |
                (m_newGeometry.bytesPerSector() == 256) * 32 |
                (m_newGeometry.bytesPerSector() == 128 && m_newGeometry.sectorsPerTrack() == 26) * 128;
    status[1] = wd1772status;
    status[2] = 3;
    status[3] = 0;
}
