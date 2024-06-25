/****************************************************************************
** Meta object code from reading C++ file 'connectionwidget.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.6.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../DesktopApp/connectionwidget.h"
#include <QtCore/qmetatype.h>

#if __has_include(<QtCore/qtmochelpers.h>)
#include <QtCore/qtmochelpers.h>
#else
QT_BEGIN_MOC_NAMESPACE
#endif


#include <memory>

#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'connectionwidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.6.2. It"
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
struct qt_meta_stringdata_CLASSConnectionWidgetENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSConnectionWidgetENDCLASS = QtMocHelpers::stringData(
    "ConnectionWidget",
    "connected",
    "",
    "disconnected",
    "onConnectButtonClicked",
    "onDisconnectButtonClicked",
    "onSocket1Connected",
    "onSocket2Connected",
    "onSocket1Disconnected",
    "onSocket2Disconnected",
    "onConnected",
    "onDisconnected",
    "onConnectionError",
    "QAbstractSocket::SocketError",
    "socketError"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSConnectionWidgetENDCLASS_t {
    uint offsetsAndSizes[30];
    char stringdata0[17];
    char stringdata1[10];
    char stringdata2[1];
    char stringdata3[13];
    char stringdata4[23];
    char stringdata5[26];
    char stringdata6[19];
    char stringdata7[19];
    char stringdata8[22];
    char stringdata9[22];
    char stringdata10[12];
    char stringdata11[15];
    char stringdata12[18];
    char stringdata13[29];
    char stringdata14[12];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSConnectionWidgetENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSConnectionWidgetENDCLASS_t qt_meta_stringdata_CLASSConnectionWidgetENDCLASS = {
    {
        QT_MOC_LITERAL(0, 16),  // "ConnectionWidget"
        QT_MOC_LITERAL(17, 9),  // "connected"
        QT_MOC_LITERAL(27, 0),  // ""
        QT_MOC_LITERAL(28, 12),  // "disconnected"
        QT_MOC_LITERAL(41, 22),  // "onConnectButtonClicked"
        QT_MOC_LITERAL(64, 25),  // "onDisconnectButtonClicked"
        QT_MOC_LITERAL(90, 18),  // "onSocket1Connected"
        QT_MOC_LITERAL(109, 18),  // "onSocket2Connected"
        QT_MOC_LITERAL(128, 21),  // "onSocket1Disconnected"
        QT_MOC_LITERAL(150, 21),  // "onSocket2Disconnected"
        QT_MOC_LITERAL(172, 11),  // "onConnected"
        QT_MOC_LITERAL(184, 14),  // "onDisconnected"
        QT_MOC_LITERAL(199, 17),  // "onConnectionError"
        QT_MOC_LITERAL(217, 28),  // "QAbstractSocket::SocketError"
        QT_MOC_LITERAL(246, 11)   // "socketError"
    },
    "ConnectionWidget",
    "connected",
    "",
    "disconnected",
    "onConnectButtonClicked",
    "onDisconnectButtonClicked",
    "onSocket1Connected",
    "onSocket2Connected",
    "onSocket1Disconnected",
    "onSocket2Disconnected",
    "onConnected",
    "onDisconnected",
    "onConnectionError",
    "QAbstractSocket::SocketError",
    "socketError"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSConnectionWidgetENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
      11,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   80,    2, 0x06,    1 /* Public */,
       3,    0,   81,    2, 0x06,    2 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       4,    0,   82,    2, 0x08,    3 /* Private */,
       5,    0,   83,    2, 0x08,    4 /* Private */,
       6,    0,   84,    2, 0x08,    5 /* Private */,
       7,    0,   85,    2, 0x08,    6 /* Private */,
       8,    0,   86,    2, 0x08,    7 /* Private */,
       9,    0,   87,    2, 0x08,    8 /* Private */,
      10,    0,   88,    2, 0x08,    9 /* Private */,
      11,    0,   89,    2, 0x08,   10 /* Private */,
      12,    1,   90,    2, 0x08,   11 /* Private */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 13,   14,

       0        // eod
};

Q_CONSTINIT const QMetaObject ConnectionWidget::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_CLASSConnectionWidgetENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSConnectionWidgetENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSConnectionWidgetENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<ConnectionWidget, std::true_type>,
        // method 'connected'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'disconnected'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'onConnectButtonClicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'onDisconnectButtonClicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'onSocket1Connected'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'onSocket2Connected'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'onSocket1Disconnected'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'onSocket2Disconnected'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'onConnected'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'onDisconnected'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'onConnectionError'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QAbstractSocket::SocketError, std::false_type>
    >,
    nullptr
} };

void ConnectionWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<ConnectionWidget *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->connected(); break;
        case 1: _t->disconnected(); break;
        case 2: _t->onConnectButtonClicked(); break;
        case 3: _t->onDisconnectButtonClicked(); break;
        case 4: _t->onSocket1Connected(); break;
        case 5: _t->onSocket2Connected(); break;
        case 6: _t->onSocket1Disconnected(); break;
        case 7: _t->onSocket2Disconnected(); break;
        case 8: _t->onConnected(); break;
        case 9: _t->onDisconnected(); break;
        case 10: _t->onConnectionError((*reinterpret_cast< std::add_pointer_t<QAbstractSocket::SocketError>>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
        case 10:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QAbstractSocket::SocketError >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (ConnectionWidget::*)();
            if (_t _q_method = &ConnectionWidget::connected; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (ConnectionWidget::*)();
            if (_t _q_method = &ConnectionWidget::disconnected; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 1;
                return;
            }
        }
    }
}

const QMetaObject *ConnectionWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ConnectionWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSConnectionWidgetENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int ConnectionWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
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

// SIGNAL 0
void ConnectionWidget::connected()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void ConnectionWidget::disconnected()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}
QT_WARNING_POP
