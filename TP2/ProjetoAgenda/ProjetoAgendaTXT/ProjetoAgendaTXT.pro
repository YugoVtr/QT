#-------------------------------------------------
#
# Project created by QtCreator 2015-05-04T16:20:50
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = ProjetoAgendaTXT
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    TransformarDados.cpp \
    Contato.cpp \
    Crud.cpp \
    ContatoPersistencia.cpp \
    TelaDeListagem.cpp

HEADERS  += mainwindow.h \
    TransformarDados.h \
    Contato.h \
    Crud.h \
    ContatoPersistencia.h \
    TelaDeListagem.h

FORMS    += mainwindow.ui \
    teladelistagem.ui
