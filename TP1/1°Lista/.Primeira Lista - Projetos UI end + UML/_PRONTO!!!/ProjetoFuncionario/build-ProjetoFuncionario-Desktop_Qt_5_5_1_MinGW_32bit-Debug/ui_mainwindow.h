/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
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
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QPushButton *pushButtonCalcular;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLineEdit *lineEditNome;
    QLineEdit *lineEditSalario;
    QLineEdit *lineEditNumeroDeFilhos;
    QLineEdit *lineEditAumentoSalarial;
    QTextEdit *textEditSaida;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(310, 300);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        pushButtonCalcular = new QPushButton(centralWidget);
        pushButtonCalcular->setObjectName(QStringLiteral("pushButtonCalcular"));
        pushButtonCalcular->setGeometry(QRect(20, 140, 75, 23));
        label = new QLabel(centralWidget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(20, 20, 47, 20));
        QFont font;
        font.setBold(true);
        font.setWeight(75);
        font.setStrikeOut(false);
        font.setKerning(true);
        label->setFont(font);
        label_2 = new QLabel(centralWidget);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(20, 50, 71, 20));
        label_2->setFont(font);
        label_3 = new QLabel(centralWidget);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(20, 80, 121, 20));
        label_3->setFont(font);
        label_4 = new QLabel(centralWidget);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(20, 110, 150, 20));
        label_4->setFont(font);
        lineEditNome = new QLineEdit(centralWidget);
        lineEditNome->setObjectName(QStringLiteral("lineEditNome"));
        lineEditNome->setGeometry(QRect(80, 20, 210, 20));
        lineEditSalario = new QLineEdit(centralWidget);
        lineEditSalario->setObjectName(QStringLiteral("lineEditSalario"));
        lineEditSalario->setGeometry(QRect(80, 50, 210, 20));
        lineEditNumeroDeFilhos = new QLineEdit(centralWidget);
        lineEditNumeroDeFilhos->setObjectName(QStringLiteral("lineEditNumeroDeFilhos"));
        lineEditNumeroDeFilhos->setGeometry(QRect(150, 80, 140, 20));
        lineEditAumentoSalarial = new QLineEdit(centralWidget);
        lineEditAumentoSalarial->setObjectName(QStringLiteral("lineEditAumentoSalarial"));
        lineEditAumentoSalarial->setGeometry(QRect(179, 110, 111, 20));
        textEditSaida = new QTextEdit(centralWidget);
        textEditSaida->setObjectName(QStringLiteral("textEditSaida"));
        textEditSaida->setGeometry(QRect(20, 170, 271, 71));
        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 310, 21));
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
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "PROJETO CLASSE FUNCIONARIO ", 0));
        pushButtonCalcular->setText(QApplication::translate("MainWindow", "Calcular", 0));
        label->setText(QApplication::translate("MainWindow", "NOME : ", 0));
        label_2->setText(QApplication::translate("MainWindow", "SALARIO : ", 0));
        label_3->setText(QApplication::translate("MainWindow", "NUMERO DE FILHOS : ", 0));
        label_4->setText(QApplication::translate("MainWindow", "AUMENTO SALARIAL : (%) ", 0));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
