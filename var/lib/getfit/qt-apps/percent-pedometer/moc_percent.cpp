/****************************************************************************
** Meta object code from reading C++ file 'percent.h'
**
** Created: Mon Jan 11 21:24:24 2010
**      by: The Qt Meta Object Compiler version 62 (Qt 4.6.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "percent.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'percent.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.6.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_Percent[] = {

 // content:
       4,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
       9,    8,    8,    8, 0x08,
      28,    8,    8,    8, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_Percent[] = {
    "Percent\0\0setPacerValue(int)\0"
    "setPedometerValue(int)\0"
};

const QMetaObject Percent::staticMetaObject = {
    { &QLCDNumber::staticMetaObject, qt_meta_stringdata_Percent,
      qt_meta_data_Percent, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &Percent::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *Percent::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *Percent::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_Percent))
        return static_cast<void*>(const_cast< Percent*>(this));
    return QLCDNumber::qt_metacast(_clname);
}

int Percent::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QLCDNumber::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: setPacerValue((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: setPedometerValue((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
        _id -= 2;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
