/****************************************************************************
** Meta object code from reading C++ file 'arrowlcd.h'
**
** Created: Mon Jan 11 17:59:46 2010
**      by: The Qt Meta Object Compiler version 62 (Qt 4.6.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "arrowlcd.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'arrowlcd.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.6.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_ArrowLcd[] = {

 // content:
       4,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      10,    9,    9,    9, 0x08,
      34,   28,    9,    9, 0x08,
      60,    9,    9,    9, 0x08,
      70,    9,    9,    9, 0x08,
      82,    9,    9,    9, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_ArrowLcd[] = {
    "ArrowLcd\0\0arrowDisplay(int)\0event\0"
    "keyPressEvent(QKeyEvent*)\0countUp()\0"
    "countDown()\0saveSteps(int)\0"
};

const QMetaObject ArrowLcd::staticMetaObject = {
    { &QLCDNumber::staticMetaObject, qt_meta_stringdata_ArrowLcd,
      qt_meta_data_ArrowLcd, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &ArrowLcd::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *ArrowLcd::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *ArrowLcd::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_ArrowLcd))
        return static_cast<void*>(const_cast< ArrowLcd*>(this));
    return QLCDNumber::qt_metacast(_clname);
}

int ArrowLcd::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QLCDNumber::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: arrowDisplay((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: keyPressEvent((*reinterpret_cast< QKeyEvent*(*)>(_a[1]))); break;
        case 2: countUp(); break;
        case 3: countDown(); break;
        case 4: saveSteps((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
        _id -= 5;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
