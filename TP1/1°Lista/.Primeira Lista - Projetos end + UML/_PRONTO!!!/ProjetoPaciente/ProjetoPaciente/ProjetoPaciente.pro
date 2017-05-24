QT += core
QT -= gui

CONFIG += c++11

TARGET = ProjetoPaciente
CONFIG += console
CONFIG -= app_bundle

TEMPLATE = app

SOURCES += main.cpp \
    Paciente.cpp

HEADERS += \
    Paciente.h
