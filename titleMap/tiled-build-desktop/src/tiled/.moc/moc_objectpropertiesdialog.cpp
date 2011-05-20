/****************************************************************************
** Meta object code from reading C++ file 'objectpropertiesdialog.h'
**
** Created: Wed May 11 10:52:49 2011
**      by: The Qt Meta Object Compiler version 62 (Qt 4.7.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../tiled/src/tiled/objectpropertiesdialog.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'objectpropertiesdialog.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.7.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_Tiled__Internal__ObjectPropertiesDialog[] = {

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

static const char qt_meta_stringdata_Tiled__Internal__ObjectPropertiesDialog[] = {
    "Tiled::Internal::ObjectPropertiesDialog\0"
};

const QMetaObject Tiled::Internal::ObjectPropertiesDialog::staticMetaObject = {
    { &PropertiesDialog::staticMetaObject, qt_meta_stringdata_Tiled__Internal__ObjectPropertiesDialog,
      qt_meta_data_Tiled__Internal__ObjectPropertiesDialog, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &Tiled::Internal::ObjectPropertiesDialog::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *Tiled::Internal::ObjectPropertiesDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *Tiled::Internal::ObjectPropertiesDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_Tiled__Internal__ObjectPropertiesDialog))
        return static_cast<void*>(const_cast< ObjectPropertiesDialog*>(this));
    return PropertiesDialog::qt_metacast(_clname);
}

int Tiled::Internal::ObjectPropertiesDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = PropertiesDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    return _id;
}
QT_END_MOC_NAMESPACE
