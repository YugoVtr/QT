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
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QLabel *label;
    QTextEdit *textEditSaidaMatA;
    QTextEdit *textEditSaidaMatB;
    QLabel *label_5;
    QPushButton *pushButton;
    QTextEdit *textEditSaidaResultado;
    QPushButton *pushButtonApagarMatA;
    QPushButton *pushButtonCriarMatA;
    QLineEdit *lineEditQuantidadeColunasMatA;
    QLabel *label_3;
    QLabel *label_2;
    QLineEdit *lineEditQuantidadeLinhasMatA;
    QLineEdit *lineEditQuantidadeLinhasMatB;
    QLabel *label_6;
    QPushButton *pushButtonCriarMatB;
    QPushButton *pushButtonApagarMatB;
    QLineEdit *lineEditQuantidadeColunasMatB;
    QLabel *label_4;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(519, 525);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        label = new QLabel(centralWidget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(50, 10, 121, 16));
        textEditSaidaMatA = new QTextEdit(centralWidget);
        textEditSaidaMatA->setObjectName(QStringLiteral("textEditSaidaMatA"));
        textEditSaidaMatA->setGeometry(QRect(10, 130, 191, 81));
        textEditSaidaMatB = new QTextEdit(centralWidget);
        textEditSaidaMatB->setObjectName(QStringLiteral("textEditSaidaMatB"));
        textEditSaidaMatB->setGeometry(QRect(300, 130, 191, 81));
        label_5 = new QLabel(centralWidget);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(340, 10, 121, 16));
        pushButton = new QPushButton(centralWidget);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(210, 130, 71, 32));
        textEditSaidaResultado = new QTextEdit(centralWidget);
        textEditSaidaResultado->setObjectName(QStringLiteral("textEditSaidaResultado"));
        textEditSaidaResultado->setGeometry(QRect(150, 230, 191, 81));
        pushButtonApagarMatA = new QPushButton(centralWidget);
        pushButtonApagarMatA->setObjectName(QStringLiteral("pushButtonApagarMatA"));
        pushButtonApagarMatA->setGeometry(QRect(112, 101, 75, 23));
        pushButtonCriarMatA = new QPushButton(centralWidget);
        pushButtonCriarMatA->setObjectName(QStringLiteral("pushButtonCriarMatA"));
        pushButtonCriarMatA->setGeometry(QRect(31, 101, 75, 23));
        lineEditQuantidadeColunasMatA = new QLineEdit(centralWidget);
        lineEditQuantidadeColunasMatA->setObjectName(QStringLiteral("lineEditQuantidadeColunasMatA"));
        lineEditQuantidadeColunasMatA->setGeometry(QRect(129, 71, 71, 20));
        label_3 = new QLabel(centralWidget);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(11, 71, 112, 16));
        label_2 = new QLabel(centralWidget);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(11, 41, 104, 16));
        lineEditQuantidadeLinhasMatA = new QLineEdit(centralWidget);
        lineEditQuantidadeLinhasMatA->setObjectName(QStringLiteral("lineEditQuantidadeLinhasMatA"));
        lineEditQuantidadeLinhasMatA->setGeometry(QRect(121, 41, 79, 20));
        lineEditQuantidadeLinhasMatB = new QLineEdit(centralWidget);
        lineEditQuantidadeLinhasMatB->setObjectName(QStringLiteral("lineEditQuantidadeLinhasMatB"));
        lineEditQuantidadeLinhasMatB->setGeometry(QRect(411, 41, 79, 20));
        label_6 = new QLabel(centralWidget);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(301, 41, 104, 16));
        pushButtonCriarMatB = new QPushButton(centralWidget);
        pushButtonCriarMatB->setObjectName(QStringLiteral("pushButtonCriarMatB"));
        pushButtonCriarMatB->setGeometry(QRect(321, 101, 75, 23));
        pushButtonApagarMatB = new QPushButton(centralWidget);
        pushButtonApagarMatB->setObjectName(QStringLiteral("pushButtonApagarMatB"));
        pushButtonApagarMatB->setGeometry(QRect(402, 101, 75, 23));
        lineEditQuantidadeColunasMatB = new QLineEdit(centralWidget);
        lineEditQuantidadeColunasMatB->setObjectName(QStringLiteral("lineEditQuantidadeColunasMatB"));
        lineEditQuantidadeColunasMatB->setGeometry(QRect(419, 71, 71, 20));
        label_4 = new QLabel(centralWidget);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(301, 71, 112, 16));
        MainWindow->setCentralWidget(centralWidget);
        label->raise();
        textEditSaidaMatA->raise();
        textEditSaidaMatB->raise();
        label_5->raise();
        pushButton->raise();
        textEditSaidaResultado->raise();
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 519, 21));
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
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", 0));
        label->setText(QApplication::translate("MainWindow", "PRIMEIRA MATRIZ", 0));
        label_5->setText(QApplication::translate("MainWindow", "SEGUNDA MATRIZ", 0));
        pushButton->setText(QApplication::translate("MainWindow", "+", 0));
        pushButtonApagarMatA->setText(QApplication::translate("MainWindow", "Apagar", 0));
        pushButtonCriarMatA->setText(QApplication::translate("MainWindow", "Criar", 0));
        label_3->setText(QApplication::translate("MainWindow", "Quantidade de Colunas", 0));
        label_2->setText(QApplication::translate("MainWindow", "Quantidade de Linhas", 0));
        label_6->setText(QApplication::translate("MainWindow", "Quantidade de Linhas", 0));
        pushButtonCriarMatB->setText(QApplication::translate("MainWindow", "Criar", 0));
        pushButtonApagarMatB->setText(QApplication::translate("MainWindow", "Apagar", 0));
        label_4->setText(QApplication::translate("MainWindow", "Quantidade de Colunas", 0));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
