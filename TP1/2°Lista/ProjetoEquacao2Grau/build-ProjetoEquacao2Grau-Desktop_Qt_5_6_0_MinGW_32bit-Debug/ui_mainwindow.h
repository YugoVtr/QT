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
    QLineEdit *lineEditCoeficienteA;
    QLineEdit *lineEditCoeficienteB;
    QLineEdit *lineEditCoeficienteC;
    QPushButton *pushButtonCalcular;
    QLineEdit *lineEditSaida;
    QLabel *label_4;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(277, 230);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        label = new QLabel(centralWidget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(31, 21, 76, 16));
        label_2 = new QLabel(centralWidget);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(31, 47, 76, 16));
        label_3 = new QLabel(centralWidget);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(31, 73, 75, 16));
        lineEditCoeficienteA = new QLineEdit(centralWidget);
        lineEditCoeficienteA->setObjectName(QStringLiteral("lineEditCoeficienteA"));
        lineEditCoeficienteA->setGeometry(QRect(113, 21, 133, 20));
        lineEditCoeficienteA->setStyleSheet(QStringLiteral(""));
        lineEditCoeficienteB = new QLineEdit(centralWidget);
        lineEditCoeficienteB->setObjectName(QStringLiteral("lineEditCoeficienteB"));
        lineEditCoeficienteB->setGeometry(QRect(113, 47, 133, 20));
        lineEditCoeficienteC = new QLineEdit(centralWidget);
        lineEditCoeficienteC->setObjectName(QStringLiteral("lineEditCoeficienteC"));
        lineEditCoeficienteC->setGeometry(QRect(113, 73, 133, 20));
        pushButtonCalcular = new QPushButton(centralWidget);
        pushButtonCalcular->setObjectName(QStringLiteral("pushButtonCalcular"));
        pushButtonCalcular->setGeometry(QRect(30, 100, 75, 23));
        lineEditSaida = new QLineEdit(centralWidget);
        lineEditSaida->setObjectName(QStringLiteral("lineEditSaida"));
        lineEditSaida->setGeometry(QRect(30, 150, 211, 20));
        label_4 = new QLabel(centralWidget);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(110, 130, 47, 13));
        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 277, 21));
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
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "Projeto Equa\303\247\303\243o do 2\302\260 Grau ", 0));
        label->setText(QApplication::translate("MainWindow", "COEFICIENTE a", 0));
        label_2->setText(QApplication::translate("MainWindow", "COEFICIENTE b", 0));
        label_3->setText(QApplication::translate("MainWindow", "COEFICIENTE c", 0));
#ifndef QT_NO_TOOLTIP
        lineEditCoeficienteA->setToolTip(QApplication::translate("MainWindow", "<html><head/><body><p><br/></p></body></html>", 0));
#endif // QT_NO_TOOLTIP
        pushButtonCalcular->setText(QApplication::translate("MainWindow", "Calcular", 0));
        label_4->setText(QApplication::translate("MainWindow", "RAIZES", 0));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
