/****************************************************************************
** Meta object code from reading C++ file 'board.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.5.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../ChineseChessBattle/board.h"
#include <QtCore/qmetatype.h>

#if __has_include(<QtCore/qtmochelpers.h>)
#include <QtCore/qtmochelpers.h>
#else
QT_BEGIN_MOC_NAMESPACE
#endif


#include <memory>

#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'board.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.5.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

#ifndef Q_CONSTINIT
#define Q_CONSTINIT
#endif

QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
QT_WARNING_DISABLE_GCC("-Wuseless-cast")
namespace {

#ifdef QT_MOC_HAS_STRINGDATA
struct qt_meta_stringdata_CLASSBoardENDCLASS_t {};
static constexpr auto qt_meta_stringdata_CLASSBoardENDCLASS = QtMocHelpers::stringData(
    "Board",
    "win",
    "",
    "side",
    "waitSide",
    "onMyMove",
    "Pos",
    "from",
    "to",
    "admit",
    "onWin",
    "onSetup",
    "Cell**",
    "onClick",
    "x",
    "y",
    "onMove"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSBoardENDCLASS_t {
    uint offsetsAndSizes[34];
    char stringdata0[6];
    char stringdata1[4];
    char stringdata2[1];
    char stringdata3[5];
    char stringdata4[9];
    char stringdata5[9];
    char stringdata6[4];
    char stringdata7[5];
    char stringdata8[3];
    char stringdata9[6];
    char stringdata10[6];
    char stringdata11[8];
    char stringdata12[7];
    char stringdata13[8];
    char stringdata14[2];
    char stringdata15[2];
    char stringdata16[7];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSBoardENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSBoardENDCLASS_t qt_meta_stringdata_CLASSBoardENDCLASS = {
    {
        QT_MOC_LITERAL(0, 5),  // "Board"
        QT_MOC_LITERAL(6, 3),  // "win"
        QT_MOC_LITERAL(10, 0),  // ""
        QT_MOC_LITERAL(11, 4),  // "side"
        QT_MOC_LITERAL(16, 8),  // "waitSide"
        QT_MOC_LITERAL(25, 8),  // "onMyMove"
        QT_MOC_LITERAL(34, 3),  // "Pos"
        QT_MOC_LITERAL(38, 4),  // "from"
        QT_MOC_LITERAL(43, 2),  // "to"
        QT_MOC_LITERAL(46, 5),  // "admit"
        QT_MOC_LITERAL(52, 5),  // "onWin"
        QT_MOC_LITERAL(58, 7),  // "onSetup"
        QT_MOC_LITERAL(66, 6),  // "Cell**"
        QT_MOC_LITERAL(73, 7),  // "onClick"
        QT_MOC_LITERAL(81, 1),  // "x"
        QT_MOC_LITERAL(83, 1),  // "y"
        QT_MOC_LITERAL(85, 6)   // "onMove"
    },
    "Board",
    "win",
    "",
    "side",
    "waitSide",
    "onMyMove",
    "Pos",
    "from",
    "to",
    "admit",
    "onWin",
    "onSetup",
    "Cell**",
    "onClick",
    "x",
    "y",
    "onMove"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSBoardENDCLASS[] = {

 // content:
      11,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    1,   62,    2, 0x06,    1 /* Public */,
       4,    0,   65,    2, 0x06,    3 /* Public */,
       5,    2,   66,    2, 0x06,    4 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       9,    0,   71,    2, 0x0a,    7 /* Public */,
      10,    0,   72,    2, 0x0a,    8 /* Public */,
      11,    1,   73,    2, 0x0a,    9 /* Public */,
      13,    2,   76,    2, 0x0a,   11 /* Public */,
      16,    2,   81,    2, 0x0a,   14 /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::Bool,    3,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 6, 0x80000000 | 6,    7,    8,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 12,    2,
    QMetaType::Void, QMetaType::Int, QMetaType::Int,   14,   15,
    QMetaType::Void, 0x80000000 | 6, 0x80000000 | 6,    7,    8,

       0        // eod
};

Q_CONSTINIT const QMetaObject Board::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_CLASSBoardENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSBoardENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSBoardENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<Board, std::true_type>,
        // method 'win'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'waitSide'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'onMyMove'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const Pos, std::false_type>,
        QtPrivate::TypeAndForceComplete<const Pos, std::false_type>,
        // method 'admit'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'onWin'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'onSetup'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<Cell * *, std::false_type>,
        // method 'onClick'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'onMove'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const Pos, std::false_type>,
        QtPrivate::TypeAndForceComplete<const Pos, std::false_type>
    >,
    nullptr
} };

void Board::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<Board *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->win((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 1: _t->waitSide(); break;
        case 2: _t->onMyMove((*reinterpret_cast< std::add_pointer_t<Pos>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<Pos>>(_a[2]))); break;
        case 3: _t->admit(); break;
        case 4: _t->onWin(); break;
        case 5: _t->onSetup((*reinterpret_cast< std::add_pointer_t<Cell**>>(_a[1]))); break;
        case 6: _t->onClick((*reinterpret_cast< std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[2]))); break;
        case 7: _t->onMove((*reinterpret_cast< std::add_pointer_t<Pos>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<Pos>>(_a[2]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (Board::*)(bool );
            if (_t _q_method = &Board::win; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (Board::*)();
            if (_t _q_method = &Board::waitSide; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (Board::*)(const Pos , const Pos );
            if (_t _q_method = &Board::onMyMove; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 2;
                return;
            }
        }
    }
}

const QMetaObject *Board::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Board::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSBoardENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int Board::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 8)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 8)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 8;
    }
    return _id;
}

// SIGNAL 0
void Board::win(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void Board::waitSide()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void Board::onMyMove(const Pos _t1, const Pos _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}
QT_WARNING_POP
