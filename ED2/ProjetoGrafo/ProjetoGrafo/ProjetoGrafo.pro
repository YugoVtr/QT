#-------------------------------------------------
#
# Project created by QtCreator 2017-05-05T21:18:46
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

#CONFIG += c++11

TARGET = ProjetoGrafo
TEMPLATE = app


SOURCES += Formularios/main.cpp\
    Formularios/MainWindow.cpp \
    Grafo/Grafo.cpp \
    Grafo/Aresta.cpp \
    Grafo/Vertice.cpp \
    Matriz/Matriz.cpp \
    Persistencia/PersistenciaGrafo.cpp

HEADERS  += Formularios/MainWindow.h\
    Grafo/Grafo.h \
    Grafo/Aresta.h \
    Grafo/Vertice.h \
    Includes.h \
    Matriz/Matriz.h \
    Persistencia/PersistenciaGrafo.h

FORMS    += Formularios/MainWindow.ui

RESOURCES += \
    Formularios/arquivos.qrc
