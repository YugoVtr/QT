/****************************************************************************
** Meta object code from reading C++ file 'ListarUsuario.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.6.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../../../Desktop/_Projeto_Sibi/Sibi_Vitor/ListarUsuario.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'ListarUsuario.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.6.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_ListarUsuario_t {
    QByteArrayData data[9];
    char stringdata0[186];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ListarUsuario_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ListarUsuario_t qt_meta_stringdata_ListarUsuario = {
    {
QT_MOC_LITERAL(0, 0, 13), // "ListarUsuario"
QT_MOC_LITERAL(1, 14, 33), // "on_action_Novo_Cadastro_trigg..."
QT_MOC_LITERAL(2, 48, 0), // ""
QT_MOC_LITERAL(3, 49, 23), // "on_actionSair_triggered"
QT_MOC_LITERAL(4, 73, 25), // "on_actionLimpar_triggered"
QT_MOC_LITERAL(5, 99, 39), // "on_action_Consultar_Cadastros..."
QT_MOC_LITERAL(6, 139, 35), // "on_tableWidget_Usuarios_cellC..."
QT_MOC_LITERAL(7, 175, 3), // "row"
QT_MOC_LITERAL(8, 179, 6) // "column"

    },
    "ListarUsuario\0on_action_Novo_Cadastro_triggered\0"
    "\0on_actionSair_triggered\0"
    "on_actionLimpar_triggered\0"
    "on_action_Consultar_Cadastros_triggered\0"
    "on_tableWidget_Usuarios_cellClicked\0"
    "row\0column"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ListarUsuario[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   39,    2, 0x08 /* Private */,
       3,    0,   40,    2, 0x08 /* Private */,
       4,    0,   41,    2, 0x08 /* Private */,
       5,    0,   42,    2, 0x08 /* Private */,
       6,    2,   43,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int, QMetaType::Int,    7,    8,

       0        // eod
};

void ListarUsuario::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        ListarUsuario *_t = static_cast<ListarUsuario *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->on_action_Novo_Cadastro_triggered(); break;
        case 1: _t->on_actionSair_triggered(); break;
        case 2: _t->on_actionLimpar_triggered(); break;
        case 3: _t->on_action_Consultar_Cadastros_triggered(); break;
        case 4: _t->on_tableWidget_Usuarios_cellClicked((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        default: ;
        }
    }
}

const QMetaObject ListarUsuario::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_ListarUsuario.data,
      qt_meta_data_ListarUsuario,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *ListarUsuario::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ListarUsuario::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_ListarUsuario.stringdata0))
        return static_cast<void*>(const_cast< ListarUsuario*>(this));
    return QMainWindow::qt_metacast(_clname);
}

int ListarUsuario::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 5)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 5;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
