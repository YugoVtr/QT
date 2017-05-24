#-------------------------------------------------
#
# Project created by QtCreator 2016-10-09T18:41:14
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = Questao_6
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    Conta.cpp \
    ContaPoupanca.cpp \
    ContaCorrenteSimples.cpp \
    ContaCorrenteLimite.cpp

HEADERS  += mainwindow.h \
    Conta.h \
    ContaPoupanca.h \
    ContaCorrenteSimples.h \
    ContaCorrenteLimite.h

FORMS    += mainwindow.ui
