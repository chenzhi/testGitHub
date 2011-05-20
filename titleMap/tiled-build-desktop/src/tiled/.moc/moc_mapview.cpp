/****************************************************************************
** Meta object code from reading C++ file 'mapview.h'
**
** Created: Wed May 11 10:52:20 2011
**      by: The Qt Meta Object Compiler version 62 (Qt 4.7.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../tiled/src/tiled/mapview.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mapview.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.7.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_Tiled__Internal__MapView[] = {

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
      32,   26,   25,   25, 0x08,
      61,   51,   25,   25, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_Tiled__Internal__MapView[] = {
    "Tiled::Internal::MapView\0\0scale\0"
    "adjustScale(qreal)\0useOpenGL\0"
    "setUseOpenGL(bool)\0"
};

const QMetaObject Tiled::Internal::MapView::staticMetaObject = {
    { &QGraphicsView::staticMetaObject, qt_meta_stringdata_Tiled__Internal__MapView,
      qt_meta_data_Tiled__Internal__MapView, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &Tiled::Internal::MapView::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *Tiled::Internal::MapView::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *Tiled::Internal::MapView::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_Tiled__Internal__MapView))
        return static_cast<void*>(const_cast< MapView*>(this));
    return QGraphicsView::qt_metacast(_clname);
}

int Tiled::Internal::MapView::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QGraphicsView::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: adjustScale((*reinterpret_cast< qreal(*)>(_a[1]))); break;
        case 1: setUseOpenGL((*reinterpret_cast< bool(*)>(_a[1]))); break;
        default: ;
        }
        _id -= 2;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
