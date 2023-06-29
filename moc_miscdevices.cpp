/****************************************************************************
** Meta object code from reading C++ file 'miscdevices.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "miscdevices.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'miscdevices.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Printer_t {
    QByteArrayData data[4];
    char stringdata0[20];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Printer_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Printer_t qt_meta_stringdata_Printer = {
    {
QT_MOC_LITERAL(0, 0, 7), // "Printer"
QT_MOC_LITERAL(1, 8, 5), // "print"
QT_MOC_LITERAL(2, 14, 0), // ""
QT_MOC_LITERAL(3, 15, 4) // "text"

    },
    "Printer\0print\0\0text"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Printer[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   19,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString,    3,

       0        // eod
};

void Printer::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<Printer *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->print((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (Printer::*)(const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Printer::print)) {
                *result = 0;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject Printer::staticMetaObject = { {
    QMetaObject::SuperData::link<SioDevice::staticMetaObject>(),
    qt_meta_stringdata_Printer.data,
    qt_meta_data_Printer,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *Printer::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Printer::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Printer.stringdata0))
        return static_cast<void*>(this);
    return SioDevice::qt_metacast(_clname);
}

int Printer::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = SioDevice::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 1)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 1;
    }
    return _id;
}

// SIGNAL 0
void Printer::print(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
struct qt_meta_stringdata_SmartDevice_t {
    QByteArrayData data[1];
    char stringdata0[12];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_SmartDevice_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_SmartDevice_t qt_meta_stringdata_SmartDevice = {
    {
QT_MOC_LITERAL(0, 0, 11) // "SmartDevice"

    },
    "SmartDevice"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_SmartDevice[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

       0        // eod
};

void SmartDevice::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject SmartDevice::staticMetaObject = { {
    QMetaObject::SuperData::link<SioDevice::staticMetaObject>(),
    qt_meta_stringdata_SmartDevice.data,
    qt_meta_data_SmartDevice,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *SmartDevice::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *SmartDevice::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_SmartDevice.stringdata0))
        return static_cast<void*>(this);
    return SioDevice::qt_metacast(_clname);
}

int SmartDevice::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = SioDevice::qt_metacall(_c, _id, _a);
    return _id;
}
struct qt_meta_stringdata_Mnu_t {
    QByteArrayData data[18];
    char stringdata0[158];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Mnu_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Mnu_t qt_meta_stringdata_Mnu = {
    {
QT_MOC_LITERAL(0, 0, 3), // "Mnu"
QT_MOC_LITERAL(1, 4, 11), // "findNewSlot"
QT_MOC_LITERAL(2, 16, 0), // ""
QT_MOC_LITERAL(3, 17, 9), // "startFrom"
QT_MOC_LITERAL(4, 27, 9), // "createOne"
QT_MOC_LITERAL(5, 37, 9), // "mountFile"
QT_MOC_LITERAL(6, 47, 2), // "no"
QT_MOC_LITERAL(7, 50, 8), // "fileName"
QT_MOC_LITERAL(8, 59, 16), // "toggleAutoCommit"
QT_MOC_LITERAL(9, 76, 2), // "st"
QT_MOC_LITERAL(10, 79, 7), // "bootExe"
QT_MOC_LITERAL(11, 87, 7), // "bootCas"
QT_MOC_LITERAL(12, 95, 19), // "togglePrinterServer"
QT_MOC_LITERAL(13, 115, 6), // "enable"
QT_MOC_LITERAL(14, 122, 10), // "gotNewSlot"
QT_MOC_LITERAL(15, 133, 4), // "slot"
QT_MOC_LITERAL(16, 138, 11), // "fileMounted"
QT_MOC_LITERAL(17, 150, 7) // "mounted"

    },
    "Mnu\0findNewSlot\0\0startFrom\0createOne\0"
    "mountFile\0no\0fileName\0toggleAutoCommit\0"
    "st\0bootExe\0bootCas\0togglePrinterServer\0"
    "enable\0gotNewSlot\0slot\0fileMounted\0"
    "mounted"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Mnu[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       6,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    2,   54,    2, 0x06 /* Public */,
       5,    2,   59,    2, 0x06 /* Public */,
       8,    2,   64,    2, 0x06 /* Public */,
      10,    1,   69,    2, 0x06 /* Public */,
      11,    1,   72,    2, 0x06 /* Public */,
      12,    1,   75,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      14,    1,   78,    2, 0x0a /* Public */,
      16,    1,   81,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::Int, QMetaType::Bool,    3,    4,
    QMetaType::Void, QMetaType::Int, QMetaType::QString,    6,    7,
    QMetaType::Void, QMetaType::Int, QMetaType::Bool,    6,    9,
    QMetaType::Void, QMetaType::QString,    7,
    QMetaType::Void, QMetaType::QString,    7,
    QMetaType::Void, QMetaType::Bool,   13,

 // slots: parameters
    QMetaType::Void, QMetaType::Int,   15,
    QMetaType::Void, QMetaType::Bool,   17,

       0        // eod
};

void Mnu::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<Mnu *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->findNewSlot((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 1: _t->mountFile((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 2: _t->toggleAutoCommit((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 3: _t->bootExe((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 4: _t->bootCas((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 5: _t->togglePrinterServer((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 6: _t->gotNewSlot((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 7: _t->fileMounted((*reinterpret_cast< bool(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (Mnu::*)(int , bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Mnu::findNewSlot)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (Mnu::*)(int , const QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Mnu::mountFile)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (Mnu::*)(int , bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Mnu::toggleAutoCommit)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (Mnu::*)(const QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Mnu::bootExe)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (Mnu::*)(const QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Mnu::bootCas)) {
                *result = 4;
                return;
            }
        }
        {
            using _t = void (Mnu::*)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Mnu::togglePrinterServer)) {
                *result = 5;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject Mnu::staticMetaObject = { {
    QMetaObject::SuperData::link<SioDevice::staticMetaObject>(),
    qt_meta_stringdata_Mnu.data,
    qt_meta_data_Mnu,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *Mnu::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Mnu::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Mnu.stringdata0))
        return static_cast<void*>(this);
    return SioDevice::qt_metacast(_clname);
}

int Mnu::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = SioDevice::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 8)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 8)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 8;
    }
    return _id;
}

// SIGNAL 0
void Mnu::findNewSlot(int _t1, bool _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void Mnu::mountFile(int _t1, const QString _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void Mnu::toggleAutoCommit(int _t1, bool _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void Mnu::bootExe(const QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void Mnu::bootCas(const QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void Mnu::togglePrinterServer(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
