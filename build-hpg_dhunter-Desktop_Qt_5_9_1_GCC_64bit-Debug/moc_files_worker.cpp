/****************************************************************************
** Meta object code from reading C++ file 'files_worker.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../hpg-dhunter-batch-master3/src/files_worker.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'files_worker.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Files_worker_t {
    QByteArrayData data[10];
    char stringdata0[90];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Files_worker_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Files_worker_t qt_meta_stringdata_Files_worker = {
    {
QT_MOC_LITERAL(0, 0, 12), // "Files_worker"
QT_MOC_LITERAL(1, 13, 18), // "lectura_solicitada"
QT_MOC_LITERAL(2, 32, 0), // ""
QT_MOC_LITERAL(3, 33, 13), // "fichero_leido"
QT_MOC_LITERAL(4, 47, 6), // "sample"
QT_MOC_LITERAL(5, 54, 5), // "chrom"
QT_MOC_LITERAL(6, 60, 6), // "inicio"
QT_MOC_LITERAL(7, 67, 5), // "final"
QT_MOC_LITERAL(8, 73, 8), // "finished"
QT_MOC_LITERAL(9, 82, 7) // "lectura"

    },
    "Files_worker\0lectura_solicitada\0\0"
    "fichero_leido\0sample\0chrom\0inicio\0"
    "final\0finished\0lectura"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Files_worker[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   34,    2, 0x06 /* Public */,
       3,    4,   35,    2, 0x06 /* Public */,
       8,    0,   44,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       9,    0,   45,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int, QMetaType::Int, QMetaType::Int, QMetaType::Int,    4,    5,    6,    7,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,

       0        // eod
};

void Files_worker::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Files_worker *_t = static_cast<Files_worker *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->lectura_solicitada(); break;
        case 1: _t->fichero_leido((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])),(*reinterpret_cast< int(*)>(_a[4]))); break;
        case 2: _t->finished(); break;
        case 3: _t->lectura(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (Files_worker::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Files_worker::lectura_solicitada)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (Files_worker::*_t)(int , int , int , int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Files_worker::fichero_leido)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (Files_worker::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Files_worker::finished)) {
                *result = 2;
                return;
            }
        }
    }
}

const QMetaObject Files_worker::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_Files_worker.data,
      qt_meta_data_Files_worker,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *Files_worker::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Files_worker::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Files_worker.stringdata0))
        return static_cast<void*>(const_cast< Files_worker*>(this));
    return QObject::qt_metacast(_clname);
}

int Files_worker::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
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
void Files_worker::lectura_solicitada()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void Files_worker::fichero_leido(int _t1, int _t2, int _t3, int _t4)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)), const_cast<void*>(reinterpret_cast<const void*>(&_t4)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void Files_worker::finished()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
