/****************************************************************************
** Meta object code from reading C++ file 'layerdock.h'
**
** Created: Wed May 11 10:52:18 2011
**      by: The Qt Meta Object Compiler version 62 (Qt 4.7.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../tiled/src/tiled/layerdock.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'layerdock.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.7.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_Tiled__Internal__LayerDock[] = {

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
      28,   27,   27,   27, 0x08,
      58,   50,   27,   27, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_Tiled__Internal__LayerDock[] = {
    "Tiled::Internal::LayerDock\0\0"
    "updateOpacitySlider()\0opacity\0"
    "setLayerOpacity(int)\0"
};

const QMetaObject Tiled::Internal::LayerDock::staticMetaObject = {
    { &QDockWidget::staticMetaObject, qt_meta_stringdata_Tiled__Internal__LayerDock,
      qt_meta_data_Tiled__Internal__LayerDock, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &Tiled::Internal::LayerDock::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *Tiled::Internal::LayerDock::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *Tiled::Internal::LayerDock::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_Tiled__Internal__LayerDock))
        return static_cast<void*>(const_cast< LayerDock*>(this));
    return QDockWidget::qt_metacast(_clname);
}

int Tiled::Internal::LayerDock::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDockWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: updateOpacitySlider(); break;
        case 1: setLayerOpacity((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
        _id -= 2;
    }
    return _id;
}
static const uint qt_meta_data_Tiled__Internal__LayerView[] = {

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
      34,   28,   27,   27, 0x08,
      65,   28,   27,   27, 0x08,
      95,   27,   27,   27, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_Tiled__Internal__LayerView[] = {
    "Tiled::Internal::LayerView\0\0index\0"
    "currentRowChanged(QModelIndex)\0"
    "currentLayerIndexChanged(int)\0"
    "editLayerName()\0"
};

const QMetaObject Tiled::Internal::LayerView::staticMetaObject = {
    { &QTreeView::staticMetaObject, qt_meta_stringdata_Tiled__Internal__LayerView,
      qt_meta_data_Tiled__Internal__LayerView, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &Tiled::Internal::LayerView::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *Tiled::Internal::LayerView::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *Tiled::Internal::LayerView::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_Tiled__Internal__LayerView))
        return static_cast<void*>(const_cast< LayerView*>(this));
    return QTreeView::qt_metacast(_clname);
}

int Tiled::Internal::LayerView::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QTreeView::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: currentRowChanged((*reinterpret_cast< const QModelIndex(*)>(_a[1]))); break;
        case 1: currentLayerIndexChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: editLayerName(); break;
        default: ;
        }
        _id -= 3;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
