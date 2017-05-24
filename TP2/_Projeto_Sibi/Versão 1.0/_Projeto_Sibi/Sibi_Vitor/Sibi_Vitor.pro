#-------------------------------------------------
#
# Project created by QtCreator 2016-11-28T07:49:46
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = Sibi_Vitor
TEMPLATE = app


SOURCES += main.cpp\
        CadastroUsuario.cpp\
        Telefone.cpp\
        Endereco.cpp \
        Usuario.cpp \
        CadastroTelefone.cpp \
    	Telefone_Persistencia.cpp \
    	CadastroEndereco.cpp \
    	Endereco_Persistencia.cpp \
        Usuario_Persistencia.cpp \
        ListarUsuario.cpp \
        ListarTelefone.cpp \
        ListarEndereco.cpp

HEADERS  += CadastroUsuario.h\
        TransformarDados.h\
        CRUD.h\
        Telefone.h\
        Endereco.h \
        Usuario.h \
        CadastroTelefone.h \
    	Telefone_Persistencia.h \
    	CadastroEndereco.h \
    	Endereco_Persistencia.h \
        Usuario_Persistencia.h \
        ListarUsuario.h \
        ListarTelefone.h \
        ListarEndereco.h

FORMS    += CadastroUsuario.ui\
        CadastroTelefone.ui \
        CadastroEndereco.ui \
        ListarUsuario.ui \
        ListarTelefone.ui \
        ListarEndereco.ui

RESOURCES += \
    arquivos.qrc

