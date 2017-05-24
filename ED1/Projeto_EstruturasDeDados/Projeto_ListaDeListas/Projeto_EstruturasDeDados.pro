#-------------------------------------------------
#
# Project created by QtCreator 2016-10-14T14:21:50
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = Projeto_EstruturaDeDados
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp\
        Persistencia_Lista.cpp\
        Folder.cpp\
        PersistirPorLetra.cpp

HEADERS  += mainwindow.h \
            Interface_Lista.h \
            No.h\
            Lista_LDE_Circular.h\
            Lista_LDE.h\
            No_Simples.h\
            Lista_LSE_Circular.h\
            Lista_LSE.h \
            Persistencia_Lista.h\
            Folder.h\
            PersistirPorLetra.h


FORMS    += mainwindow.ui

RESOURCES += \
    imagens.qrc
