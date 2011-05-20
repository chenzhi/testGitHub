/****************************************************************************
** Meta object code from reading C++ file 'mapscene.h'
**
** Created: Wed May 11 10:52:19 2011
**      by: The Qt Meta Object Compiler version 62 (Qt 4.7.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../tiled/src/tiled/mapscene.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mapscene.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.7.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_Tiled__Internal__MapScene[] = {

 // content:
       5,       // revision
       0,       // classname
       0,    0, // classinfo
      13,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      35,   27,   26,   26, 0x0a,
      56,   26,   26,   26, 0x08,
      78,   71,   26,   26, 0x08,
     101,   26,   26,   26, 0x08,
     128,   26,   26,   26, 0x08,
     149,  141,   26,   26, 0x08,
     180,  174,   26,   26, 0x08,
     196,  174,   26,   26, 0x08,
     214,  174,   26,   26, 0x08,
     240,  232,   26,   26, 0x08,
     272,  232,   26,   26, 0x08,
     306,  232,   26,   26, 0x08,
     340,   26,   26,   26, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_Tiled__Internal__MapScene[] = {
    "Tiled::Internal::MapScene\0\0visible\0"
    "setGridVisible(bool)\0refreshScene()\0"
    "region\0repaintRegion(QRegion)\0"
    "currentLayerIndexChanged()\0mapChanged()\0"
    "tileset\0tilesetChanged(Tileset*)\0index\0"
    "layerAdded(int)\0layerRemoved(int)\0"
    "layerChanged(int)\0objects\0"
    "objectsAdded(QList<MapObject*>)\0"
    "objectsRemoved(QList<MapObject*>)\0"
    "objectsChanged(QList<MapObject*>)\0"
    "updateSelectedObjectItems()\0"
};

const QMetaObject Tiled::Internal::MapScene::staticMetaObject = {
    { &QGraphicsScene::staticMetaObject, qt_meta_stringdata_Tiled__Internal__MapScene,
      qt_meta_data_Tiled__Internal__MapScene, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &Tiled::Internal::MapScene::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *Tiled::Internal::MapScene::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *Tiled::Internal::MapScene::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_Tiled__Internal__MapScene))
        return static_cast<void*>(const_cast< MapScene*>(this));
    return QGraphicsScene::qt_metacast(_clname);
}

int Tiled::Internal::MapScene::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QGraphicsScene::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: setGridVisible((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 1: refreshScene(); break;
        case 2: repaintRegion((*reinterpret_cast< const QRegion(*)>(_a[1]))); break;
        case 3: currentLayerIndexChanged(); break;
        case 4: mapChanged(); break;
        case 5: tilesetChanged((*reinterpret_cast< Tileset*(*)>(_a[1]))); break;
        case 6: layerAdded((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 7: layerRemoved((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 8: layerChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 9: objectsAdded((*reinterpret_cast< const QList<MapObject*>(*)>(_a[1]))); break;
        case 10: objectsRemoved((*reinterpret_cast< const QList<MapObject*>(*)>(_a[1]))); break;
        case 11: objectsChanged((*reinterpret_cast< const QList<MapObject*>(*)>(_a[1]))); break;
        case 12: updateSelectedObjectItems(); break;
        default: ;
        }
        _id -= 13;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
