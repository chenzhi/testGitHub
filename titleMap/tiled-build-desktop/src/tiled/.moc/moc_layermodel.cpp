/****************************************************************************
** Meta object code from reading C++ file 'layermodel.h'
**
** Created: Wed May 11 10:52:18 2011
**      by: The Qt Meta Object Compiler version 62 (Qt 4.7.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../tiled/src/tiled/layermodel.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'layermodel.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.7.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_Tiled__Internal__LayerModel[] = {

 // content:
       5,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       6,       // signalCount

 // signals: signature, parameters, type, tag, flags
      35,   29,   28,   28, 0x05,
      51,   29,   28,   28, 0x05,
      78,   29,   28,   28, 0x05,
      96,   29,   28,   28, 0x05,
     123,   29,   28,   28, 0x05,
     141,   29,   28,   28, 0x05,

       0        // eod
};

static const char qt_meta_stringdata_Tiled__Internal__LayerModel[] = {
    "Tiled::Internal::LayerModel\0\0index\0"
    "layerAdded(int)\0layerAboutToBeRemoved(int)\0"
    "layerRemoved(int)\0layerAboutToBeRenamed(int)\0"
    "layerRenamed(int)\0layerChanged(int)\0"
};

const QMetaObject Tiled::Internal::LayerModel::staticMetaObject = {
    { &QAbstractListModel::staticMetaObject, qt_meta_stringdata_Tiled__Internal__LayerModel,
      qt_meta_data_Tiled__Internal__LayerModel, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &Tiled::Internal::LayerModel::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *Tiled::Internal::LayerModel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *Tiled::Internal::LayerModel::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_Tiled__Internal__LayerModel))
        return static_cast<void*>(const_cast< LayerModel*>(this));
    return QAbstractListModel::qt_metacast(_clname);
}

int Tiled::Internal::LayerModel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QAbstractListModel::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: layerAdded((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: layerAboutToBeRemoved((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: layerRemoved((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 3: layerAboutToBeRenamed((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 4: layerRenamed((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 5: layerChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
        _id -= 6;
    }
    return _id;
}

// SIGNAL 0
void Tiled::Internal::LayerModel::layerAdded(int _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void Tiled::Internal::LayerModel::layerAboutToBeRemoved(int _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void Tiled::Internal::LayerModel::layerRemoved(int _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void Tiled::Internal::LayerModel::layerAboutToBeRenamed(int _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void Tiled::Internal::LayerModel::layerRenamed(int _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void Tiled::Internal::LayerModel::layerChanged(int _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}
QT_END_MOC_NAMESPACE
