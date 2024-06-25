/****************************************************************************
** Meta object code from reading C++ file 'datahandler.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.6.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../DesktopApp/datahandler.h"
#include <QtCore/qmetatype.h>

#if __has_include(<QtCore/qtmochelpers.h>)
#include <QtCore/qtmochelpers.h>
#else
QT_BEGIN_MOC_NAMESPACE
#endif


#include <memory>

#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'datahandler.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_CLASSDataHandlerENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSDataHandlerENDCLASS = QtMocHelpers::stringData(
    "DataHandler",
    "faceReceived",
    "",
    "faceImage",
    "readingsReceived",
    "std::vector<std::vector<float>>",
    "readings",
    "onDataReady1",
    "onDataReady2",
    "checkFrameReception",
    "checkReadingsReception",
    "calculateFPS"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSDataHandlerENDCLASS_t {
    uint offsetsAndSizes[24];
    char stringdata0[12];
    char stringdata1[13];
    char stringdata2[1];
    char stringdata3[10];
    char stringdata4[17];
    char stringdata5[32];
    char stringdata6[9];
    char stringdata7[13];
    char stringdata8[13];
    char stringdata9[20];
    char stringdata10[23];
    char stringdata11[13];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSDataHandlerENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSDataHandlerENDCLASS_t qt_meta_stringdata_CLASSDataHandlerENDCLASS = {
    {
        QT_MOC_LITERAL(0, 11),  // "DataHandler"
        QT_MOC_LITERAL(12, 12),  // "faceReceived"
        QT_MOC_LITERAL(25, 0),  // ""
        QT_MOC_LITERAL(26, 9),  // "faceImage"
        QT_MOC_LITERAL(36, 16),  // "readingsReceived"
        QT_MOC_LITERAL(53, 31),  // "std::vector<std::vector<float>>"
        QT_MOC_LITERAL(85, 8),  // "readings"
        QT_MOC_LITERAL(94, 12),  // "onDataReady1"
        QT_MOC_LITERAL(107, 12),  // "onDataReady2"
        QT_MOC_LITERAL(120, 19),  // "checkFrameReception"
        QT_MOC_LITERAL(140, 22),  // "checkReadingsReception"
        QT_MOC_LITERAL(163, 12)   // "calculateFPS"
    },
    "DataHandler",
    "faceReceived",
    "",
    "faceImage",
    "readingsReceived",
    "std::vector<std::vector<float>>",
    "readings",
    "onDataReady1",
    "onDataReady2",
    "checkFrameReception",
    "checkReadingsReception",
    "calculateFPS"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSDataHandlerENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    1,   56,    2, 0x06,    1 /* Public */,
       4,    1,   59,    2, 0x06,    3 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       7,    0,   62,    2, 0x08,    5 /* Private */,
       8,    0,   63,    2, 0x08,    6 /* Private */,
       9,    0,   64,    2, 0x08,    7 /* Private */,
      10,    0,   65,    2, 0x08,    8 /* Private */,
      11,    0,   66,    2, 0x08,    9 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::QImage,    3,
    QMetaType::Void, 0x80000000 | 5,    6,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

Q_CONSTINIT const QMetaObject DataHandler::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_CLASSDataHandlerENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSDataHandlerENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSDataHandlerENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<DataHandler, std::true_type>,
        // method 'faceReceived'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QImage, std::false_type>,
        // method 'readingsReceived'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<std::vector<std::vector<float>>, std::false_type>,
        // method 'onDataReady1'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'onDataReady2'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'checkFrameReception'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'checkReadingsReception'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'calculateFPS'
        QtPrivate::TypeAndForceComplete<void, std::false_type>
    >,
    nullptr
} };

void DataHandler::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<DataHandler *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->faceReceived((*reinterpret_cast< std::add_pointer_t<QImage>>(_a[1]))); break;
        case 1: _t->readingsReceived((*reinterpret_cast< std::add_pointer_t<std::vector<std::vector<float>>>>(_a[1]))); break;
        case 2: _t->onDataReady1(); break;
        case 3: _t->onDataReady2(); break;
        case 4: _t->checkFrameReception(); break;
        case 5: _t->checkReadingsReception(); break;
        case 6: _t->calculateFPS(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (DataHandler::*)(QImage );
            if (_t _q_method = &DataHandler::faceReceived; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (DataHandler::*)(std::vector<std::vector<float>> );
            if (_t _q_method = &DataHandler::readingsReceived; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 1;
                return;
            }
        }
    }
}

const QMetaObject *DataHandler::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *DataHandler::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSDataHandlerENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int DataHandler::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 7)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 7;
    }
    return _id;
}

// SIGNAL 0
void DataHandler::faceReceived(QImage _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void DataHandler::readingsReceived(std::vector<std::vector<float>> _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_WARNING_POP
