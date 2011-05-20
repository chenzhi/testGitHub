/****************************************************************************
** Meta object code from reading C++ file 'mainwindow.h'
**
** Created: Wed May 11 10:52:19 2011
**      by: The Qt Meta Object Compiler version 62 (Qt 4.7.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../tiled/src/tiled/mainwindow.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mainwindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.7.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_Tiled__Internal__MainWindow[] = {

 // content:
       5,       // revision
       0,       // classname
       0,    0, // classinfo
      35,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      43,   34,   29,   28, 0x0a,
      61,   28,   28,   28, 0x0a,
      70,   28,   28,   28, 0x0a,
      81,   28,   29,   28, 0x0a,
      92,   28,   29,   28, 0x0a,
     105,   28,   28,   28, 0x0a,
     119,   28,   28,   28, 0x0a,
     130,   28,   28,   28, 0x0a,
     142,   28,   28,   28, 0x0a,
     158,   28,   28,   28, 0x0a,
     164,   28,   28,   28, 0x0a,
     171,   28,   28,   28, 0x0a,
     179,   28,   28,   28, 0x0a,
     197,   28,   28,   28, 0x0a,
     206,   28,   28,   28, 0x0a,
     216,   28,   28,   28, 0x0a,
     234,  229,   29,   28, 0x0a,
     254,   28,   29,   28, 0x2a,
     273,  267,   28,   28, 0x0a,
     298,   28,   28,   28, 0x0a,
     319,   28,   28,   28, 0x0a,
     331,   28,   28,   28, 0x0a,
     343,   28,   28,   28, 0x0a,
     363,   28,   28,   28, 0x0a,
     373,   28,   28,   28, 0x0a,
     393,   28,   28,   28, 0x0a,
     409,   28,   28,   28, 0x0a,
     427,   28,   28,   28, 0x0a,
     440,   28,   28,   28, 0x0a,
     457,   28,   28,   28, 0x0a,
     476,   28,   28,   28, 0x0a,
     504,  498,   28,   28, 0x0a,
     547,  536,   28,   28, 0x0a,
     590,  578,   28,   28, 0x0a,
     629,  623,   28,   28, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_Tiled__Internal__MainWindow[] = {
    "Tiled::Internal::MainWindow\0\0bool\0"
    "fileName\0openFile(QString)\0newMap()\0"
    "openFile()\0saveFile()\0saveFileAs()\0"
    "saveAsImage()\0exportAs()\0closeFile()\0"
    "closeAllFiles()\0cut()\0copy()\0paste()\0"
    "openPreferences()\0zoomIn()\0zoomOut()\0"
    "zoomNormal()\0path\0newTileset(QString)\0"
    "newTileset()\0paths\0newTilesets(QStringList)\0"
    "addExternalTileset()\0resizeMap()\0"
    "offsetMap()\0editMapProperties()\0"
    "autoMap()\0updateWindowTitle()\0"
    "updateActions()\0updateZoomLabel()\0"
    "aboutTiled()\0openRecentFile()\0"
    "clearRecentFiles()\0editLayerProperties()\0"
    "tiles\0setStampBrush(const TileLayer*)\0"
    "statusInfo\0updateStatusInfoLabel(QString)\0"
    "mapDocument\0mapDocumentChanged(MapDocument*)\0"
    "index\0closeMapDocument(int)\0"
};

const QMetaObject Tiled::Internal::MainWindow::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_Tiled__Internal__MainWindow,
      qt_meta_data_Tiled__Internal__MainWindow, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &Tiled::Internal::MainWindow::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *Tiled::Internal::MainWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *Tiled::Internal::MainWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_Tiled__Internal__MainWindow))
        return static_cast<void*>(const_cast< MainWindow*>(this));
    return QMainWindow::qt_metacast(_clname);
}

int Tiled::Internal::MainWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: { bool _r = openFile((*reinterpret_cast< const QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 1: newMap(); break;
        case 2: openFile(); break;
        case 3: { bool _r = saveFile();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 4: { bool _r = saveFileAs();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 5: saveAsImage(); break;
        case 6: exportAs(); break;
        case 7: closeFile(); break;
        case 8: closeAllFiles(); break;
        case 9: cut(); break;
        case 10: copy(); break;
        case 11: paste(); break;
        case 12: openPreferences(); break;
        case 13: zoomIn(); break;
        case 14: zoomOut(); break;
        case 15: zoomNormal(); break;
        case 16: { bool _r = newTileset((*reinterpret_cast< const QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 17: { bool _r = newTileset();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 18: newTilesets((*reinterpret_cast< const QStringList(*)>(_a[1]))); break;
        case 19: addExternalTileset(); break;
        case 20: resizeMap(); break;
        case 21: offsetMap(); break;
        case 22: editMapProperties(); break;
        case 23: autoMap(); break;
        case 24: updateWindowTitle(); break;
        case 25: updateActions(); break;
        case 26: updateZoomLabel(); break;
        case 27: aboutTiled(); break;
        case 28: openRecentFile(); break;
        case 29: clearRecentFiles(); break;
        case 30: editLayerProperties(); break;
        case 31: setStampBrush((*reinterpret_cast< const TileLayer*(*)>(_a[1]))); break;
        case 32: updateStatusInfoLabel((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 33: mapDocumentChanged((*reinterpret_cast< MapDocument*(*)>(_a[1]))); break;
        case 34: closeMapDocument((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
        _id -= 35;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
