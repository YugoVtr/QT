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
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLineEdit *lineEditNomeCompleto;
    QLineEdit *lineEditPeso;
    QLineEdit *lineEditSexo;
    QLineEdit *lineEditAltura;
    QTextEdit *textEditSaida;
    QPushButton *pushButtonExecutar;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(739, 437);
        MainWindow->setCursor(QCursor(Qt::OpenHandCursor));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        label = new QLabel(centralWidget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(36, 20, 121, 20));
        QFont font;
        font.setBold(true);
        font.setWeight(75);
        label->setFont(font);
        label_2 = new QLabel(centralWidget);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(40, 60, 61, 15));
        label_2->setFont(font);
        label_3 = new QLabel(centralWidget);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(460, 70, 61, 15));
        label_3->setFont(font);
        label_4 = new QLabel(centralWidget);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(460, 30, 61, 15));
        label_4->setFont(font);
        lineEditNomeCompleto = new QLineEdit(centralWidget);
        lineEditNomeCompleto->setObjectName(QStringLiteral("lineEditNomeCompleto"));
        lineEditNomeCompleto->setGeometry(QRect(160, 20, 281, 25));
        lineEditPeso = new QLineEdit(centralWidget);
        lineEditPeso->setObjectName(QStringLiteral("lineEditPeso"));
        lineEditPeso->setGeometry(QRect(90, 50, 113, 25));
        lineEditSexo = new QLineEdit(centralWidget);
        lineEditSexo->setObjectName(QStringLiteral("lineEditSexo"));
        lineEditSexo->setGeometry(QRect(510, 20, 113, 25));
        lineEditAltura = new QLineEdit(centralWidget);
        lineEditAltura->setObjectName(QStringLiteral("lineEditAltura"));
        lineEditAltura->setGeometry(QRect(510, 60, 113, 25));
        textEditSaida = new QTextEdit(centralWidget);
        textEditSaida->setObjectName(QStringLiteral("textEditSaida"));
        textEditSaida->setGeometry(QRect(60, 170, 601, 191));
        pushButtonExecutar = new QPushButton(centralWidget);
        pushButtonExecutar->setObjectName(QStringLiteral("pushButtonExecutar"));
        pushButtonExecutar->setGeometry(QRect(40, 90, 92, 27));
        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 739, 21));
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
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "Projeto Classe Pessoa", 0));
        label->setText(QApplication::translate("MainWindow", "Nome Completo ", 0));
        label_2->setText(QApplication::translate("MainWindow", "Idade", 0));
        label_3->setText(QApplication::translate("MainWindow", "Altura", 0));
        label_4->setText(QApplication::translate("MainWindow", "Sexo", 0));
        pushButtonExecutar->setText(QApplication::translate("MainWindow", "Calcular", 0));
        mainToolBar->setWindowTitle(QApplication::translate("MainWindow", "Classe Pessoa", 0));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
