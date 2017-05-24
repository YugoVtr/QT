QT += core
QT -= gui

CONFIG += c++11

TARGET = ProjetoArvoreAVL
CONFIG += console
CONFIG -= app_bundle

TEMPLATE = app

SOURCES += main.cpp \
    TreeNode.cpp \
    AvlTree.cpp \
    AsciiTreeView.cpp

HEADERS += \
    TreeNode.h \
    AvlTree.h \
    asciitreenode.h \
    AsciiTreeView.h
