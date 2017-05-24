/****************************************************************************
** Meta object code from reading C++ file 'CadastroUsuario.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.6.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../../../Desktop/_Projeto_Sibi/Sibi_Vitor/CadastroUsuario.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'CadastroUsuario.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.6.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_CadastroUsuario_t {
    QByteArrayData data[6];
    char stringdata0[160];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_CadastroUsuario_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_CadastroUsuario_t qt_meta_stringdata_CadastroUsuario = {
    {
QT_MOC_LITERAL(0, 0, 15), // "CadastroUsuario"
QT_MOC_LITERAL(1, 16, 39), // "on_pushButton_AdicionarTelefo..."
QT_MOC_LITERAL(2, 56, 0), // ""
QT_MOC_LITERAL(3, 57, 39), // "on_pushButton_AdicionarEndere..."
QT_MOC_LITERAL(4, 97, 30), // "on_pushButton_Cancelar_clicked"
QT_MOC_LITERAL(5, 128, 31) // "on_pushButton_Cadastrar_clicked"

    },
    "CadastroUsuario\0on_pushButton_AdicionarTelefone_clicked\0"
    "\0on_pushButton_AdicionarEndereco_clicked\0"
    "on_pushButton_Cancelar_clicked\0"
    "on_pushButton_Cadastrar_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_CadastroUsuario[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   34,    2, 0x08 /* Private */,
       3,    0,   35,    2, 0x08 /* Private */,
       4,    0,   36,    2, 0x08 /* Private */,
       5,    0,   37,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void CadastroUsuario::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        CadastroUsuario *_t = static_cast<CadastroUsuario *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->on_pushButton_AdicionarTelefone_clicked(); break;
        case 1: _t->on_pushButton_AdicionarEndereco_clicked(); break;
        case 2: _t->on_pushButton_Cancelar_clicked(); break;
        case 3: _t->on_pushButton_Cadastrar_clicked(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObject CadastroUsuario::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_CadastroUsuario.data,
      qt_meta_data_CadastroUsuario,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *CadastroUsuario::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *CadastroUsuario::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_CadastroUsuario.stringdata0))
        return static_cast<void*>(const_cast< CadastroUsuario*>(this));
    return QDialog::qt_metacast(_clname);
}

int CadastroUsuario::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 4)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 4;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
