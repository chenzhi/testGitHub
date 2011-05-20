/****************************************************************************
** Meta object code from reading C++ file 'objectselectiontool.h'
**
** Created: Wed May 11 10:52:24 2011
**      by: The Qt Meta Object Compiler version 62 (Qt 4.7.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../tiled/src/tiled/objectselectiontool.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'objectselectiontool.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.7.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_Tiled__Internal__ObjectSelectionTool[] = {

 // content:
       5,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

       0        // eod
};

static const char qt_meta_stringdata_Tiled__Internal__ObjectSelectionTool[] = {
    "Tiled::Internal::ObjectSelectionTool\0"
};

const QMetaObject Tiled::Internal::ObjectSelectionTool::staticMetaObject = {
    { &AbstractTool::staticMetaObject, qt_meta_stringdata_Tiled__Internal__ObjectSelectionTool,
      qt_meta_data_Tiled__Internal__ObjectSelectionTool, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &Tiled::Internal::ObjectSelectionTool::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *Tiled::Internal::ObjectSelectionTool::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *Tiled::Internal::ObjectSelectionTool::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_Tiled__Internal__ObjectSelectionTool))
        return static_cast<void*>(const_cast< ObjectSelectionTool*>(this));
    return AbstractTool::qt_metacast(_clname);
}

int Tiled::Internal::ObjectSelectionTool::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = AbstractTool::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    return _id;
}
QT_END_MOC_NAMESPACE
