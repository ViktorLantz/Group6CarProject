/****************************************************************************
** Meta object code from reading C++ file 'StreetMapMapWidget.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../../../odcockpit/include/plugins/streetmapviewer/StreetMapMapWidget.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'StreetMapMapWidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_cockpit__plugins__streetmap__StreetMapMapWidget[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      51,   49,   48,   48, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_cockpit__plugins__streetmap__StreetMapMapWidget[] = {
    "cockpit::plugins::streetmap::StreetMapMapWidget\0"
    "\0r\0redrawMap(QRect)\0"
};

void cockpit::plugins::streetmap::StreetMapMapWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        StreetMapMapWidget *_t = static_cast<StreetMapMapWidget *>(_o);
        switch (_id) {
        case 0: _t->redrawMap((*reinterpret_cast< const QRect(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData cockpit::plugins::streetmap::StreetMapMapWidget::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject cockpit::plugins::streetmap::StreetMapMapWidget::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_cockpit__plugins__streetmap__StreetMapMapWidget,
      qt_meta_data_cockpit__plugins__streetmap__StreetMapMapWidget, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &cockpit::plugins::streetmap::StreetMapMapWidget::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *cockpit::plugins::streetmap::StreetMapMapWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *cockpit::plugins::streetmap::StreetMapMapWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_cockpit__plugins__streetmap__StreetMapMapWidget))
        return static_cast<void*>(const_cast< StreetMapMapWidget*>(this));
    if (!strcmp(_clname, "odcore::io::conference::ContainerListener"))
        return static_cast< odcore::io::conference::ContainerListener*>(const_cast< StreetMapMapWidget*>(this));
    return QWidget::qt_metacast(_clname);
}

int cockpit::plugins::streetmap::StreetMapMapWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
