/****************************************************************************
** Meta object code from reading C++ file 'mainwindow.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "mainwindow.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mainwindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_MainWindow_t {
    QByteArrayData data[80];
    char stringdata0[1462];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_MainWindow_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_MainWindow_t qt_meta_stringdata_MainWindow = {
    {
QT_MOC_LITERAL(0, 0, 10), // "MainWindow"
QT_MOC_LITERAL(1, 11, 10), // "logMessage"
QT_MOC_LITERAL(2, 22, 0), // ""
QT_MOC_LITERAL(3, 23, 4), // "type"
QT_MOC_LITERAL(4, 28, 3), // "msg"
QT_MOC_LITERAL(5, 32, 7), // "newSlot"
QT_MOC_LITERAL(6, 40, 4), // "slot"
QT_MOC_LITERAL(7, 45, 11), // "fileMounted"
QT_MOC_LITERAL(8, 57, 7), // "mounted"
QT_MOC_LITERAL(9, 65, 11), // "sendLogText"
QT_MOC_LITERAL(10, 77, 7), // "logText"
QT_MOC_LITERAL(11, 85, 17), // "sendLogTextChange"
QT_MOC_LITERAL(12, 103, 13), // "logTextChange"
QT_MOC_LITERAL(13, 117, 7), // "setFont"
QT_MOC_LITERAL(14, 125, 4), // "font"
QT_MOC_LITERAL(15, 130, 4), // "show"
QT_MOC_LITERAL(16, 135, 18), // "firstEmptyDiskSlot"
QT_MOC_LITERAL(17, 154, 9), // "startFrom"
QT_MOC_LITERAL(18, 164, 9), // "createOne"
QT_MOC_LITERAL(19, 174, 30), // "mountFileWithDefaultProtection"
QT_MOC_LITERAL(20, 205, 2), // "no"
QT_MOC_LITERAL(21, 208, 8), // "fileName"
QT_MOC_LITERAL(22, 217, 10), // "autoCommit"
QT_MOC_LITERAL(23, 228, 2), // "st"
QT_MOC_LITERAL(24, 231, 10), // "openRecent"
QT_MOC_LITERAL(25, 242, 16), // "bootExeTriggered"
QT_MOC_LITERAL(26, 259, 16), // "bootCasTriggered"
QT_MOC_LITERAL(27, 276, 11), // "printServer"
QT_MOC_LITERAL(28, 288, 2), // "on"
QT_MOC_LITERAL(29, 291, 35), // "on_actionPlaybackCassette_tri..."
QT_MOC_LITERAL(30, 327, 40), // "on_actionShowPrinterTextOutpu..."
QT_MOC_LITERAL(31, 368, 26), // "on_actionBootExe_triggered"
QT_MOC_LITERAL(32, 395, 30), // "on_actionSaveSession_triggered"
QT_MOC_LITERAL(33, 426, 30), // "on_actionOpenSession_triggered"
QT_MOC_LITERAL(34, 457, 27), // "on_actionNewImage_triggered"
QT_MOC_LITERAL(35, 485, 30), // "on_actionMountFolder_triggered"
QT_MOC_LITERAL(36, 516, 28), // "on_actionMountDisk_triggered"
QT_MOC_LITERAL(37, 545, 27), // "on_actionEjectAll_triggered"
QT_MOC_LITERAL(38, 573, 26), // "on_actionOptions_triggered"
QT_MOC_LITERAL(39, 600, 33), // "on_actionStartEmulation_trigg..."
QT_MOC_LITERAL(40, 634, 35), // "on_actionPrinterEmulation_tri..."
QT_MOC_LITERAL(41, 670, 33), // "on_actionHideShowDrives_trigg..."
QT_MOC_LITERAL(42, 704, 23), // "on_actionQuit_triggered"
QT_MOC_LITERAL(43, 728, 24), // "on_actionAbout_triggered"
QT_MOC_LITERAL(44, 753, 32), // "on_actionDocumentation_triggered"
QT_MOC_LITERAL(45, 786, 8), // "deviceId"
QT_MOC_LITERAL(46, 795, 24), // "on_actionEject_triggered"
QT_MOC_LITERAL(47, 820, 31), // "on_actionWriteProtect_triggered"
QT_MOC_LITERAL(48, 852, 19), // "writeProtectEnabled"
QT_MOC_LITERAL(49, 872, 30), // "on_actionMountRecent_triggered"
QT_MOC_LITERAL(50, 903, 27), // "on_actionEditDisk_triggered"
QT_MOC_LITERAL(51, 931, 23), // "on_actionSave_triggered"
QT_MOC_LITERAL(52, 955, 27), // "on_actionAutoSave_triggered"
QT_MOC_LITERAL(53, 983, 25), // "on_actionSaveAs_triggered"
QT_MOC_LITERAL(54, 1009, 25), // "on_actionRevert_triggered"
QT_MOC_LITERAL(55, 1035, 29), // "on_actionBootOption_triggered"
QT_MOC_LITERAL(56, 1065, 33), // "on_actionToggleMiniMode_trigg..."
QT_MOC_LITERAL(57, 1099, 30), // "on_actionToggleShade_triggered"
QT_MOC_LITERAL(58, 1130, 28), // "on_actionLogWindow_triggered"
QT_MOC_LITERAL(59, 1159, 14), // "showHideDrives"
QT_MOC_LITERAL(60, 1174, 11), // "sioFinished"
QT_MOC_LITERAL(61, 1186, 10), // "sioStarted"
QT_MOC_LITERAL(62, 1197, 16), // "sioStatusChanged"
QT_MOC_LITERAL(63, 1214, 6), // "status"
QT_MOC_LITERAL(64, 1221, 23), // "textPrinterWindowClosed"
QT_MOC_LITERAL(65, 1245, 22), // "docDisplayWindowClosed"
QT_MOC_LITERAL(66, 1268, 19), // "deviceStatusChanged"
QT_MOC_LITERAL(67, 1288, 8), // "deviceNo"
QT_MOC_LITERAL(68, 1297, 9), // "uiMessage"
QT_MOC_LITERAL(69, 1307, 1), // "t"
QT_MOC_LITERAL(70, 1309, 7), // "message"
QT_MOC_LITERAL(71, 1317, 17), // "trayIconActivated"
QT_MOC_LITERAL(72, 1335, 33), // "QSystemTrayIcon::ActivationRe..."
QT_MOC_LITERAL(73, 1369, 6), // "reason"
QT_MOC_LITERAL(74, 1376, 15), // "keepBootExeOpen"
QT_MOC_LITERAL(75, 1392, 18), // "saveWindowGeometry"
QT_MOC_LITERAL(76, 1411, 22), // "saveMiniWindowGeometry"
QT_MOC_LITERAL(77, 1434, 10), // "logChanged"
QT_MOC_LITERAL(78, 1445, 4), // "text"
QT_MOC_LITERAL(79, 1450, 11) // "changeFonts"

    },
    "MainWindow\0logMessage\0\0type\0msg\0newSlot\0"
    "slot\0fileMounted\0mounted\0sendLogText\0"
    "logText\0sendLogTextChange\0logTextChange\0"
    "setFont\0font\0show\0firstEmptyDiskSlot\0"
    "startFrom\0createOne\0mountFileWithDefaultProtection\0"
    "no\0fileName\0autoCommit\0st\0openRecent\0"
    "bootExeTriggered\0bootCasTriggered\0"
    "printServer\0on\0on_actionPlaybackCassette_triggered\0"
    "on_actionShowPrinterTextOutput_triggered\0"
    "on_actionBootExe_triggered\0"
    "on_actionSaveSession_triggered\0"
    "on_actionOpenSession_triggered\0"
    "on_actionNewImage_triggered\0"
    "on_actionMountFolder_triggered\0"
    "on_actionMountDisk_triggered\0"
    "on_actionEjectAll_triggered\0"
    "on_actionOptions_triggered\0"
    "on_actionStartEmulation_triggered\0"
    "on_actionPrinterEmulation_triggered\0"
    "on_actionHideShowDrives_triggered\0"
    "on_actionQuit_triggered\0"
    "on_actionAbout_triggered\0"
    "on_actionDocumentation_triggered\0"
    "deviceId\0on_actionEject_triggered\0"
    "on_actionWriteProtect_triggered\0"
    "writeProtectEnabled\0on_actionMountRecent_triggered\0"
    "on_actionEditDisk_triggered\0"
    "on_actionSave_triggered\0"
    "on_actionAutoSave_triggered\0"
    "on_actionSaveAs_triggered\0"
    "on_actionRevert_triggered\0"
    "on_actionBootOption_triggered\0"
    "on_actionToggleMiniMode_triggered\0"
    "on_actionToggleShade_triggered\0"
    "on_actionLogWindow_triggered\0"
    "showHideDrives\0sioFinished\0sioStarted\0"
    "sioStatusChanged\0status\0textPrinterWindowClosed\0"
    "docDisplayWindowClosed\0deviceStatusChanged\0"
    "deviceNo\0uiMessage\0t\0message\0"
    "trayIconActivated\0QSystemTrayIcon::ActivationReason\0"
    "reason\0keepBootExeOpen\0saveWindowGeometry\0"
    "saveMiniWindowGeometry\0logChanged\0"
    "text\0changeFonts"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MainWindow[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      60,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       6,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    2,  314,    2, 0x06 /* Public */,
       5,    1,  319,    2, 0x06 /* Public */,
       7,    1,  322,    2, 0x06 /* Public */,
       9,    1,  325,    2, 0x06 /* Public */,
      11,    1,  328,    2, 0x06 /* Public */,
      13,    1,  331,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      15,    0,  334,    2, 0x0a /* Public */,
      16,    2,  335,    2, 0x0a /* Public */,
      16,    1,  340,    2, 0x2a /* Public | MethodCloned */,
      16,    0,  343,    2, 0x2a /* Public | MethodCloned */,
      19,    2,  344,    2, 0x0a /* Public */,
      22,    2,  349,    2, 0x0a /* Public */,
      24,    0,  354,    2, 0x0a /* Public */,
      25,    1,  355,    2, 0x0a /* Public */,
      26,    1,  358,    2, 0x0a /* Public */,
      27,    1,  361,    2, 0x0a /* Public */,
      29,    0,  364,    2, 0x08 /* Private */,
      30,    0,  365,    2, 0x08 /* Private */,
      31,    0,  366,    2, 0x08 /* Private */,
      32,    0,  367,    2, 0x08 /* Private */,
      33,    0,  368,    2, 0x08 /* Private */,
      34,    0,  369,    2, 0x08 /* Private */,
      35,    0,  370,    2, 0x08 /* Private */,
      36,    0,  371,    2, 0x08 /* Private */,
      37,    0,  372,    2, 0x08 /* Private */,
      38,    0,  373,    2, 0x08 /* Private */,
      39,    0,  374,    2, 0x08 /* Private */,
      40,    0,  375,    2, 0x08 /* Private */,
      41,    0,  376,    2, 0x08 /* Private */,
      42,    0,  377,    2, 0x08 /* Private */,
      43,    0,  378,    2, 0x08 /* Private */,
      44,    0,  379,    2, 0x08 /* Private */,
      36,    1,  380,    2, 0x08 /* Private */,
      35,    1,  383,    2, 0x08 /* Private */,
      46,    1,  386,    2, 0x08 /* Private */,
      47,    2,  389,    2, 0x08 /* Private */,
      49,    1,  394,    2, 0x08 /* Private */,
      50,    1,  397,    2, 0x08 /* Private */,
      51,    1,  400,    2, 0x08 /* Private */,
      52,    1,  403,    2, 0x08 /* Private */,
      53,    1,  406,    2, 0x08 /* Private */,
      54,    1,  409,    2, 0x08 /* Private */,
      55,    0,  412,    2, 0x08 /* Private */,
      56,    0,  413,    2, 0x08 /* Private */,
      57,    0,  414,    2, 0x08 /* Private */,
      58,    0,  415,    2, 0x08 /* Private */,
      59,    0,  416,    2, 0x08 /* Private */,
      60,    0,  417,    2, 0x08 /* Private */,
      61,    0,  418,    2, 0x08 /* Private */,
      62,    1,  419,    2, 0x08 /* Private */,
      64,    0,  422,    2, 0x08 /* Private */,
      65,    0,  423,    2, 0x08 /* Private */,
      66,    1,  424,    2, 0x08 /* Private */,
      68,    2,  427,    2, 0x08 /* Private */,
      71,    1,  432,    2, 0x08 /* Private */,
      74,    0,  435,    2, 0x08 /* Private */,
      75,    0,  436,    2, 0x08 /* Private */,
      76,    0,  437,    2, 0x08 /* Private */,
      77,    1,  438,    2, 0x08 /* Private */,
      79,    0,  441,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::Int, QMetaType::QString,    3,    4,
    QMetaType::Void, QMetaType::Int,    6,
    QMetaType::Void, QMetaType::Bool,    8,
    QMetaType::Void, QMetaType::QString,   10,
    QMetaType::Void, QMetaType::QString,   12,
    QMetaType::Void, QMetaType::QFont,   14,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Int, QMetaType::Int, QMetaType::Bool,   17,   18,
    QMetaType::Int, QMetaType::Int,   17,
    QMetaType::Int,
    QMetaType::Void, QMetaType::Int, QMetaType::QString,   20,   21,
    QMetaType::Void, QMetaType::Int, QMetaType::Bool,   20,   23,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,   21,
    QMetaType::Void, QMetaType::QString,   21,
    QMetaType::Void, QMetaType::Bool,   28,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   45,
    QMetaType::Void, QMetaType::Int,   45,
    QMetaType::Void, QMetaType::Int,   45,
    QMetaType::Void, QMetaType::Int, QMetaType::Bool,   45,   48,
    QMetaType::Void, QMetaType::QString,   21,
    QMetaType::Void, QMetaType::Int,   45,
    QMetaType::Void, QMetaType::Int,   45,
    QMetaType::Void, QMetaType::Int,   45,
    QMetaType::Void, QMetaType::Int,   45,
    QMetaType::Void, QMetaType::Int,   45,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,   63,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   67,
    QMetaType::Void, QMetaType::Int, QMetaType::QString,   69,   70,
    QMetaType::Void, 0x80000000 | 72,   73,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,   78,
    QMetaType::Void,

       0        // eod
};

void MainWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<MainWindow *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->logMessage((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 1: _t->newSlot((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: _t->fileMounted((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 3: _t->sendLogText((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 4: _t->sendLogTextChange((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 5: _t->setFont((*reinterpret_cast< const QFont(*)>(_a[1]))); break;
        case 6: _t->show(); break;
        case 7: { int _r = _t->firstEmptyDiskSlot((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = std::move(_r); }  break;
        case 8: { int _r = _t->firstEmptyDiskSlot((*reinterpret_cast< int(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = std::move(_r); }  break;
        case 9: { int _r = _t->firstEmptyDiskSlot();
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = std::move(_r); }  break;
        case 10: _t->mountFileWithDefaultProtection((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 11: _t->autoCommit((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 12: _t->openRecent(); break;
        case 13: _t->bootExeTriggered((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 14: _t->bootCasTriggered((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 15: _t->printServer((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 16: _t->on_actionPlaybackCassette_triggered(); break;
        case 17: _t->on_actionShowPrinterTextOutput_triggered(); break;
        case 18: _t->on_actionBootExe_triggered(); break;
        case 19: _t->on_actionSaveSession_triggered(); break;
        case 20: _t->on_actionOpenSession_triggered(); break;
        case 21: _t->on_actionNewImage_triggered(); break;
        case 22: _t->on_actionMountFolder_triggered(); break;
        case 23: _t->on_actionMountDisk_triggered(); break;
        case 24: _t->on_actionEjectAll_triggered(); break;
        case 25: _t->on_actionOptions_triggered(); break;
        case 26: _t->on_actionStartEmulation_triggered(); break;
        case 27: _t->on_actionPrinterEmulation_triggered(); break;
        case 28: _t->on_actionHideShowDrives_triggered(); break;
        case 29: _t->on_actionQuit_triggered(); break;
        case 30: _t->on_actionAbout_triggered(); break;
        case 31: _t->on_actionDocumentation_triggered(); break;
        case 32: _t->on_actionMountDisk_triggered((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 33: _t->on_actionMountFolder_triggered((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 34: _t->on_actionEject_triggered((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 35: _t->on_actionWriteProtect_triggered((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 36: _t->on_actionMountRecent_triggered((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 37: _t->on_actionEditDisk_triggered((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 38: _t->on_actionSave_triggered((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 39: _t->on_actionAutoSave_triggered((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 40: _t->on_actionSaveAs_triggered((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 41: _t->on_actionRevert_triggered((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 42: _t->on_actionBootOption_triggered(); break;
        case 43: _t->on_actionToggleMiniMode_triggered(); break;
        case 44: _t->on_actionToggleShade_triggered(); break;
        case 45: _t->on_actionLogWindow_triggered(); break;
        case 46: _t->showHideDrives(); break;
        case 47: _t->sioFinished(); break;
        case 48: _t->sioStarted(); break;
        case 49: _t->sioStatusChanged((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 50: _t->textPrinterWindowClosed(); break;
        case 51: _t->docDisplayWindowClosed(); break;
        case 52: _t->deviceStatusChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 53: _t->uiMessage((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 54: _t->trayIconActivated((*reinterpret_cast< QSystemTrayIcon::ActivationReason(*)>(_a[1]))); break;
        case 55: _t->keepBootExeOpen(); break;
        case 56: _t->saveWindowGeometry(); break;
        case 57: _t->saveMiniWindowGeometry(); break;
        case 58: _t->logChanged((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 59: _t->changeFonts(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (MainWindow::*)(int , const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MainWindow::logMessage)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (MainWindow::*)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MainWindow::newSlot)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (MainWindow::*)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MainWindow::fileMounted)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (MainWindow::*)(QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MainWindow::sendLogText)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (MainWindow::*)(QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MainWindow::sendLogTextChange)) {
                *result = 4;
                return;
            }
        }
        {
            using _t = void (MainWindow::*)(const QFont & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MainWindow::setFont)) {
                *result = 5;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject MainWindow::staticMetaObject = { {
    QMetaObject::SuperData::link<QMainWindow::staticMetaObject>(),
    qt_meta_stringdata_MainWindow.data,
    qt_meta_data_MainWindow,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *MainWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MainWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_MainWindow.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int MainWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 60)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 60;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 60)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 60;
    }
    return _id;
}

// SIGNAL 0
void MainWindow::logMessage(int _t1, const QString & _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void MainWindow::newSlot(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void MainWindow::fileMounted(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void MainWindow::sendLogText(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void MainWindow::sendLogTextChange(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void MainWindow::setFont(const QFont & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
