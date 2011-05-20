/****************************************************************************
** Meta object code from reading C++ file 'quickstampmanager.h'
**
** Created: Wed May 11 10:52:24 2011
**      by: The Qt Meta Object Compiler version 62 (Qt 4.7.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../tiled/src/tiled/quickstampmanager.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'quickstampmanager.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.7.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_Tiled__Internal__QuickStampManager[] = {

 // content:
       5,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: signature, parameters, type, tag, flags
      36,   35,   35,   35, 0x05,

 // slots: signature, parameters, type, tag, flags
      74,   68,   35,   35, 0x0a,
      96,   68,   35,   35, 0x0a,
     128,  116,   35,   35, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_Tiled__Internal__QuickStampManager[] = {
    "Tiled::Internal::QuickStampManager\0\0"
    "setStampBrush(const TileLayer*)\0index\0"
    "selectQuickStamp(int)\0saveQuickStamp(int)\0"
    "mapDocument\0setMapDocument(MapDocument*)\0"
};

const QMetaObject Tiled::Internal::QuickStampManager::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_Tiled__Internal__QuickStampManager,
      qt_meta_data_Tiled__Internal__QuickStampManager, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &Tiled::Internal::QuickStampManager::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *Tiled::Internal::QuickStampManager::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *Tiled::Internal::QuickStampManager::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_Tiled__Internal__QuickStampManager))
        return static_cast<void*>(const_cast< QuickStampManager*>(this));
    return QObject::qt_metacast(_clname);
}

int Tiled::Internal::QuickStampManager::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: setStampBrush((*reinterpret_cast< const TileLayer*(*)>(_a[1]))); break;
        case 1: selectQuickStamp((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: saveQuickStamp((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 3: setMapDocument((*reinterpret_cast< MapDocument*(*)>(_a[1]))); break;
        default: ;
        }
        _id -= 4;
    }
    return _id;
}

// SIGNAL 0
void Tiled::Internal::QuickStampManager::setStampBrush(const TileLayer * _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_END_MOC_NAMESPACE
