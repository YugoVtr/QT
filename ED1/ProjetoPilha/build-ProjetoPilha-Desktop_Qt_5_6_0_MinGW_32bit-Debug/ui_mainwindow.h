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
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
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
    QTextEdit *textEdit_Saida;
    QWidget *layoutWidget;
    QGridLayout *gridLayout;
    QPushButton *pushButton_CriarPilha;
    QLineEdit *lineEdit_TamanhodaPilhaCriada;
    QPushButton *pushButton_inserirElemento;
    QLineEdit *lineEdit_InserirValor;
    QPushButton *pushButton_RetirarElemento;
    QPushButton *pushButton_NumeroDeElementos;
    QLineEdit *lineEdit_NumeroDeElementos;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(316, 287);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        textEdit_Saida = new QTextEdit(centralWidget);
        textEdit_Saida->setObjectName(QStringLiteral("textEdit_Saida"));
        textEdit_Saida->setGeometry(QRect(10, 10, 51, 196));
        textEdit_Saida->setLayoutDirection(Qt::LeftToRight);
        layoutWidget = new QWidget(centralWidget);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(70, 10, 222, 221));
        gridLayout = new QGridLayout(layoutWidget);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        pushButton_CriarPilha = new QPushButton(layoutWidget);
        pushButton_CriarPilha->setObjectName(QStringLiteral("pushButton_CriarPilha"));

        gridLayout->addWidget(pushButton_CriarPilha, 0, 0, 1, 1);

        lineEdit_TamanhodaPilhaCriada = new QLineEdit(layoutWidget);
        lineEdit_TamanhodaPilhaCriada->setObjectName(QStringLiteral("lineEdit_TamanhodaPilhaCriada"));
        lineEdit_TamanhodaPilhaCriada->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(lineEdit_TamanhodaPilhaCriada, 0, 1, 1, 1);

        pushButton_inserirElemento = new QPushButton(layoutWidget);
        pushButton_inserirElemento->setObjectName(QStringLiteral("pushButton_inserirElemento"));
        pushButton_inserirElemento->setLayoutDirection(Qt::LeftToRight);

        gridLayout->addWidget(pushButton_inserirElemento, 1, 0, 1, 1);

        lineEdit_InserirValor = new QLineEdit(layoutWidget);
        lineEdit_InserirValor->setObjectName(QStringLiteral("lineEdit_InserirValor"));
        lineEdit_InserirValor->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(lineEdit_InserirValor, 1, 1, 1, 1);

        pushButton_RetirarElemento = new QPushButton(layoutWidget);
        pushButton_RetirarElemento->setObjectName(QStringLiteral("pushButton_RetirarElemento"));

        gridLayout->addWidget(pushButton_RetirarElemento, 2, 0, 1, 1);

        pushButton_NumeroDeElementos = new QPushButton(layoutWidget);
        pushButton_NumeroDeElementos->setObjectName(QStringLiteral("pushButton_NumeroDeElementos"));
        QFont font;
        font.setPointSize(8);
        pushButton_NumeroDeElementos->setFont(font);

        gridLayout->addWidget(pushButton_NumeroDeElementos, 2, 1, 1, 1);

        lineEdit_NumeroDeElementos = new QLineEdit(layoutWidget);
        lineEdit_NumeroDeElementos->setObjectName(QStringLiteral("lineEdit_NumeroDeElementos"));
        QFont font1;
        font1.setPointSize(12);
        font1.setBold(true);
        font1.setWeight(75);
        lineEdit_NumeroDeElementos->setFont(font1);
        lineEdit_NumeroDeElementos->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(lineEdit_NumeroDeElementos, 3, 0, 1, 2);

        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 316, 21));
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
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "Pilha", 0));
        pushButton_CriarPilha->setText(QApplication::translate("MainWindow", "Criar", 0));
        pushButton_inserirElemento->setText(QApplication::translate("MainWindow", "Inserir", 0));
        pushButton_RetirarElemento->setText(QApplication::translate("MainWindow", "Retirar", 0));
        pushButton_NumeroDeElementos->setText(QApplication::translate("MainWindow", "N\302\260 de Elementos", 0));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
