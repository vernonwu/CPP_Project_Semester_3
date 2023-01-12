/****************************************************************************
** Meta object code from reading C++ file 'InsertWindow.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.9)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../InsertWindow.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'InsertWindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.9. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_InsertWindow_t {
    QByteArrayData data[12];
    char stringdata0[101];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_InsertWindow_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_InsertWindow_t qt_meta_stringdata_InsertWindow = {
    {
QT_MOC_LITERAL(0, 0, 12), // "InsertWindow"
QT_MOC_LITERAL(1, 13, 9), // "sendData1"
QT_MOC_LITERAL(2, 23, 0), // ""
QT_MOC_LITERAL(3, 24, 4), // "date"
QT_MOC_LITERAL(4, 29, 4), // "type"
QT_MOC_LITERAL(5, 34, 6), // "amount"
QT_MOC_LITERAL(6, 41, 11), // "std::string"
QT_MOC_LITERAL(7, 53, 6), // "remark"
QT_MOC_LITERAL(8, 60, 11), // "select_Date"
QT_MOC_LITERAL(9, 72, 11), // "insert_Data"
QT_MOC_LITERAL(10, 84, 11), // "receiveDate"
QT_MOC_LITERAL(11, 96, 4) // "data"

    },
    "InsertWindow\0sendData1\0\0date\0type\0"
    "amount\0std::string\0remark\0select_Date\0"
    "insert_Data\0receiveDate\0data"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_InsertWindow[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    4,   34,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       8,    0,   43,    2, 0x0a /* Public */,
       9,    0,   44,    2, 0x0a /* Public */,
      10,    1,   45,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::QDate, QMetaType::Int, QMetaType::Double, 0x80000000 | 6,    3,    4,    5,    7,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QDate,   11,

       0        // eod
};

void InsertWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        InsertWindow *_t = static_cast<InsertWindow *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->sendData1((*reinterpret_cast< QDate(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< double(*)>(_a[3])),(*reinterpret_cast< std::string(*)>(_a[4]))); break;
        case 1: _t->select_Date(); break;
        case 2: _t->insert_Data(); break;
        case 3: _t->receiveDate((*reinterpret_cast< QDate(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (InsertWindow::*_t)(QDate , int , double , std::string );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&InsertWindow::sendData1)) {
                *result = 0;
                return;
            }
        }
    }
}

const QMetaObject InsertWindow::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_InsertWindow.data,
      qt_meta_data_InsertWindow,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *InsertWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *InsertWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_InsertWindow.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int InsertWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 4)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 4;
    }
    return _id;
}

// SIGNAL 0
void InsertWindow::sendData1(QDate _t1, int _t2, double _t3, std::string _t4)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)), const_cast<void*>(reinterpret_cast<const void*>(&_t4)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
