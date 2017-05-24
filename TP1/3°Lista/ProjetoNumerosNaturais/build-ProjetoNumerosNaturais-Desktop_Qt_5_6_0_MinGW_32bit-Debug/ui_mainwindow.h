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
    QPushButton *pushButtonExibir;
    QLineEdit *lineEditPrimeiroNumero;
    QLineEdit *lineEditSegundoNumero;
    QLabel *label;
    QLabel *label_2;
    QTableWidget *tableWidgetResultados;
    QPushButton *pushButton;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(428, 459);
        MainWindow->setAutoFillBackground(false);
        MainWindow->setStyleSheet(QStringLiteral("background-color: rgb(204, 204, 204);"));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        pushButtonExibir = new QPushButton(centralWidget);
        pushButtonExibir->setObjectName(QStringLiteral("pushButtonExibir"));
        pushButtonExibir->setGeometry(QRect(20, 30, 61, 22));
        pushButtonExibir->setStyleSheet(QLatin1String("background-color: rgb(190, 190, 190);\n"
"font: 11pt \"AR CENA\";"));
        lineEditPrimeiroNumero = new QLineEdit(centralWidget);
        lineEditPrimeiroNumero->setObjectName(QStringLiteral("lineEditPrimeiroNumero"));
        lineEditPrimeiroNumero->setGeometry(QRect(170, 30, 113, 20));
        QFont font;
        font.setBold(true);
        font.setWeight(75);
        lineEditPrimeiroNumero->setFont(font);
        lineEditPrimeiroNumero->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));
        lineEditPrimeiroNumero->setAlignment(Qt::AlignCenter);
        lineEditSegundoNumero = new QLineEdit(centralWidget);
        lineEditSegundoNumero->setObjectName(QStringLiteral("lineEditSegundoNumero"));
        lineEditSegundoNumero->setGeometry(QRect(290, 30, 121, 20));
        lineEditSegundoNumero->setFont(font);
        lineEditSegundoNumero->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));
        lineEditSegundoNumero->setAlignment(Qt::AlignCenter);
        label = new QLabel(centralWidget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(200, 10, 61, 16));
        QFont font1;
        font1.setFamily(QStringLiteral("AR CENA"));
        font1.setPointSize(11);
        font1.setBold(false);
        font1.setItalic(false);
        font1.setWeight(50);
        label->setFont(font1);
        label->setStyleSheet(QStringLiteral("font: 11pt \"AR CENA\";"));
        label_2 = new QLabel(centralWidget);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(320, 10, 61, 16));
        label_2->setFont(font1);
        label_2->setStyleSheet(QStringLiteral("font: 11pt \"AR CENA\";"));
        tableWidgetResultados = new QTableWidget(centralWidget);
        if (tableWidgetResultados->columnCount() < 2)
            tableWidgetResultados->setColumnCount(2);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        tableWidgetResultados->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        tableWidgetResultados->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        if (tableWidgetResultados->rowCount() < 11)
            tableWidgetResultados->setRowCount(11);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        tableWidgetResultados->setVerticalHeaderItem(0, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        tableWidgetResultados->setVerticalHeaderItem(1, __qtablewidgetitem3);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        tableWidgetResultados->setVerticalHeaderItem(2, __qtablewidgetitem4);
        QTableWidgetItem *__qtablewidgetitem5 = new QTableWidgetItem();
        tableWidgetResultados->setVerticalHeaderItem(3, __qtablewidgetitem5);
        QTableWidgetItem *__qtablewidgetitem6 = new QTableWidgetItem();
        tableWidgetResultados->setVerticalHeaderItem(4, __qtablewidgetitem6);
        QTableWidgetItem *__qtablewidgetitem7 = new QTableWidgetItem();
        tableWidgetResultados->setVerticalHeaderItem(5, __qtablewidgetitem7);
        QTableWidgetItem *__qtablewidgetitem8 = new QTableWidgetItem();
        tableWidgetResultados->setVerticalHeaderItem(6, __qtablewidgetitem8);
        QTableWidgetItem *__qtablewidgetitem9 = new QTableWidgetItem();
        tableWidgetResultados->setVerticalHeaderItem(7, __qtablewidgetitem9);
        QTableWidgetItem *__qtablewidgetitem10 = new QTableWidgetItem();
        tableWidgetResultados->setVerticalHeaderItem(8, __qtablewidgetitem10);
        QTableWidgetItem *__qtablewidgetitem11 = new QTableWidgetItem();
        tableWidgetResultados->setVerticalHeaderItem(9, __qtablewidgetitem11);
        QTableWidgetItem *__qtablewidgetitem12 = new QTableWidgetItem();
        tableWidgetResultados->setVerticalHeaderItem(10, __qtablewidgetitem12);
        QTableWidgetItem *__qtablewidgetitem13 = new QTableWidgetItem();
        __qtablewidgetitem13->setTextAlignment(Qt::AlignCenter);
        tableWidgetResultados->setItem(0, 0, __qtablewidgetitem13);
        tableWidgetResultados->setObjectName(QStringLiteral("tableWidgetResultados"));
        tableWidgetResultados->setGeometry(QRect(20, 60, 391, 361));
        tableWidgetResultados->setStyleSheet(QLatin1String("background-color: rgb(255, 255, 255);\n"
"font: 11pt \"AR CENA\";"));
        tableWidgetResultados->horizontalHeader()->setDefaultSectionSize(120);
        tableWidgetResultados->horizontalHeader()->setStretchLastSection(true);
        tableWidgetResultados->verticalHeader()->setCascadingSectionResizes(false);
        tableWidgetResultados->verticalHeader()->setProperty("showSortIndicator", QVariant(false));
        tableWidgetResultados->verticalHeader()->setStretchLastSection(true);
        pushButton = new QPushButton(centralWidget);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(94, 30, 61, 22));
        pushButton->setStyleSheet(QLatin1String("background-color: rgb(190, 190, 190);\n"
"font: 11pt \"AR CENA\";"));
        MainWindow->setCentralWidget(centralWidget);
        tableWidgetResultados->raise();
        pushButtonExibir->raise();
        lineEditPrimeiroNumero->raise();
        lineEditSegundoNumero->raise();
        label->raise();
        label_2->raise();
        pushButton->raise();
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
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "Numeros Naturais", 0));
        pushButtonExibir->setText(QApplication::translate("MainWindow", "EXIBIR", 0));
        label->setText(QApplication::translate("MainWindow", "1\302\260 Numero", 0));
        label_2->setText(QApplication::translate("MainWindow", "2\302\260 Numero", 0));
        QTableWidgetItem *___qtablewidgetitem = tableWidgetResultados->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("MainWindow", "1\302\260 Numero", 0));
        QTableWidgetItem *___qtablewidgetitem1 = tableWidgetResultados->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QApplication::translate("MainWindow", "2\302\260 Numero", 0));
        QTableWidgetItem *___qtablewidgetitem2 = tableWidgetResultados->verticalHeaderItem(0);
        ___qtablewidgetitem2->setText(QApplication::translate("MainWindow", "Fatorial", 0));
        QTableWidgetItem *___qtablewidgetitem3 = tableWidgetResultados->verticalHeaderItem(1);
        ___qtablewidgetitem3->setText(QApplication::translate("MainWindow", "N\303\272mero Perfeito", 0));
        QTableWidgetItem *___qtablewidgetitem4 = tableWidgetResultados->verticalHeaderItem(2);
        ___qtablewidgetitem4->setText(QApplication::translate("MainWindow", "Capicua", 0));
        QTableWidgetItem *___qtablewidgetitem5 = tableWidgetResultados->verticalHeaderItem(3);
        ___qtablewidgetitem5->setText(QApplication::translate("MainWindow", "Quadrado Perfeito", 0));
        QTableWidgetItem *___qtablewidgetitem6 = tableWidgetResultados->verticalHeaderItem(4);
        ___qtablewidgetitem6->setText(QApplication::translate("MainWindow", "N\303\272mero Primo", 0));
        QTableWidgetItem *___qtablewidgetitem7 = tableWidgetResultados->verticalHeaderItem(5);
        ___qtablewidgetitem7->setText(QApplication::translate("MainWindow", "Base 10 para 16", 0));
        QTableWidgetItem *___qtablewidgetitem8 = tableWidgetResultados->verticalHeaderItem(6);
        ___qtablewidgetitem8->setText(QApplication::translate("MainWindow", "Base 10 para 8 ", 0));
        QTableWidgetItem *___qtablewidgetitem9 = tableWidgetResultados->verticalHeaderItem(7);
        ___qtablewidgetitem9->setText(QApplication::translate("MainWindow", "Base 10 para 2", 0));
        QTableWidgetItem *___qtablewidgetitem10 = tableWidgetResultados->verticalHeaderItem(8);
        ___qtablewidgetitem10->setText(QApplication::translate("MainWindow", "M\303\241ximo Divisor Comum", 0));
        QTableWidgetItem *___qtablewidgetitem11 = tableWidgetResultados->verticalHeaderItem(9);
        ___qtablewidgetitem11->setText(QApplication::translate("MainWindow", "M\303\255nimo M\303\272ltiplo Comum", 0));
        QTableWidgetItem *___qtablewidgetitem12 = tableWidgetResultados->verticalHeaderItem(10);
        ___qtablewidgetitem12->setText(QApplication::translate("MainWindow", "Primos entre si", 0));

        const bool __sortingEnabled = tableWidgetResultados->isSortingEnabled();
        tableWidgetResultados->setSortingEnabled(false);
        tableWidgetResultados->setSortingEnabled(__sortingEnabled);

        pushButton->setText(QApplication::translate("MainWindow", "LIMPAR", 0));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
