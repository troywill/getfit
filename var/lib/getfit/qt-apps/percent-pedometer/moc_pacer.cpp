/****************************************************************************
** Meta object code from reading C++ file 'pacer.h'
**
** Created: Mon Jan 11 20:27:51 2010
**      by: The Qt Meta Object Compiler version 62 (Qt 4.6.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "pacer.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'pacer.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.6.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_Pacer[] = {

 // content:
       4,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: signature, parameters, type, tag, flags
       7,    6,    6,    6, 0x05,

 // slots: signature, parameters, type, tag, flags
      34,   25,    6,    6, 0x0a,
      48,    6,    6,    6, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_Pacer[] = {
    "Pacer\0\0pacerChanged(int)\0newSteps\0"
    "setPacer(int)\0showTime()\0"
};

const QMetaObject Pacer::staticMetaObject = {
    { &QLCDNumber::staticMetaObject, qt_meta_stringdata_Pacer,
      qt_meta_data_Pacer, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &Pacer::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *Pacer::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *Pacer::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_Pacer))
        return static_cast<void*>(const_cast< Pacer*>(this));
    return QLCDNumber::qt_metacast(_clname);
}

int Pacer::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QLCDNumber::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: pacerChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: setPacer((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: showTime(); break;
        default: ;
        }
        _id -= 3;
    }
    return _id;
}

// SIGNAL 0
void Pacer::pacerChanged(int _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_END_MOC_NAMESPACE
