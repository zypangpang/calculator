/****************************************************************************
** Meta object code from reading C++ file 'mainwindow.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.5.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../polynomial/mainwindow.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mainwindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.5.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_MainWindow_t {
    QByteArrayData data[21];
    char stringdata0[387];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_MainWindow_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_MainWindow_t qt_meta_stringdata_MainWindow = {
    {
QT_MOC_LITERAL(0, 0, 10), // "MainWindow"
QT_MOC_LITERAL(1, 11, 6), // "doHelp"
QT_MOC_LITERAL(2, 18, 0), // ""
QT_MOC_LITERAL(3, 19, 7), // "doAbout"
QT_MOC_LITERAL(4, 27, 18), // "on_button7_clicked"
QT_MOC_LITERAL(5, 46, 18), // "on_button8_clicked"
QT_MOC_LITERAL(6, 65, 18), // "on_button4_clicked"
QT_MOC_LITERAL(7, 84, 18), // "on_button1_clicked"
QT_MOC_LITERAL(8, 103, 18), // "on_button2_clicked"
QT_MOC_LITERAL(9, 122, 18), // "on_button3_clicked"
QT_MOC_LITERAL(10, 141, 18), // "on_button0_clicked"
QT_MOC_LITERAL(11, 160, 18), // "on_button6_clicked"
QT_MOC_LITERAL(12, 179, 18), // "on_button9_clicked"
QT_MOC_LITERAL(13, 198, 18), // "on_button5_clicked"
QT_MOC_LITERAL(14, 217, 24), // "on_button_answer_clicked"
QT_MOC_LITERAL(15, 242, 22), // "on_button_Diff_clicked"
QT_MOC_LITERAL(16, 265, 27), // "on_button_erasecoef_clicked"
QT_MOC_LITERAL(17, 293, 26), // "on_button_eraseexp_clicked"
QT_MOC_LITERAL(18, 320, 22), // "on_button_coef_clicked"
QT_MOC_LITERAL(19, 343, 21), // "on_button_exp_clicked"
QT_MOC_LITERAL(20, 365, 21) // "on_button_neg_clicked"

    },
    "MainWindow\0doHelp\0\0doAbout\0"
    "on_button7_clicked\0on_button8_clicked\0"
    "on_button4_clicked\0on_button1_clicked\0"
    "on_button2_clicked\0on_button3_clicked\0"
    "on_button0_clicked\0on_button6_clicked\0"
    "on_button9_clicked\0on_button5_clicked\0"
    "on_button_answer_clicked\0"
    "on_button_Diff_clicked\0"
    "on_button_erasecoef_clicked\0"
    "on_button_eraseexp_clicked\0"
    "on_button_coef_clicked\0on_button_exp_clicked\0"
    "on_button_neg_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MainWindow[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      19,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,  109,    2, 0x08 /* Private */,
       3,    0,  110,    2, 0x08 /* Private */,
       4,    0,  111,    2, 0x08 /* Private */,
       5,    0,  112,    2, 0x08 /* Private */,
       6,    0,  113,    2, 0x08 /* Private */,
       7,    0,  114,    2, 0x08 /* Private */,
       8,    0,  115,    2, 0x08 /* Private */,
       9,    0,  116,    2, 0x08 /* Private */,
      10,    0,  117,    2, 0x08 /* Private */,
      11,    0,  118,    2, 0x08 /* Private */,
      12,    0,  119,    2, 0x08 /* Private */,
      13,    0,  120,    2, 0x08 /* Private */,
      14,    0,  121,    2, 0x08 /* Private */,
      15,    0,  122,    2, 0x08 /* Private */,
      16,    0,  123,    2, 0x08 /* Private */,
      17,    0,  124,    2, 0x08 /* Private */,
      18,    0,  125,    2, 0x08 /* Private */,
      19,    0,  126,    2, 0x08 /* Private */,
      20,    0,  127,    2, 0x08 /* Private */,

 // slots: parameters
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
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void MainWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        MainWindow *_t = static_cast<MainWindow *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->doHelp(); break;
        case 1: _t->doAbout(); break;
        case 2: _t->on_button7_clicked(); break;
        case 3: _t->on_button8_clicked(); break;
        case 4: _t->on_button4_clicked(); break;
        case 5: _t->on_button1_clicked(); break;
        case 6: _t->on_button2_clicked(); break;
        case 7: _t->on_button3_clicked(); break;
        case 8: _t->on_button0_clicked(); break;
        case 9: _t->on_button6_clicked(); break;
        case 10: _t->on_button9_clicked(); break;
        case 11: _t->on_button5_clicked(); break;
        case 12: _t->on_button_answer_clicked(); break;
        case 13: _t->on_button_Diff_clicked(); break;
        case 14: _t->on_button_erasecoef_clicked(); break;
        case 15: _t->on_button_eraseexp_clicked(); break;
        case 16: _t->on_button_coef_clicked(); break;
        case 17: _t->on_button_exp_clicked(); break;
        case 18: _t->on_button_neg_clicked(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObject MainWindow::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_MainWindow.data,
      qt_meta_data_MainWindow,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *MainWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MainWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_MainWindow.stringdata0))
        return static_cast<void*>(const_cast< MainWindow*>(this));
    return QMainWindow::qt_metacast(_clname);
}

int MainWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 19)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 19;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 19)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 19;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
