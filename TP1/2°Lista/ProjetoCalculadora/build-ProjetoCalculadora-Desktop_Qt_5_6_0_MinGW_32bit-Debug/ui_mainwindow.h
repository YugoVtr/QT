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
    QLineEdit *lineEditVisor;
    QPushButton *pushButtonAdicionar;
    QPushButton *pushButtonSubtrair;
    QPushButton *pushButtonMutiplicar;
    QPushButton *pushButtonDividir;
    QPushButton *pushButtonPotencia;
    QPushButton *pushButtonRaiz;
    QLineEdit *lineEditNumero1;
    QLineEdit *lineEditNumero2;
    QLabel *label;
    QLabel *label_2;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(238, 201);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        lineEditVisor = new QLineEdit(centralWidget);
        lineEditVisor->setObjectName(QStringLiteral("lineEditVisor"));
        lineEditVisor->setGeometry(QRect(11, 6, 208, 31));
        QFont font;
        font.setPointSize(14);
        lineEditVisor->setFont(font);
        lineEditVisor->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        pushButtonAdicionar = new QPushButton(centralWidget);
        pushButtonAdicionar->setObjectName(QStringLiteral("pushButtonAdicionar"));
        pushButtonAdicionar->setGeometry(QRect(11, 91, 69, 23));
        pushButtonAdicionar->setIconSize(QSize(16, 16));
        pushButtonSubtrair = new QPushButton(centralWidget);
        pushButtonSubtrair->setObjectName(QStringLiteral("pushButtonSubtrair"));
        pushButtonSubtrair->setGeometry(QRect(80, 91, 69, 23));
        pushButtonSubtrair->setIconSize(QSize(16, 16));
        pushButtonMutiplicar = new QPushButton(centralWidget);
        pushButtonMutiplicar->setObjectName(QStringLiteral("pushButtonMutiplicar"));
        pushButtonMutiplicar->setGeometry(QRect(11, 120, 69, 23));
        pushButtonMutiplicar->setIconSize(QSize(16, 16));
        pushButtonDividir = new QPushButton(centralWidget);
        pushButtonDividir->setObjectName(QStringLiteral("pushButtonDividir"));
        pushButtonDividir->setGeometry(QRect(80, 120, 69, 23));
        pushButtonDividir->setIconSize(QSize(16, 16));
        pushButtonPotencia = new QPushButton(centralWidget);
        pushButtonPotencia->setObjectName(QStringLiteral("pushButtonPotencia"));
        pushButtonPotencia->setGeometry(QRect(150, 91, 69, 23));
        QFont font1;
        font1.setPointSize(8);
        pushButtonPotencia->setFont(font1);
        QIcon icon;
        icon.addFile(QStringLiteral("../Incone Potencia.png"), QSize(), QIcon::Normal, QIcon::On);
        pushButtonPotencia->setIcon(icon);
        pushButtonPotencia->setIconSize(QSize(64, 64));
        pushButtonRaiz = new QPushButton(centralWidget);
        pushButtonRaiz->setObjectName(QStringLiteral("pushButtonRaiz"));
        pushButtonRaiz->setGeometry(QRect(150, 120, 69, 23));
        QIcon icon1;
        icon1.addFile(QStringLiteral("../Incone Raiz indice X.png"), QSize(), QIcon::Normal, QIcon::On);
        pushButtonRaiz->setIcon(icon1);
        pushButtonRaiz->setIconSize(QSize(64, 64));
        lineEditNumero1 = new QLineEdit(centralWidget);
        lineEditNumero1->setObjectName(QStringLiteral("lineEditNumero1"));
        lineEditNumero1->setGeometry(QRect(11, 60, 90, 25));
        QFont font2;
        font2.setPointSize(10);
        lineEditNumero1->setFont(font2);
        lineEditNumero1->setAlignment(Qt::AlignCenter);
        lineEditNumero2 = new QLineEdit(centralWidget);
        lineEditNumero2->setObjectName(QStringLiteral("lineEditNumero2"));
        lineEditNumero2->setGeometry(QRect(130, 60, 87, 25));
        lineEditNumero2->setFont(font2);
        lineEditNumero2->setAlignment(Qt::AlignCenter);
        label = new QLabel(centralWidget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(30, 40, 61, 15));
        label_2 = new QLabel(centralWidget);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(150, 40, 61, 15));
        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 238, 21));
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
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "PROJETO CALCULADORA", 0));
#ifndef QT_NO_TOOLTIP
        pushButtonAdicionar->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        pushButtonAdicionar->setText(QApplication::translate("MainWindow", "+", 0));
#ifndef QT_NO_TOOLTIP
        pushButtonSubtrair->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        pushButtonSubtrair->setText(QApplication::translate("MainWindow", "-", 0));
#ifndef QT_NO_TOOLTIP
        pushButtonMutiplicar->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        pushButtonMutiplicar->setText(QApplication::translate("MainWindow", "X", 0));
#ifndef QT_NO_TOOLTIP
        pushButtonDividir->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        pushButtonDividir->setText(QApplication::translate("MainWindow", "/", 0));
#ifndef QT_NO_TOOLTIP
        pushButtonPotencia->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        pushButtonPotencia->setText(QString());
#ifndef QT_NO_TOOLTIP
        pushButtonRaiz->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        pushButtonRaiz->setText(QString());
        lineEditNumero1->setText(QString());
        lineEditNumero2->setText(QString());
        label->setText(QApplication::translate("MainWindow", "VALOR 1", 0));
        label_2->setText(QApplication::translate("MainWindow", "VALOR 2", 0));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
