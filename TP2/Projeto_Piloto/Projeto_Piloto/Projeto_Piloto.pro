#-------------------------------------------------
#
# Project created by QtCreator 2016-09-18T15:55:24
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = Projeto_Piloto
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    Persistencia.cpp \
    Piloto.cpp \
    TemplateMethodOrdenacao.cpp\
    OrdenarPorNome.cpp\
    OrdenarPorCodigo.cpp\
    OrdenarPorEquipe_Nome.cpp \
    OrdenarPorPais_Nome.cpp \
    OrdenarPorMotor_Equipe_Nome.cpp \
    OrdenarPorPontuacao_Idade.cpp

HEADERS  += mainwindow.h \
    Persistencia.h \
    Interface_Piloto.h \
    Piloto.h \
    arrayList.h \
    TemplateMethodOrdenacao.h\
    OrdenarPorNome.h\
    OrdenarPorCodigo.h\
    OrdenarPorEquipe_Nome.h \
    OrdenarPorPais_Nome.h \
    OrdenarPorMotor_Equipe_Nome.h \
    OrdenarPorPontuacao_Idade.h

FORMS    += mainwindow.ui
