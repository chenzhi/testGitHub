/****************************************************************************
** Meta object code from reading C++ file 'commandbutton.h'
**
** Created: Wed May 11 10:52:24 2011
**      by: The Qt Meta Object Compiler version 62 (Qt 4.7.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../tiled/src/tiled/commandbutton.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'commandbutton.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.7.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_Tiled__Internal__CommandButton[] = {

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
      32,   31,   31,   31, 0x08,
      45,   31,   31,   31, 0x08,
      58,   31,   31,   31, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_Tiled__Internal__CommandButton[] = {
    "Tiled::Internal::CommandButton\0\0"
    "runCommand()\0showDialog()\0populateMenu()\0"
};

const QMetaObject Tiled::Internal::CommandButton::staticMetaObject = {
    { &QToolButton::staticMetaObject, qt_meta_stringdata_Tiled__Internal__CommandButton,
      qt_meta_data_Tiled__Internal__CommandButton, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &Tiled::Internal::CommandButton::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *Tiled::Internal::CommandButton::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *Tiled::Internal::CommandButton::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_Tiled__Internal__CommandButton))
        return static_cast<void*>(const_cast< CommandButton*>(this));
    return QToolButton::qt_metacast(_clname);
}

int Tiled::Internal::CommandButton::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QToolButton::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: runCommand(); break;
        case 1: showDialog(); break;
        case 2: populateMenu(); break;
        default: ;
        }
        _id -= 3;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
