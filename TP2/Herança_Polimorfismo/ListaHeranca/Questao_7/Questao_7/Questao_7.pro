#-------------------------------------------------
#
# Project created by QtCreator 2016-10-09T17:38:06
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = Questao_7
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp\
        Pessoa.cpp \
    Pessoa_Fisica.cpp \
    Pessoa_Juridica.cpp

HEADERS  += mainwindow.h\
            Pessoa.h \
    Pessoa_Fisica.h \
    Pessoa_Juridica.h

FORMS    += mainwindow.ui
