QT += core
QT -= gui

CONFIG += c++11

TARGET = ProjetoFuncionario
CONFIG += console
CONFIG -= app_bundle

TEMPLATE = app

SOURCES += main.cpp \
    Funcionario.cpp

HEADERS += \
    Funcionario.h
