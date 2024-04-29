/****************************************************************************
** Meta object code from reading C++ file 'credit_debit.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.6.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../credit_debit.h"
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
#error "The header file 'credit_debit.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_CLASScredit_debitENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASScredit_debitENDCLASS = QtMocHelpers::stringData(
    "credit_debit",
    "asiakasid",
    "",
    "QNetworkReply*",
    "reply",
    "on_CRDB_button_credit_clicked",
    "on_CRDB_button_debit_clicked",
    "on_CRDB_button_tapahtumat_clicked"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASScredit_debitENDCLASS_t {
    uint offsetsAndSizes[16];
    char stringdata0[13];
    char stringdata1[10];
    char stringdata2[1];
    char stringdata3[15];
    char stringdata4[6];
    char stringdata5[30];
    char stringdata6[29];
    char stringdata7[34];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASScredit_debitENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASScredit_debitENDCLASS_t qt_meta_stringdata_CLASScredit_debitENDCLASS = {
    {
        QT_MOC_LITERAL(0, 12),  // "credit_debit"
        QT_MOC_LITERAL(13, 9),  // "asiakasid"
        QT_MOC_LITERAL(23, 0),  // ""
        QT_MOC_LITERAL(24, 14),  // "QNetworkReply*"
        QT_MOC_LITERAL(39, 5),  // "reply"
        QT_MOC_LITERAL(45, 29),  // "on_CRDB_button_credit_clicked"
        QT_MOC_LITERAL(75, 28),  // "on_CRDB_button_debit_clicked"
        QT_MOC_LITERAL(104, 33)   // "on_CRDB_button_tapahtumat_cli..."
    },
    "credit_debit",
    "asiakasid",
    "",
    "QNetworkReply*",
    "reply",
    "on_CRDB_button_credit_clicked",
    "on_CRDB_button_debit_clicked",
    "on_CRDB_button_tapahtumat_clicked"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASScredit_debitENDCLASS[] = {

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
       5,    0,   41,    2, 0x08,    3 /* Private */,
       6,    0,   42,    2, 0x08,    4 /* Private */,
       7,    0,   43,    2, 0x08,    5 /* Private */,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

Q_CONSTINIT const QMetaObject credit_debit::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_CLASScredit_debitENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASScredit_debitENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASScredit_debitENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<credit_debit, std::true_type>,
        // method 'asiakasid'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QNetworkReply *, std::false_type>,
        // method 'on_CRDB_button_credit_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_CRDB_button_debit_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_CRDB_button_tapahtumat_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>
    >,
    nullptr
} };

void credit_debit::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<credit_debit *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->asiakasid((*reinterpret_cast< std::add_pointer_t<QNetworkReply*>>(_a[1]))); break;
        case 1: _t->on_CRDB_button_credit_clicked(); break;
        case 2: _t->on_CRDB_button_debit_clicked(); break;
        case 3: _t->on_CRDB_button_tapahtumat_clicked(); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
        case 0:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QNetworkReply* >(); break;
            }
            break;
        }
    }
}

const QMetaObject *credit_debit::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *credit_debit::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASScredit_debitENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int credit_debit::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    }
    return _id;
}
QT_WARNING_POP
