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
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
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
    QTextEdit *textEditSaida;
    QWidget *widget;
    QHBoxLayout *horizontalLayout;
    QPushButton *pushButtonAbrirArquivo;
    QPushButton *pushButtonCriarNovoArquivo;
    QPushButton *pushButtonIncluirNoFinal;
    QPushButton *pushButtonLimparCaixa;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(681, 363);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        textEditSaida = new QTextEdit(centralWidget);
        textEditSaida->setObjectName(QStringLiteral("textEditSaida"));
        textEditSaida->setGeometry(QRect(10, 80, 661, 211));
        widget = new QWidget(centralWidget);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setGeometry(QRect(10, 10, 659, 32));
        horizontalLayout = new QHBoxLayout(widget);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        pushButtonAbrirArquivo = new QPushButton(widget);
        pushButtonAbrirArquivo->setObjectName(QStringLiteral("pushButtonAbrirArquivo"));

        horizontalLayout->addWidget(pushButtonAbrirArquivo);

        pushButtonCriarNovoArquivo = new QPushButton(widget);
        pushButtonCriarNovoArquivo->setObjectName(QStringLiteral("pushButtonCriarNovoArquivo"));

        horizontalLayout->addWidget(pushButtonCriarNovoArquivo);

        pushButtonIncluirNoFinal = new QPushButton(widget);
        pushButtonIncluirNoFinal->setObjectName(QStringLiteral("pushButtonIncluirNoFinal"));

        horizontalLayout->addWidget(pushButtonIncluirNoFinal);

        pushButtonLimparCaixa = new QPushButton(widget);
        pushButtonLimparCaixa->setObjectName(QStringLiteral("pushButtonLimparCaixa"));

        horizontalLayout->addWidget(pushButtonLimparCaixa);

        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 681, 22));
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
        pushButtonAbrirArquivo->setText(QApplication::translate("MainWindow", "Abrir Arquivo", 0));
        pushButtonCriarNovoArquivo->setText(QApplication::translate("MainWindow", "Criar Novo Arquivo", 0));
        pushButtonIncluirNoFinal->setText(QApplication::translate("MainWindow", "Incluir no Final do Arquivo", 0));
        pushButtonLimparCaixa->setText(QApplication::translate("MainWindow", "Limpar Caixa de Texto", 0));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
