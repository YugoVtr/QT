QT += core
QT -= gui

CONFIG += c++11

TARGET = Sort_WithClass
CONFIG += console
CONFIG -= app_bundle

TEMPLATE = app

SOURCES += main.cpp \
	gerarVetor.cpp

HEADERS  += Sort.h \
	gerarVetor.h
            
