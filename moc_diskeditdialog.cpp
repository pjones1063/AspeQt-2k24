/****************************************************************************
** Meta object code from reading C++ file 'diskeditdialog.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "diskeditdialog.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'diskeditdialog.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_MyModel_t {
    QByteArrayData data[1];
    char stringdata0[8];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_MyModel_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_MyModel_t qt_meta_stringdata_MyModel = {
    {
QT_MOC_LITERAL(0, 0, 7) // "MyModel"

    },
    "MyModel"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MyModel[] = {

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

void MyModel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject MyModel::staticMetaObject = { {
    QMetaObject::SuperData::link<QAbstractTableModel::staticMetaObject>(),
    qt_meta_stringdata_MyModel.data,
    qt_meta_data_MyModel,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *MyModel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MyModel::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_MyModel.stringdata0))
        return static_cast<void*>(this);
    return QAbstractTableModel::qt_metacast(_clname);
}

int MyModel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QAbstractTableModel::qt_metacall(_c, _id, _a);
    return _id;
}
struct qt_meta_stringdata_DiskEditDialog_t {
    QByteArrayData data[20];
    char stringdata0[358];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_DiskEditDialog_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_DiskEditDialog_t qt_meta_stringdata_DiskEditDialog = {
    {
QT_MOC_LITERAL(0, 0, 14), // "DiskEditDialog"
QT_MOC_LITERAL(1, 15, 27), // "on_actionAddFiles_triggered"
QT_MOC_LITERAL(2, 43, 0), // ""
QT_MOC_LITERAL(3, 44, 38), // "on_actionDeleteSelectedFiles_..."
QT_MOC_LITERAL(4, 83, 33), // "on_actionTextConversion_trigg..."
QT_MOC_LITERAL(5, 117, 31), // "on_actionExtractFiles_triggered"
QT_MOC_LITERAL(6, 149, 27), // "on_actionToParent_triggered"
QT_MOC_LITERAL(7, 177, 24), // "on_actionPrint_triggered"
QT_MOC_LITERAL(8, 202, 22), // "on_aView_doubleClicked"
QT_MOC_LITERAL(9, 225, 11), // "QModelIndex"
QT_MOC_LITERAL(10, 237, 5), // "index"
QT_MOC_LITERAL(11, 243, 12), // "onTopChanged"
QT_MOC_LITERAL(12, 256, 17), // "fileSystemChanged"
QT_MOC_LITERAL(13, 274, 14), // "currentChanged"
QT_MOC_LITERAL(14, 289, 7), // "current"
QT_MOC_LITERAL(15, 297, 8), // "previous"
QT_MOC_LITERAL(16, 306, 16), // "selectionChanged"
QT_MOC_LITERAL(17, 323, 14), // "QItemSelection"
QT_MOC_LITERAL(18, 338, 8), // "selected"
QT_MOC_LITERAL(19, 347, 10) // "deselected"

    },
    "DiskEditDialog\0on_actionAddFiles_triggered\0"
    "\0on_actionDeleteSelectedFiles_triggered\0"
    "on_actionTextConversion_triggered\0"
    "on_actionExtractFiles_triggered\0"
    "on_actionToParent_triggered\0"
    "on_actionPrint_triggered\0"
    "on_aView_doubleClicked\0QModelIndex\0"
    "index\0onTopChanged\0fileSystemChanged\0"
    "currentChanged\0current\0previous\0"
    "selectionChanged\0QItemSelection\0"
    "selected\0deselected"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_DiskEditDialog[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      11,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   69,    2, 0x08 /* Private */,
       3,    0,   70,    2, 0x08 /* Private */,
       4,    0,   71,    2, 0x08 /* Private */,
       5,    0,   72,    2, 0x08 /* Private */,
       6,    0,   73,    2, 0x08 /* Private */,
       7,    0,   74,    2, 0x08 /* Private */,
       8,    1,   75,    2, 0x08 /* Private */,
      11,    0,   78,    2, 0x08 /* Private */,
      12,    1,   79,    2, 0x08 /* Private */,
      13,    2,   82,    2, 0x08 /* Private */,
      16,    2,   87,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 9,   10,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   10,
    QMetaType::Void, 0x80000000 | 9, 0x80000000 | 9,   14,   15,
    QMetaType::Void, 0x80000000 | 17, 0x80000000 | 17,   18,   19,

       0        // eod
};

void DiskEditDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<DiskEditDialog *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->on_actionAddFiles_triggered(); break;
        case 1: _t->on_actionDeleteSelectedFiles_triggered(); break;
        case 2: _t->on_actionTextConversion_triggered(); break;
        case 3: _t->on_actionExtractFiles_triggered(); break;
        case 4: _t->on_actionToParent_triggered(); break;
        case 5: _t->on_actionPrint_triggered(); break;
        case 6: _t->on_aView_doubleClicked((*reinterpret_cast< QModelIndex(*)>(_a[1]))); break;
        case 7: _t->onTopChanged(); break;
        case 8: _t->fileSystemChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 9: _t->currentChanged((*reinterpret_cast< const QModelIndex(*)>(_a[1])),(*reinterpret_cast< const QModelIndex(*)>(_a[2]))); break;
        case 10: _t->selectionChanged((*reinterpret_cast< const QItemSelection(*)>(_a[1])),(*reinterpret_cast< const QItemSelection(*)>(_a[2]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 10:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 1:
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QItemSelection >(); break;
            }
            break;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject DiskEditDialog::staticMetaObject = { {
    QMetaObject::SuperData::link<QMainWindow::staticMetaObject>(),
    qt_meta_stringdata_DiskEditDialog.data,
    qt_meta_data_DiskEditDialog,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *DiskEditDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *DiskEditDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_DiskEditDialog.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int DiskEditDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 11)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 11;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 11)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 11;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
