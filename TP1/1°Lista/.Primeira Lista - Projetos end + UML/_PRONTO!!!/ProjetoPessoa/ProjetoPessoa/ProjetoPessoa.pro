QT += core
QT -= gui

CONFIG += c++11

TARGET = ProjetoPessoa
CONFIG += console
CONFIG -= app_bundle

TEMPLATE = app

SOURCES += main.cpp \
    Pessoa.cpp

HEADERS += \
    Pessoa.h
