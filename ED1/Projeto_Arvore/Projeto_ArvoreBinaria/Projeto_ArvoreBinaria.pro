#-------------------------------------------------
#
# Project created by QtCreator 2016-11-30T22:40:00
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = Projeto_ArvoreBinaria
TEMPLATE = app

SOURCES += main.cpp\
           mainwindow.cpp \
           Persistencia.cpp \
           Item.cpp

HEADERS  += mainwindow.h \
            IArvoreBinaria.h \
            ArvoreBinaria.h \
            No.h \
            Persistencia.h \
            Item.h

FORMS    += mainwindow.ui

RESOURCES += \
    arquivos.qrc
