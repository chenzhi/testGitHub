/****************************************************************************
** Meta object code from reading C++ file 'documentmanager.h'
**
** Created: Wed May 11 10:52:17 2011
**      by: The Qt Meta Object Compiler version 62 (Qt 4.7.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../tiled/src/tiled/documentmanager.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'documentmanager.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.7.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_Tiled__Internal__DocumentManager[] = {

 // content:
       5,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: signature, parameters, type, tag, flags
      46,   34,   33,   33, 0x05,
      89,   83,   33,   33, 0x05,

 // slots: signature, parameters, type, tag, flags
     117,   33,   33,   33, 0x0a,
     140,   33,   33,   33, 0x0a,
     164,   33,   33,   33, 0x08,
     191,  186,   33,   33, 0x08,
     222,   33,   33,   33, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_Tiled__Internal__DocumentManager[] = {
    "Tiled::Internal::DocumentManager\0\0"
    "mapDocument\0currentDocumentChanged(MapDocument*)\0"
    "index\0documentCloseRequested(int)\0"
    "switchToLeftDocument()\0switchToRightDocument()\0"
    "currentIndexChanged()\0tool\0"
    "setSelectedTool(AbstractTool*)\0"
    "updateDocumentTab()\0"
};

const QMetaObject Tiled::Internal::DocumentManager::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_Tiled__Internal__DocumentManager,
      qt_meta_data_Tiled__Internal__DocumentManager, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &Tiled::Internal::DocumentManager::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *Tiled::Internal::DocumentManager::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *Tiled::Internal::DocumentManager::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_Tiled__Internal__DocumentManager))
        return static_cast<void*>(const_cast< DocumentManager*>(this));
    return QObject::qt_metacast(_clname);
}

int Tiled::Internal::DocumentManager::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: currentDocumentChanged((*reinterpret_cast< MapDocument*(*)>(_a[1]))); break;
        case 1: documentCloseRequested((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: switchToLeftDocument(); break;
        case 3: switchToRightDocument(); break;
        case 4: currentIndexChanged(); break;
        case 5: setSelectedTool((*reinterpret_cast< AbstractTool*(*)>(_a[1]))); break;
        case 6: updateDocumentTab(); break;
        default: ;
        }
        _id -= 7;
    }
    return _id;
}

// SIGNAL 0
void Tiled::Internal::DocumentManager::currentDocumentChanged(MapDocument * _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void Tiled::Internal::DocumentManager::documentCloseRequested(int _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_END_MOC_NAMESPACE
