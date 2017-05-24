QT += core
QT -= gui

CONFIG += c++11

TARGET = Sort
CONFIG += console
CONFIG -= app_bundle

TEMPLATE = app

SOURCES += main.cpp \
    insert_Sort.cpp \
    bubble_Sort.cpp \
    gerarVetor.cpp \
    merge_Sort.cpp \
    heap_Sort.cpp \
    quick_Sort.cpp \
    selection_Sort.cpp

HEADERS += \
    insert_Sort.h \
    bubble_Sort.h \
    gerarVetor.h \
    merge_Sort.h \
    heap_Sort.h \
    quick_Sort.h \
    selection_Sort.h
