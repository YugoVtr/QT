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
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QTableWidget *tableWidget_MostrarLista;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout;
    QPushButton *pushButton_CarregarArquivo;
    QPushButton *pushButton_Limpar;
    QPushButton *pushButton_Salvar;
    QWidget *layoutWidget_2;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *pushButton_AdicionarLinha;
    QPushButton *pushButton_RemoverLinha;
    QLabel *label;
    QLineEdit *lineEdit_Linha;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(412, 645);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        tableWidget_MostrarLista = new QTableWidget(centralWidget);
        tableWidget_MostrarLista->setObjectName(QStringLiteral("tableWidget_MostrarLista"));
        tableWidget_MostrarLista->setGeometry(QRect(20, 120, 361, 471));
        tableWidget_MostrarLista->setShowGrid(true);
        tableWidget_MostrarLista->horizontalHeader()->setVisible(false);
        tableWidget_MostrarLista->horizontalHeader()->setCascadingSectionResizes(false);
        tableWidget_MostrarLista->horizontalHeader()->setHighlightSections(true);
        tableWidget_MostrarLista->horizontalHeader()->setProperty("showSortIndicator", QVariant(false));
        tableWidget_MostrarLista->horizontalHeader()->setStretchLastSection(true);
        tableWidget_MostrarLista->verticalHeader()->setVisible(true);
        tableWidget_MostrarLista->verticalHeader()->setCascadingSectionResizes(false);
        tableWidget_MostrarLista->verticalHeader()->setProperty("showSortIndicator", QVariant(false));
        tableWidget_MostrarLista->verticalHeader()->setStretchLastSection(false);
        layoutWidget = new QWidget(centralWidget);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(60, 20, 281, 25));
        horizontalLayout = new QHBoxLayout(layoutWidget);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        pushButton_CarregarArquivo = new QPushButton(layoutWidget);
        pushButton_CarregarArquivo->setObjectName(QStringLiteral("pushButton_CarregarArquivo"));
        pushButton_CarregarArquivo->setStyleSheet(QStringLiteral("background-color: rgb(240, 240, 240);"));

        horizontalLayout->addWidget(pushButton_CarregarArquivo);

        pushButton_Limpar = new QPushButton(layoutWidget);
        pushButton_Limpar->setObjectName(QStringLiteral("pushButton_Limpar"));
        pushButton_Limpar->setStyleSheet(QStringLiteral("background-color: rgb(240, 240, 240);"));

        horizontalLayout->addWidget(pushButton_Limpar);

        pushButton_Salvar = new QPushButton(layoutWidget);
        pushButton_Salvar->setObjectName(QStringLiteral("pushButton_Salvar"));
        pushButton_Salvar->setStyleSheet(QStringLiteral("background-color: rgb(240, 240, 240);"));

        horizontalLayout->addWidget(pushButton_Salvar);

        layoutWidget_2 = new QWidget(centralWidget);
        layoutWidget_2->setObjectName(QStringLiteral("layoutWidget_2"));
        layoutWidget_2->setGeometry(QRect(60, 50, 281, 31));
        horizontalLayout_2 = new QHBoxLayout(layoutWidget_2);
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        pushButton_AdicionarLinha = new QPushButton(layoutWidget_2);
        pushButton_AdicionarLinha->setObjectName(QStringLiteral("pushButton_AdicionarLinha"));
        pushButton_AdicionarLinha->setStyleSheet(QStringLiteral("background-color: rgb(240, 240, 240);"));

        horizontalLayout_2->addWidget(pushButton_AdicionarLinha);

        pushButton_RemoverLinha = new QPushButton(layoutWidget_2);
        pushButton_RemoverLinha->setObjectName(QStringLiteral("pushButton_RemoverLinha"));
        pushButton_RemoverLinha->setStyleSheet(QStringLiteral("background-color: rgb(240, 240, 240);"));

        horizontalLayout_2->addWidget(pushButton_RemoverLinha);

        label = new QLabel(layoutWidget_2);
        label->setObjectName(QStringLiteral("label"));
        QFont font;
        font.setBold(true);
        font.setWeight(75);
        label->setFont(font);

        horizontalLayout_2->addWidget(label);

        lineEdit_Linha = new QLineEdit(layoutWidget_2);
        lineEdit_Linha->setObjectName(QStringLiteral("lineEdit_Linha"));
        lineEdit_Linha->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));
        lineEdit_Linha->setAlignment(Qt::AlignCenter);

        horizontalLayout_2->addWidget(lineEdit_Linha);

        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 412, 21));
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
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "Lista", 0));
        pushButton_CarregarArquivo->setText(QApplication::translate("MainWindow", "CARREGAR ARQUIVO", 0));
        pushButton_Limpar->setText(QApplication::translate("MainWindow", "LIMPAR", 0));
        pushButton_Salvar->setText(QApplication::translate("MainWindow", "SALVAR", 0));
        pushButton_AdicionarLinha->setText(QApplication::translate("MainWindow", "ADICIONAR ", 0));
        pushButton_RemoverLinha->setText(QApplication::translate("MainWindow", "REMOVER", 0));
        label->setText(QApplication::translate("MainWindow", "LINHA -->", 0));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
