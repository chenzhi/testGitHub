/****************************************************************************
** Meta object code from reading C++ file 'bucketfilltool.h'
**
** Created: Wed May 11 10:52:23 2011
**      by: The Qt Meta Object Compiler version 62 (Qt 4.7.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../tiled/src/tiled/bucketfilltool.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'bucketfilltool.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.7.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_Tiled__Internal__BucketFillTool[] = {

 // content:
       5,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      33,   32,   32,   32, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_Tiled__Internal__BucketFillTool[] = {
    "Tiled::Internal::BucketFillTool\0\0"
    "clearOverlay()\0"
};

const QMetaObject Tiled::Internal::BucketFillTool::staticMetaObject = {
    { &AbstractTileTool::staticMetaObject, qt_meta_stringdata_Tiled__Internal__BucketFillTool,
      qt_meta_data_Tiled__Internal__BucketFillTool, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &Tiled::Internal::BucketFillTool::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *Tiled::Internal::BucketFillTool::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *Tiled::Internal::BucketFillTool::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_Tiled__Internal__BucketFillTool))
        return static_cast<void*>(const_cast< BucketFillTool*>(this));
    return AbstractTileTool::qt_metacast(_clname);
}

int Tiled::Internal::BucketFillTool::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = AbstractTileTool::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: clearOverlay(); break;
        default: ;
        }
        _id -= 1;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
