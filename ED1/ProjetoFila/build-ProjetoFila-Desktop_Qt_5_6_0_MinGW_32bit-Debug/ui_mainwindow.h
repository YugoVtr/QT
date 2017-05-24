/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.6.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_4;
    QLabel *label_5;
    QLineEdit *lineEdit_Tamanho;
    QLineEdit *lineEdit_Verificar;
    QLineEdit *lineEdit_eVazio;
    QLineEdit *lineEdit_Inserir;
    QPushButton *pushButton_Inserir;
    QPushButton *pushButton_Criar;
    QPushButton *pushButton_Remover;
    QPushButton *pushButton_Verificar;
    QPushButton *pushButton_eVazio;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(311, 212);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        label = new QLabel(centralWidget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(11, 20, 56, 23));
        QFont font;
        font.setBold(true);
        font.setWeight(75);
        label->setFont(font);
        label_2 = new QLabel(centralWidget);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(11, 55, 46, 23));
        label_2->setFont(font);
        label_4 = new QLabel(centralWidget);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(11, 90, 60, 23));
        label_4->setFont(font);
        label_5 = new QLabel(centralWidget);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(11, 127, 41, 23));
        label_5->setFont(font);
        lineEdit_Tamanho = new QLineEdit(centralWidget);
        lineEdit_Tamanho->setObjectName(QStringLiteral("lineEdit_Tamanho"));
        lineEdit_Tamanho->setGeometry(QRect(81, 20, 133, 23));
        lineEdit_Verificar = new QLineEdit(centralWidget);
        lineEdit_Verificar->setObjectName(QStringLiteral("lineEdit_Verificar"));
        lineEdit_Verificar->setGeometry(QRect(81, 90, 61, 23));
        lineEdit_eVazio = new QLineEdit(centralWidget);
        lineEdit_eVazio->setObjectName(QStringLiteral("lineEdit_eVazio"));
        lineEdit_eVazio->setGeometry(QRect(81, 127, 133, 23));
        lineEdit_Inserir = new QLineEdit(centralWidget);
        lineEdit_Inserir->setObjectName(QStringLiteral("lineEdit_Inserir"));
        lineEdit_Inserir->setGeometry(QRect(81, 55, 133, 23));
        pushButton_Inserir = new QPushButton(centralWidget);
        pushButton_Inserir->setObjectName(QStringLiteral("pushButton_Inserir"));
        pushButton_Inserir->setGeometry(QRect(220, 55, 75, 23));
        pushButton_Criar = new QPushButton(centralWidget);
        pushButton_Criar->setObjectName(QStringLiteral("pushButton_Criar"));
        pushButton_Criar->setGeometry(QRect(220, 20, 75, 23));
        pushButton_Remover = new QPushButton(centralWidget);
        pushButton_Remover->setObjectName(QStringLiteral("pushButton_Remover"));
        pushButton_Remover->setGeometry(QRect(220, 90, 75, 23));
        pushButton_Verificar = new QPushButton(centralWidget);
        pushButton_Verificar->setObjectName(QStringLiteral("pushButton_Verificar"));
        pushButton_Verificar->setGeometry(QRect(150, 90, 62, 23));
        pushButton_eVazio = new QPushButton(centralWidget);
        pushButton_eVazio->setObjectName(QStringLiteral("pushButton_eVazio"));
        pushButton_eVazio->setGeometry(QRect(220, 127, 75, 23));
        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 311, 21));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "Fila", 0));
        label->setText(QApplication::translate("MainWindow", "TAMANHO", 0));
        label_2->setText(QApplication::translate("MainWindow", "INSERIR", 0));
        label_4->setText(QApplication::translate("MainWindow", "VERIFICAR", 0));
        label_5->setText(QApplication::translate("MainWindow", "VAZIO?", 0));
        pushButton_Inserir->setText(QApplication::translate("MainWindow", "INSERIR", 0));
        pushButton_Criar->setText(QApplication::translate("MainWindow", "CRIAR", 0));
        pushButton_Remover->setText(QApplication::translate("MainWindow", "REMOVER", 0));
        pushButton_Verificar->setText(QApplication::translate("MainWindow", "VERIFICAR", 0));
        pushButton_eVazio->setText(QApplication::translate("MainWindow", "VAZIO?", 0));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
