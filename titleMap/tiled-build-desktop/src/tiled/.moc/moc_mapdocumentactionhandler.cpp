/****************************************************************************
** Meta object code from reading C++ file 'mapdocumentactionhandler.h'
**
** Created: Wed May 11 10:52:19 2011
**      by: The Qt Meta Object Compiler version 62 (Qt 4.7.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../tiled/src/tiled/mapdocumentactionhandler.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mapdocumentactionhandler.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.7.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_Tiled__Internal__MapDocumentActionHandler[] = {

 // content:
       5,       // revision
       0,       // classname
       0,    0, // classinfo
      14,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: signature, parameters, type, tag, flags
      55,   43,   42,   42, 0x05,

 // slots: signature, parameters, type, tag, flags
      88,   42,   42,   42, 0x0a,
     100,   42,   42,   42, 0x0a,
     113,   42,   42,   42, 0x0a,
     128,   42,   42,   42, 0x0a,
     145,   42,   42,   42, 0x0a,
     162,   42,   42,   42, 0x0a,
     179,   42,   42,   42, 0x0a,
     201,   42,   42,   42, 0x0a,
     219,   42,   42,   42, 0x0a,
     233,   42,   42,   42, 0x0a,
     249,   42,   42,   42, 0x0a,
     263,   42,   42,   42, 0x0a,
     283,   42,   42,   42, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_Tiled__Internal__MapDocumentActionHandler[] = {
    "Tiled::Internal::MapDocumentActionHandler\0"
    "\0mapDocument\0mapDocumentChanged(MapDocument*)\0"
    "selectAll()\0selectNone()\0addTileLayer()\0"
    "addObjectGroup()\0duplicateLayer()\0"
    "mergeLayerDown()\0selectPreviousLayer()\0"
    "selectNextLayer()\0moveLayerUp()\0"
    "moveLayerDown()\0removeLayer()\0"
    "toggleOtherLayers()\0updateActions()\0"
};

const QMetaObject Tiled::Internal::MapDocumentActionHandler::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_Tiled__Internal__MapDocumentActionHandler,
      qt_meta_data_Tiled__Internal__MapDocumentActionHandler, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &Tiled::Internal::MapDocumentActionHandler::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *Tiled::Internal::MapDocumentActionHandler::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *Tiled::Internal::MapDocumentActionHandler::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_Tiled__Internal__MapDocumentActionHandler))
        return static_cast<void*>(const_cast< MapDocumentActionHandler*>(this));
    return QObject::qt_metacast(_clname);
}

int Tiled::Internal::MapDocumentActionHandler::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: mapDocumentChanged((*reinterpret_cast< MapDocument*(*)>(_a[1]))); break;
        case 1: selectAll(); break;
        case 2: selectNone(); break;
        case 3: addTileLayer(); break;
        case 4: addObjectGroup(); break;
        case 5: duplicateLayer(); break;
        case 6: mergeLayerDown(); break;
        case 7: selectPreviousLayer(); break;
        case 8: selectNextLayer(); break;
        case 9: moveLayerUp(); break;
        case 10: moveLayerDown(); break;
        case 11: removeLayer(); break;
        case 12: toggleOtherLayers(); break;
        case 13: updateActions(); break;
        default: ;
        }
        _id -= 14;
    }
    return _id;
}

// SIGNAL 0
void Tiled::Internal::MapDocumentActionHandler::mapDocumentChanged(MapDocument * _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_END_MOC_NAMESPACE
