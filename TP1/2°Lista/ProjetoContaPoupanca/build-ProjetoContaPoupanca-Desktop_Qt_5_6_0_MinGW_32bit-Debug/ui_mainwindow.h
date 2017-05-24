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
    QLabel *label_3;
    QLabel *label_4;
    QLineEdit *lineEditNomeDoCliente;
    QLineEdit *lineEditAgencia;
    QLineEdit *lineEditNumeroDaConta;
    QLineEdit *lineEditSaldo;
    QLineEdit *lineEditValor;
    QLabel *label_5;
    QPushButton *pushButtonCriarConta;
    QPushButton *pushButtonSacar;
    QPushButton *pushButtonDepositar;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->setEnabled(true);
        MainWindow->resize(372, 401);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        label = new QLabel(centralWidget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(30, 20, 131, 21));
        label_2 = new QLabel(centralWidget);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(30, 50, 71, 21));
        label_3 = new QLabel(centralWidget);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(30, 80, 151, 16));
        label_4 = new QLabel(centralWidget);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(30, 110, 131, 16));
        lineEditNomeDoCliente = new QLineEdit(centralWidget);
        lineEditNomeDoCliente->setObjectName(QStringLiteral("lineEditNomeDoCliente"));
        lineEditNomeDoCliente->setGeometry(QRect(160, 10, 201, 25));
        lineEditAgencia = new QLineEdit(centralWidget);
        lineEditAgencia->setObjectName(QStringLiteral("lineEditAgencia"));
        lineEditAgencia->setGeometry(QRect(100, 40, 113, 25));
        lineEditNumeroDaConta = new QLineEdit(centralWidget);
        lineEditNumeroDaConta->setObjectName(QStringLiteral("lineEditNumeroDaConta"));
        lineEditNumeroDaConta->setGeometry(QRect(170, 70, 113, 25));
        lineEditSaldo = new QLineEdit(centralWidget);
        lineEditSaldo->setObjectName(QStringLiteral("lineEditSaldo"));
        lineEditSaldo->setEnabled(true);
        lineEditSaldo->setGeometry(QRect(90, 100, 113, 25));
        lineEditValor = new QLineEdit(centralWidget);
        lineEditValor->setObjectName(QStringLiteral("lineEditValor"));
        lineEditValor->setEnabled(true);
        lineEditValor->setGeometry(QRect(80, 240, 221, 25));
        label_5 = new QLabel(centralWidget);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(170, 220, 51, 16));
        pushButtonCriarConta = new QPushButton(centralWidget);
        pushButtonCriarConta->setObjectName(QStringLiteral("pushButtonCriarConta"));
        pushButtonCriarConta->setGeometry(QRect(30, 150, 90, 26));
        pushButtonSacar = new QPushButton(centralWidget);
        pushButtonSacar->setObjectName(QStringLiteral("pushButtonSacar"));
        pushButtonSacar->setGeometry(QRect(40, 290, 90, 26));
        pushButtonDepositar = new QPushButton(centralWidget);
        pushButtonDepositar->setObjectName(QStringLiteral("pushButtonDepositar"));
        pushButtonDepositar->setGeometry(QRect(230, 290, 90, 26));
        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 372, 27));
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
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "PROJETO CONTA POUPAN\303\207A", 0));
        label->setText(QApplication::translate("MainWindow", "NOME DO CLIENTE:", 0));
        label_2->setText(QApplication::translate("MainWindow", "AGENCIA: ", 0));
        label_3->setText(QApplication::translate("MainWindow", "NUMERO DA CONTA : ", 0));
        label_4->setText(QApplication::translate("MainWindow", "SALDO :", 0));
        label_5->setText(QApplication::translate("MainWindow", "VALOR", 0));
        pushButtonCriarConta->setText(QApplication::translate("MainWindow", "Criar Conta", 0));
        pushButtonSacar->setText(QApplication::translate("MainWindow", "SACAR", 0));
        pushButtonDepositar->setText(QApplication::translate("MainWindow", "DEPOSITAR", 0));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
