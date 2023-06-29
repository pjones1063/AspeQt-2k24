/****************************************************************************
** Meta object code from reading C++ file 'textprinterwindow.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "textprinterwindow.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'textprinterwindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_TextPrinterWindow_t {
    QByteArrayData data[15];
    char stringdata0[325];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_TextPrinterWindow_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_TextPrinterWindow_t qt_meta_stringdata_TextPrinterWindow = {
    {
QT_MOC_LITERAL(0, 0, 17), // "TextPrinterWindow"
QT_MOC_LITERAL(1, 18, 6), // "closed"
QT_MOC_LITERAL(2, 25, 0), // ""
QT_MOC_LITERAL(3, 26, 23), // "on_actionSave_triggered"
QT_MOC_LITERAL(4, 50, 24), // "on_actionClear_triggered"
QT_MOC_LITERAL(5, 75, 28), // "on_actionWord_wrap_triggered"
QT_MOC_LITERAL(6, 104, 24), // "on_actionPrint_triggered"
QT_MOC_LITERAL(7, 129, 5), // "print"
QT_MOC_LITERAL(8, 135, 4), // "text"
QT_MOC_LITERAL(9, 140, 30), // "on_actionAtasciiFont_triggered"
QT_MOC_LITERAL(10, 171, 28), // "on_actionFont_Size_triggered"
QT_MOC_LITERAL(11, 200, 33), // "on_actionHideShow_Ascii_trigg..."
QT_MOC_LITERAL(12, 234, 35), // "on_actionHideShow_Atascii_tri..."
QT_MOC_LITERAL(13, 270, 37), // "on_actionStrip_Line_Numbers_t..."
QT_MOC_LITERAL(14, 308, 16) // "asciiFontChanged"

    },
    "TextPrinterWindow\0closed\0\0"
    "on_actionSave_triggered\0"
    "on_actionClear_triggered\0"
    "on_actionWord_wrap_triggered\0"
    "on_actionPrint_triggered\0print\0text\0"
    "on_actionAtasciiFont_triggered\0"
    "on_actionFont_Size_triggered\0"
    "on_actionHideShow_Ascii_triggered\0"
    "on_actionHideShow_Atascii_triggered\0"
    "on_actionStrip_Line_Numbers_triggered\0"
    "asciiFontChanged"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_TextPrinterWindow[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      12,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   74,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       3,    0,   75,    2, 0x08 /* Private */,
       4,    0,   76,    2, 0x08 /* Private */,
       5,    0,   77,    2, 0x08 /* Private */,
       6,    0,   78,    2, 0x08 /* Private */,
       7,    1,   79,    2, 0x08 /* Private */,
       9,    0,   82,    2, 0x08 /* Private */,
      10,    0,   83,    2, 0x08 /* Private */,
      11,    0,   84,    2, 0x08 /* Private */,
      12,    0,   85,    2, 0x08 /* Private */,
      13,    0,   86,    2, 0x08 /* Private */,
      14,    1,   87,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    8,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QFont,    2,

       0        // eod
};

void TextPrinterWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<TextPrinterWindow *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->closed(); break;
        case 1: _t->on_actionSave_triggered(); break;
        case 2: _t->on_actionClear_triggered(); break;
        case 3: _t->on_actionWord_wrap_triggered(); break;
        case 4: _t->on_actionPrint_triggered(); break;
        case 5: _t->print((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 6: _t->on_actionAtasciiFont_triggered(); break;
        case 7: _t->on_actionFont_Size_triggered(); break;
        case 8: _t->on_actionHideShow_Ascii_triggered(); break;
        case 9: _t->on_actionHideShow_Atascii_triggered(); break;
        case 10: _t->on_actionStrip_Line_Numbers_triggered(); break;
        case 11: _t->asciiFontChanged((*reinterpret_cast< const QFont(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (TextPrinterWindow::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&TextPrinterWindow::closed)) {
                *result = 0;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject TextPrinterWindow::staticMetaObject = { {
    QMetaObject::SuperData::link<QMainWindow::staticMetaObject>(),
    qt_meta_stringdata_TextPrinterWindow.data,
    qt_meta_data_TextPrinterWindow,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *TextPrinterWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *TextPrinterWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_TextPrinterWindow.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int TextPrinterWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 12)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 12;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 12)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 12;
    }
    return _id;
}

// SIGNAL 0
void TextPrinterWindow::closed()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
