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
    QPushButton *pushButtonSomar;
    QLineEdit *lineEditSaida;
    QLineEdit *lineEditParteRealNumero1;
    QLineEdit *lineEditParteImaginariaNumero1;
    QLineEdit *lineEditParteRealNumero2;
    QLineEdit *lineEditParteImaginariaNumero2;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QPushButton *pushButtonSubtrair;
    QPushButton *pushButtonMultiplicar;
    QPushButton *pushButtonDividir;
    QPushButton *pushButtonIgualdade;
    QPushButton *pushButtonDiferenca;
    QLabel *label_5;
    QLabel *label_6;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(191, 214);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        pushButtonSomar = new QPushButton(centralWidget);
        pushButtonSomar->setObjectName(QStringLiteral("pushButtonSomar"));
        pushButtonSomar->setGeometry(QRect(10, 100, 48, 26));
        lineEditSaida = new QLineEdit(centralWidget);
        lineEditSaida->setObjectName(QStringLiteral("lineEditSaida"));
        lineEditSaida->setGeometry(QRect(10, 10, 171, 25));
        lineEditSaida->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        lineEditSaida->setDragEnabled(false);
        lineEditParteRealNumero1 = new QLineEdit(centralWidget);
        lineEditParteRealNumero1->setObjectName(QStringLiteral("lineEditParteRealNumero1"));
        lineEditParteRealNumero1->setGeometry(QRect(60, 40, 41, 25));
        lineEditParteImaginariaNumero1 = new QLineEdit(centralWidget);
        lineEditParteImaginariaNumero1->setObjectName(QStringLiteral("lineEditParteImaginariaNumero1"));
        lineEditParteImaginariaNumero1->setGeometry(QRect(120, 40, 41, 25));
        lineEditParteRealNumero2 = new QLineEdit(centralWidget);
        lineEditParteRealNumero2->setObjectName(QStringLiteral("lineEditParteRealNumero2"));
        lineEditParteRealNumero2->setGeometry(QRect(60, 70, 41, 25));
        lineEditParteImaginariaNumero2 = new QLineEdit(centralWidget);
        lineEditParteImaginariaNumero2->setObjectName(QStringLiteral("lineEditParteImaginariaNumero2"));
        lineEditParteImaginariaNumero2->setGeometry(QRect(120, 70, 41, 25));
        label = new QLabel(centralWidget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(100, 40, 20, 21));
        label->setAlignment(Qt::AlignCenter);
        label_2 = new QLabel(centralWidget);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(100, 70, 20, 21));
        label_2->setAlignment(Qt::AlignCenter);
        label_3 = new QLabel(centralWidget);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(160, 40, 20, 21));
        QFont font;
        font.setPointSize(11);
        label_3->setFont(font);
        label_3->setAlignment(Qt::AlignCenter);
        label_4 = new QLabel(centralWidget);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(160, 70, 20, 21));
        label_4->setFont(font);
        label_4->setAlignment(Qt::AlignCenter);
        pushButtonSubtrair = new QPushButton(centralWidget);
        pushButtonSubtrair->setObjectName(QStringLiteral("pushButtonSubtrair"));
        pushButtonSubtrair->setGeometry(QRect(70, 100, 48, 26));
        pushButtonMultiplicar = new QPushButton(centralWidget);
        pushButtonMultiplicar->setObjectName(QStringLiteral("pushButtonMultiplicar"));
        pushButtonMultiplicar->setGeometry(QRect(130, 100, 48, 26));
        pushButtonDividir = new QPushButton(centralWidget);
        pushButtonDividir->setObjectName(QStringLiteral("pushButtonDividir"));
        pushButtonDividir->setGeometry(QRect(10, 130, 48, 26));
        pushButtonIgualdade = new QPushButton(centralWidget);
        pushButtonIgualdade->setObjectName(QStringLiteral("pushButtonIgualdade"));
        pushButtonIgualdade->setGeometry(QRect(70, 130, 48, 26));
        pushButtonDiferenca = new QPushButton(centralWidget);
        pushButtonDiferenca->setObjectName(QStringLiteral("pushButtonDiferenca"));
        pushButtonDiferenca->setGeometry(QRect(130, 130, 48, 26));
        label_5 = new QLabel(centralWidget);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(20, 40, 41, 31));
        QFont font1;
        font1.setBold(true);
        font1.setUnderline(false);
        font1.setWeight(75);
        label_5->setFont(font1);
        label_6 = new QLabel(centralWidget);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(20, 75, 41, 21));
        label_6->setFont(font1);
        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 191, 21));
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
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "NComplexo", 0));
        pushButtonSomar->setText(QApplication::translate("MainWindow", "+", 0));
        label->setText(QApplication::translate("MainWindow", "+", 0));
        label_2->setText(QApplication::translate("MainWindow", "+", 0));
        label_3->setText(QApplication::translate("MainWindow", "i", 0));
        label_4->setText(QApplication::translate("MainWindow", "i", 0));
        pushButtonSubtrair->setText(QApplication::translate("MainWindow", "-", 0));
        pushButtonMultiplicar->setText(QApplication::translate("MainWindow", "x", 0));
        pushButtonDividir->setText(QApplication::translate("MainWindow", "/", 0));
        pushButtonIgualdade->setText(QApplication::translate("MainWindow", "==", 0));
        pushButtonDiferenca->setText(QApplication::translate("MainWindow", "!=", 0));
        label_5->setText(QApplication::translate("MainWindow", "1\302\260:", 0));
        label_6->setText(QApplication::translate("MainWindow", "2\302\260:", 0));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
