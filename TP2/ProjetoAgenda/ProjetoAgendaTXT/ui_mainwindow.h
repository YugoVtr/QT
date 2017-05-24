/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.4.0
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
    QPushButton *pushButtonIncluir;
    QLabel *label;
    QLineEdit *lineEditNome;
    QLabel *label_2;
    QLineEdit *lineEditEndereco;
    QLabel *label_3;
    QLineEdit *lineEditTelefone;
    QLabel *label_4;
    QLineEdit *lineEditEmail;
    QPushButton *pushButtonExcluir;
    QPushButton *pushButtonListar;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(635, 407);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        pushButtonIncluir = new QPushButton(centralWidget);
        pushButtonIncluir->setObjectName(QStringLiteral("pushButtonIncluir"));
        pushButtonIncluir->setGeometry(QRect(510, 20, 115, 32));
        label = new QLabel(centralWidget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(10, 20, 59, 16));
        lineEditNome = new QLineEdit(centralWidget);
        lineEditNome->setObjectName(QStringLiteral("lineEditNome"));
        lineEditNome->setGeometry(QRect(50, 20, 451, 21));
        label_2 = new QLabel(centralWidget);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(10, 60, 81, 16));
        lineEditEndereco = new QLineEdit(centralWidget);
        lineEditEndereco->setObjectName(QStringLiteral("lineEditEndereco"));
        lineEditEndereco->setGeometry(QRect(90, 60, 411, 21));
        label_3 = new QLabel(centralWidget);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(10, 100, 81, 16));
        lineEditTelefone = new QLineEdit(centralWidget);
        lineEditTelefone->setObjectName(QStringLiteral("lineEditTelefone"));
        lineEditTelefone->setGeometry(QRect(90, 100, 151, 21));
        label_4 = new QLabel(centralWidget);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(10, 140, 59, 16));
        lineEditEmail = new QLineEdit(centralWidget);
        lineEditEmail->setObjectName(QStringLiteral("lineEditEmail"));
        lineEditEmail->setGeometry(QRect(90, 140, 411, 21));
        pushButtonExcluir = new QPushButton(centralWidget);
        pushButtonExcluir->setObjectName(QStringLiteral("pushButtonExcluir"));
        pushButtonExcluir->setGeometry(QRect(510, 60, 115, 32));
        pushButtonListar = new QPushButton(centralWidget);
        pushButtonListar->setObjectName(QStringLiteral("pushButtonListar"));
        pushButtonListar->setGeometry(QRect(510, 100, 115, 32));
        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 635, 22));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);
        QWidget::setTabOrder(lineEditNome, lineEditEndereco);
        QWidget::setTabOrder(lineEditEndereco, lineEditTelefone);
        QWidget::setTabOrder(lineEditTelefone, lineEditEmail);
        QWidget::setTabOrder(lineEditEmail, pushButtonIncluir);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", 0));
        pushButtonIncluir->setText(QApplication::translate("MainWindow", "Incluir", 0));
        label->setText(QApplication::translate("MainWindow", "NOME", 0));
        label_2->setText(QApplication::translate("MainWindow", "ENDERECO", 0));
        label_3->setText(QApplication::translate("MainWindow", "TELEFONE", 0));
        label_4->setText(QApplication::translate("MainWindow", "EMAIL", 0));
        pushButtonExcluir->setText(QApplication::translate("MainWindow", "Excluir", 0));
        pushButtonListar->setText(QApplication::translate("MainWindow", "Listar", 0));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
