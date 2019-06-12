/****************************************************************************
** Meta object code from reading C++ file 'interfaz2.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "interfaz2.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'interfaz2.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_interfaz2[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      15,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      11,   10,   10,   10, 0x08,
      33,   10,   10,   10, 0x08,
      59,   10,   10,   10, 0x08,
      81,   10,   10,   10, 0x08,
      99,   10,   10,   10, 0x08,
     118,   10,   10,   10, 0x08,
     141,   10,   10,   10, 0x08,
     162,   10,   10,   10, 0x08,
     183,   10,   10,   10, 0x08,
     196,   10,   10,   10, 0x08,
     217,  211,   10,   10, 0x08,
     244,   10,   10,   10, 0x08,
     257,   10,   10,   10, 0x08,
     266,   10,   10,   10, 0x08,
     284,  282,   10,   10, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_interfaz2[] = {
    "interfaz2\0\0on_conectar_clicked()\0"
    "on_conectar_cam_clicked()\0"
    "on_adelante_clicked()\0on_home_clicked()\0"
    "on_atras_clicked()\0on_izquierda_clicked()\0"
    "on_derecha_clicked()\0on_detener_clicked()\0"
    "moveyaw(int)\0movepitch(int)\0index\0"
    "on_comboBox_activated(int)\0frameadqui()\0"
    "binari()\0horizont_line()\0m\0num_scan(int)\0"
};

void interfaz2::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        interfaz2 *_t = static_cast<interfaz2 *>(_o);
        switch (_id) {
        case 0: _t->on_conectar_clicked(); break;
        case 1: _t->on_conectar_cam_clicked(); break;
        case 2: _t->on_adelante_clicked(); break;
        case 3: _t->on_home_clicked(); break;
        case 4: _t->on_atras_clicked(); break;
        case 5: _t->on_izquierda_clicked(); break;
        case 6: _t->on_derecha_clicked(); break;
        case 7: _t->on_detener_clicked(); break;
        case 8: _t->moveyaw((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 9: _t->movepitch((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 10: _t->on_comboBox_activated((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 11: _t->frameadqui(); break;
        case 12: _t->binari(); break;
        case 13: _t->horizont_line(); break;
        case 14: _t->num_scan((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData interfaz2::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject interfaz2::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_interfaz2,
      qt_meta_data_interfaz2, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &interfaz2::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *interfaz2::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *interfaz2::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_interfaz2))
        return static_cast<void*>(const_cast< interfaz2*>(this));
    return QMainWindow::qt_metacast(_clname);
}

int interfaz2::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 15)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 15;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
