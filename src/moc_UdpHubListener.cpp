/****************************************************************************
** Meta object code from reading C++ file 'UdpHubListener.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "UdpHubListener.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'UdpHubListener.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_UdpHubListener_t {
    QByteArrayData data[10];
    char stringdata0[116];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_UdpHubListener_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_UdpHubListener_t qt_meta_stringdata_UdpHubListener = {
    {
QT_MOC_LITERAL(0, 0, 14), // "UdpHubListener"
QT_MOC_LITERAL(1, 15, 9), // "Listening"
QT_MOC_LITERAL(2, 25, 0), // ""
QT_MOC_LITERAL(3, 26, 16), // "ClientAddressSet"
QT_MOC_LITERAL(4, 43, 18), // "signalRemoveThread"
QT_MOC_LITERAL(5, 62, 2), // "id"
QT_MOC_LITERAL(6, 65, 13), // "signalStopped"
QT_MOC_LITERAL(7, 79, 11), // "signalError"
QT_MOC_LITERAL(8, 91, 12), // "errorMessage"
QT_MOC_LITERAL(9, 104, 11) // "testReceive"

    },
    "UdpHubListener\0Listening\0\0ClientAddressSet\0"
    "signalRemoveThread\0id\0signalStopped\0"
    "signalError\0errorMessage\0testReceive"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_UdpHubListener[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       5,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   44,    2, 0x06 /* Public */,
       3,    0,   45,    2, 0x06 /* Public */,
       4,    1,   46,    2, 0x06 /* Public */,
       6,    0,   49,    2, 0x06 /* Public */,
       7,    1,   50,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       9,    0,   53,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    5,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    8,

 // slots: parameters
    QMetaType::Void,

       0        // eod
};

void UdpHubListener::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<UdpHubListener *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->Listening(); break;
        case 1: _t->ClientAddressSet(); break;
        case 2: _t->signalRemoveThread((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 3: _t->signalStopped(); break;
        case 4: _t->signalError((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 5: _t->testReceive(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (UdpHubListener::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&UdpHubListener::Listening)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (UdpHubListener::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&UdpHubListener::ClientAddressSet)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (UdpHubListener::*)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&UdpHubListener::signalRemoveThread)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (UdpHubListener::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&UdpHubListener::signalStopped)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (UdpHubListener::*)(const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&UdpHubListener::signalError)) {
                *result = 4;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject UdpHubListener::staticMetaObject = { {
    QMetaObject::SuperData::link<QThread::staticMetaObject>(),
    qt_meta_stringdata_UdpHubListener.data,
    qt_meta_data_UdpHubListener,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *UdpHubListener::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *UdpHubListener::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_UdpHubListener.stringdata0))
        return static_cast<void*>(this);
    return QThread::qt_metacast(_clname);
}

int UdpHubListener::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QThread::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 6)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 6;
    }
    return _id;
}

// SIGNAL 0
void UdpHubListener::Listening()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void UdpHubListener::ClientAddressSet()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void UdpHubListener::signalRemoveThread(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void UdpHubListener::signalStopped()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}

// SIGNAL 4
void UdpHubListener::signalError(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
