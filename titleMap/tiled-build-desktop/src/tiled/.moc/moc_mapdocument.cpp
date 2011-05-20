/****************************************************************************
** Meta object code from reading C++ file 'mapdocument.h'
**
** Created: Wed May 11 10:52:19 2011
**      by: The Qt Meta Object Compiler version 62 (Qt 4.7.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../tiled/src/tiled/mapdocument.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mapdocument.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.7.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_Tiled__Internal__MapDocument[] = {

 // content:
       5,       // revision
       0,       // classname
       0,    0, // classinfo
      21,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
      18,       // signalCount

 // signals: signature, parameters, type, tag, flags
      30,   29,   29,   29, 0x05,
      48,   29,   29,   29, 0x05,
      92,   66,   29,   29, 0x05,
     130,   29,   29,   29, 0x05,
     155,   29,   29,   29, 0x05,
     174,  168,   29,   29, 0x05,
     190,  168,   29,   29, 0x05,
     208,  168,   29,   29, 0x05,
     226,   29,   29,   29, 0x05,
     251,  168,   29,   29, 0x05,
     288,  281,   29,   29, 0x05,
     324,  311,   29,   29, 0x05,
     367,  353,   29,   29, 0x05,
     402,  394,   29,   29, 0x05,
     435,  427,   29,   29, 0x05,
     465,  457,   29,   29, 0x05,
     497,  457,   29,   29, 0x05,
     531,  457,   29,   29, 0x05,

 // slots: signature, parameters, type, tag, flags
     565,  168,   29,   29, 0x08,
     583,  168,   29,   29, 0x08,
     612,  168,   29,   29, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_Tiled__Internal__MapDocument[] = {
    "Tiled::Internal::MapDocument\0\0"
    "fileNameChanged()\0modifiedChanged()\0"
    "newSelection,oldSelection\0"
    "tileSelectionChanged(QRegion,QRegion)\0"
    "selectedObjectsChanged()\0mapChanged()\0"
    "index\0layerAdded(int)\0layerRemoved(int)\0"
    "layerChanged(int)\0editLayerNameRequested()\0"
    "currentLayerIndexChanged(int)\0region\0"
    "regionChanged(QRegion)\0region,layer\0"
    "regionEdited(QRegion,Layer*)\0index,tileset\0"
    "tilesetAdded(int,Tileset*)\0tileset\0"
    "tilesetRemoved(Tileset*)\0from,to\0"
    "tilesetMoved(int,int)\0objects\0"
    "objectsAdded(QList<MapObject*>)\0"
    "objectsRemoved(QList<MapObject*>)\0"
    "objectsChanged(QList<MapObject*>)\0"
    "onLayerAdded(int)\0onLayerAboutToBeRemoved(int)\0"
    "onLayerRemoved(int)\0"
};

const QMetaObject Tiled::Internal::MapDocument::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_Tiled__Internal__MapDocument,
      qt_meta_data_Tiled__Internal__MapDocument, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &Tiled::Internal::MapDocument::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *Tiled::Internal::MapDocument::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *Tiled::Internal::MapDocument::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_Tiled__Internal__MapDocument))
        return static_cast<void*>(const_cast< MapDocument*>(this));
    return QObject::qt_metacast(_clname);
}

int Tiled::Internal::MapDocument::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: fileNameChanged(); break;
        case 1: modifiedChanged(); break;
        case 2: tileSelectionChanged((*reinterpret_cast< const QRegion(*)>(_a[1])),(*reinterpret_cast< const QRegion(*)>(_a[2]))); break;
        case 3: selectedObjectsChanged(); break;
        case 4: mapChanged(); break;
        case 5: layerAdded((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 6: layerRemoved((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 7: layerChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 8: editLayerNameRequested(); break;
        case 9: currentLayerIndexChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 10: regionChanged((*reinterpret_cast< const QRegion(*)>(_a[1]))); break;
        case 11: regionEdited((*reinterpret_cast< const QRegion(*)>(_a[1])),(*reinterpret_cast< Layer*(*)>(_a[2]))); break;
        case 12: tilesetAdded((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< Tileset*(*)>(_a[2]))); break;
        case 13: tilesetRemoved((*reinterpret_cast< Tileset*(*)>(_a[1]))); break;
        case 14: tilesetMoved((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 15: objectsAdded((*reinterpret_cast< const QList<MapObject*>(*)>(_a[1]))); break;
        case 16: objectsRemoved((*reinterpret_cast< const QList<MapObject*>(*)>(_a[1]))); break;
        case 17: objectsChanged((*reinterpret_cast< const QList<MapObject*>(*)>(_a[1]))); break;
        case 18: onLayerAdded((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 19: onLayerAboutToBeRemoved((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 20: onLayerRemoved((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
        _id -= 21;
    }
    return _id;
}

// SIGNAL 0
void Tiled::Internal::MapDocument::fileNameChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}

// SIGNAL 1
void Tiled::Internal::MapDocument::modifiedChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, 0);
}

// SIGNAL 2
void Tiled::Internal::MapDocument::tileSelectionChanged(const QRegion & _t1, const QRegion & _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void Tiled::Internal::MapDocument::selectedObjectsChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 3, 0);
}

// SIGNAL 4
void Tiled::Internal::MapDocument::mapChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 4, 0);
}

// SIGNAL 5
void Tiled::Internal::MapDocument::layerAdded(int _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}

// SIGNAL 6
void Tiled::Internal::MapDocument::layerRemoved(int _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
}

// SIGNAL 7
void Tiled::Internal::MapDocument::layerChanged(int _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 7, _a);
}

// SIGNAL 8
void Tiled::Internal::MapDocument::editLayerNameRequested()
{
    QMetaObject::activate(this, &staticMetaObject, 8, 0);
}

// SIGNAL 9
void Tiled::Internal::MapDocument::currentLayerIndexChanged(int _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 9, _a);
}

// SIGNAL 10
void Tiled::Internal::MapDocument::regionChanged(const QRegion & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 10, _a);
}

// SIGNAL 11
void Tiled::Internal::MapDocument::regionEdited(const QRegion & _t1, Layer * _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 11, _a);
}

// SIGNAL 12
void Tiled::Internal::MapDocument::tilesetAdded(int _t1, Tileset * _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 12, _a);
}

// SIGNAL 13
void Tiled::Internal::MapDocument::tilesetRemoved(Tileset * _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 13, _a);
}

// SIGNAL 14
void Tiled::Internal::MapDocument::tilesetMoved(int _t1, int _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 14, _a);
}

// SIGNAL 15
void Tiled::Internal::MapDocument::objectsAdded(const QList<MapObject*> & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 15, _a);
}

// SIGNAL 16
void Tiled::Internal::MapDocument::objectsRemoved(const QList<MapObject*> & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 16, _a);
}

// SIGNAL 17
void Tiled::Internal::MapDocument::objectsChanged(const QList<MapObject*> & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 17, _a);
}
QT_END_MOC_NAMESPACE
