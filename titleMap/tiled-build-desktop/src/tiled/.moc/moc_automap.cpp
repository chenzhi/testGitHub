/****************************************************************************
** Meta object code from reading C++ file 'automap.h'
**
** Created: Wed May 11 10:52:16 2011
**      by: The Qt Meta Object Compiler version 62 (Qt 4.7.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../tiled/src/tiled/automap.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'automap.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.7.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_Tiled__Internal__AutoMapper[] = {

 // content:
       5,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      35,   29,   28,   28, 0x08,
      49,   29,   28,   28, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_Tiled__Internal__AutoMapper[] = {
    "Tiled::Internal::AutoMapper\0\0index\0"
    "layerAdd(int)\0layerRemove(int)\0"
};

const QMetaObject Tiled::Internal::AutoMapper::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_Tiled__Internal__AutoMapper,
      qt_meta_data_Tiled__Internal__AutoMapper, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &Tiled::Internal::AutoMapper::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *Tiled::Internal::AutoMapper::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *Tiled::Internal::AutoMapper::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_Tiled__Internal__AutoMapper))
        return static_cast<void*>(const_cast< AutoMapper*>(this));
    return QObject::qt_metacast(_clname);
}

int Tiled::Internal::AutoMapper::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: layerAdd((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: layerRemove((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
        _id -= 2;
    }
    return _id;
}
static const uint qt_meta_data_Tiled__Internal__AutomaticMappingManager[] = {

 // content:
       5,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      54,   42,   41,   41, 0x0a,
      83,   78,   41,   41, 0x08,
     104,   41,   41,   41, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_Tiled__Internal__AutomaticMappingManager[] = {
    "Tiled::Internal::AutomaticMappingManager\0"
    "\0where,layer\0automap(QRegion,Layer*)\0"
    "path\0fileChanged(QString)\0"
    "fileChangedTimeout()\0"
};

const QMetaObject Tiled::Internal::AutomaticMappingManager::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_Tiled__Internal__AutomaticMappingManager,
      qt_meta_data_Tiled__Internal__AutomaticMappingManager, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &Tiled::Internal::AutomaticMappingManager::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *Tiled::Internal::AutomaticMappingManager::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *Tiled::Internal::AutomaticMappingManager::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_Tiled__Internal__AutomaticMappingManager))
        return static_cast<void*>(const_cast< AutomaticMappingManager*>(this));
    return QObject::qt_metacast(_clname);
}

int Tiled::Internal::AutomaticMappingManager::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: automap((*reinterpret_cast< QRegion(*)>(_a[1])),(*reinterpret_cast< Layer*(*)>(_a[2]))); break;
        case 1: fileChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 2: fileChangedTimeout(); break;
        default: ;
        }
        _id -= 3;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
