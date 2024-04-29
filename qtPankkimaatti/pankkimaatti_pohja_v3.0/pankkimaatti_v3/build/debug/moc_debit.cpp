/****************************************************************************
** Meta object code from reading C++ file 'debit.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.6.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../debit.h"
#include <QtNetwork/QSslPreSharedKeyAuthenticator>
#include <QtNetwork/QSslError>
#include <QtCore/qmetatype.h>

#if __has_include(<QtCore/qtmochelpers.h>)
#include <QtCore/qtmochelpers.h>
#else
QT_BEGIN_MOC_NAMESPACE
#endif


#include <memory>

#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'debit.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.6.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

#ifndef Q_CONSTINIT
#define Q_CONSTINIT
#endif

QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
QT_WARNING_DISABLE_GCC("-Wuseless-cast")
namespace {

#ifdef QT_MOC_HAS_STRINGDATA
struct qt_meta_stringdata_CLASSdebitENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSdebitENDCLASS = QtMocHelpers::stringData(
    "debit",
    "ReceiveDebit",
    "",
    "on_DB_button_nosto_clicked",
    "on_DB_button_takaisin_clicked",
    "on_DB_line_saldo_textChanged",
    "arg1"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSdebitENDCLASS_t {
    uint offsetsAndSizes[14];
    char stringdata0[6];
    char stringdata1[13];
    char stringdata2[1];
    char stringdata3[27];
    char stringdata4[30];
    char stringdata5[29];
    char stringdata6[5];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSdebitENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSdebitENDCLASS_t qt_meta_stringdata_CLASSdebitENDCLASS = {
    {
        QT_MOC_LITERAL(0, 5),  // "debit"
        QT_MOC_LITERAL(6, 12),  // "ReceiveDebit"
        QT_MOC_LITERAL(19, 0),  // ""
        QT_MOC_LITERAL(20, 26),  // "on_DB_button_nosto_clicked"
        QT_MOC_LITERAL(47, 29),  // "on_DB_button_takaisin_clicked"
        QT_MOC_LITERAL(77, 28),  // "on_DB_line_saldo_textChanged"
        QT_MOC_LITERAL(106, 4)   // "arg1"
    },
    "debit",
    "ReceiveDebit",
    "",
    "on_DB_button_nosto_clicked",
    "on_DB_button_takaisin_clicked",
    "on_DB_line_saldo_textChanged",
    "arg1"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSdebitENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       1,    1,   38,    2, 0x08,    1 /* Private */,
       3,    0,   41,    2, 0x08,    3 /* Private */,
       4,    0,   42,    2, 0x08,    4 /* Private */,
       5,    1,   43,    2, 0x08,    5 /* Private */,

 // slots: parameters
    QMetaType::Void, QMetaType::QByteArray,    2,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    6,

       0        // eod
};

Q_CONSTINIT const QMetaObject debit::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_CLASSdebitENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSdebitENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSdebitENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<debit, std::true_type>,
        // method 'ReceiveDebit'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QByteArray, std::false_type>,
        // method 'on_DB_button_nosto_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_DB_button_takaisin_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_DB_line_saldo_textChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>
    >,
    nullptr
} };

void debit::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<debit *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->ReceiveDebit((*reinterpret_cast< std::add_pointer_t<QByteArray>>(_a[1]))); break;
        case 1: _t->on_DB_button_nosto_clicked(); break;
        case 2: _t->on_DB_button_takaisin_clicked(); break;
        case 3: _t->on_DB_line_saldo_textChanged((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject *debit::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *debit::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSdebitENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int debit::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 4)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 4;
    }
    return _id;
}
QT_WARNING_POP
