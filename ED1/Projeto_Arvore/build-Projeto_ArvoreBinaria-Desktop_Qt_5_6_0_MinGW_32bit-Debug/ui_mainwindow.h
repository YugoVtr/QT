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
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionABRIR;
    QAction *actionLIMPAR;
    QAction *actionFECHAR;
    QWidget *centralWidget;
    QGridLayout *gridLayout;
    QPushButton *pushButton_Decrescente;
    QPushButton *pushButton_Crescente;
    QPushButton *pushButton_EmOrdem;
    QPushButton *pushButton_PosOrdem;
    QTableWidget *tableWidget_MostrarArvore;
    QPushButton *pushButton_PreOrdem;
    QLineEdit *lineEdit_Buscar;
    QLabel *label;
    QSpacerItem *verticalSpacer;
    QMenuBar *menuBar;
    QMenu *menuCARREGAR;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(525, 462);
        QIcon icon;
        icon.addFile(QStringLiteral(":/Arquivos/noz.png"), QSize(), QIcon::Normal, QIcon::Off);
        MainWindow->setWindowIcon(icon);
        actionABRIR = new QAction(MainWindow);
        actionABRIR->setObjectName(QStringLiteral("actionABRIR"));
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/Arquivos/abrir.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionABRIR->setIcon(icon1);
        actionLIMPAR = new QAction(MainWindow);
        actionLIMPAR->setObjectName(QStringLiteral("actionLIMPAR"));
        QIcon icon2;
        icon2.addFile(QStringLiteral(":/Arquivos/limpar.png"), QSize(), QIcon::Normal, QIcon::On);
        actionLIMPAR->setIcon(icon2);
        actionFECHAR = new QAction(MainWindow);
        actionFECHAR->setObjectName(QStringLiteral("actionFECHAR"));
        QIcon icon3;
        icon3.addFile(QStringLiteral(":/Arquivos/fechar.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionFECHAR->setIcon(icon3);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        gridLayout = new QGridLayout(centralWidget);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        pushButton_Decrescente = new QPushButton(centralWidget);
        pushButton_Decrescente->setObjectName(QStringLiteral("pushButton_Decrescente"));

        gridLayout->addWidget(pushButton_Decrescente, 1, 1, 1, 1);

        pushButton_Crescente = new QPushButton(centralWidget);
        pushButton_Crescente->setObjectName(QStringLiteral("pushButton_Crescente"));

        gridLayout->addWidget(pushButton_Crescente, 0, 1, 1, 1);

        pushButton_EmOrdem = new QPushButton(centralWidget);
        pushButton_EmOrdem->setObjectName(QStringLiteral("pushButton_EmOrdem"));

        gridLayout->addWidget(pushButton_EmOrdem, 5, 1, 1, 1);

        pushButton_PosOrdem = new QPushButton(centralWidget);
        pushButton_PosOrdem->setObjectName(QStringLiteral("pushButton_PosOrdem"));

        gridLayout->addWidget(pushButton_PosOrdem, 6, 1, 1, 1);

        tableWidget_MostrarArvore = new QTableWidget(centralWidget);
        if (tableWidget_MostrarArvore->columnCount() < 2)
            tableWidget_MostrarArvore->setColumnCount(2);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        tableWidget_MostrarArvore->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        tableWidget_MostrarArvore->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        tableWidget_MostrarArvore->setObjectName(QStringLiteral("tableWidget_MostrarArvore"));
        tableWidget_MostrarArvore->setStyleSheet(QLatin1String("border-image: url(:/Arquivos/PUC15.png);\n"
"background-color: rgb(255, 255, 255);\n"
"gridline-color: rgb(185, 185, 185);\n"
"border-color: rgb(185, 185, 185);"));
        tableWidget_MostrarArvore->setEditTriggers(QAbstractItemView::NoEditTriggers);
        tableWidget_MostrarArvore->setDragEnabled(true);
        tableWidget_MostrarArvore->horizontalHeader()->setCascadingSectionResizes(false);
        tableWidget_MostrarArvore->horizontalHeader()->setDefaultSectionSize(250);
        tableWidget_MostrarArvore->horizontalHeader()->setStretchLastSection(true);
        tableWidget_MostrarArvore->verticalHeader()->setVisible(false);
        tableWidget_MostrarArvore->verticalHeader()->setCascadingSectionResizes(false);
        tableWidget_MostrarArvore->verticalHeader()->setProperty("showSortIndicator", QVariant(false));
        tableWidget_MostrarArvore->verticalHeader()->setStretchLastSection(false);

        gridLayout->addWidget(tableWidget_MostrarArvore, 0, 0, 10, 1);

        pushButton_PreOrdem = new QPushButton(centralWidget);
        pushButton_PreOrdem->setObjectName(QStringLiteral("pushButton_PreOrdem"));

        gridLayout->addWidget(pushButton_PreOrdem, 4, 1, 1, 1);

        lineEdit_Buscar = new QLineEdit(centralWidget);
        lineEdit_Buscar->setObjectName(QStringLiteral("lineEdit_Buscar"));
        lineEdit_Buscar->setMaximumSize(QSize(80, 16777215));

        gridLayout->addWidget(lineEdit_Buscar, 9, 1, 1, 1);

        label = new QLabel(centralWidget);
        label->setObjectName(QStringLiteral("label"));
        label->setMaximumSize(QSize(16777215, 21));
        QFont font;
        font.setBold(true);
        font.setWeight(75);
        label->setFont(font);

        gridLayout->addWidget(label, 8, 1, 1, 1);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer, 7, 1, 1, 1);

        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 525, 20));
        menuCARREGAR = new QMenu(menuBar);
        menuCARREGAR->setObjectName(QStringLiteral("menuCARREGAR"));
        MainWindow->setMenuBar(menuBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        menuBar->addAction(menuCARREGAR->menuAction());
        menuCARREGAR->addAction(actionABRIR);
        menuCARREGAR->addAction(actionLIMPAR);
        menuCARREGAR->addAction(actionFECHAR);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "Arvre somos Nozes", 0));
        actionABRIR->setText(QApplication::translate("MainWindow", "&ABRIR", 0));
        actionABRIR->setShortcut(QApplication::translate("MainWindow", "Ctrl+A", 0));
        actionLIMPAR->setText(QApplication::translate("MainWindow", "&LIMPAR", 0));
        actionLIMPAR->setShortcut(QApplication::translate("MainWindow", "Ctrl+L", 0));
        actionFECHAR->setText(QApplication::translate("MainWindow", "&FECHAR", 0));
        actionFECHAR->setShortcut(QApplication::translate("MainWindow", "Ctrl+F", 0));
        pushButton_Decrescente->setText(QApplication::translate("MainWindow", "Decrescente", 0));
        pushButton_Crescente->setText(QApplication::translate("MainWindow", "Crescente", 0));
        pushButton_EmOrdem->setText(QApplication::translate("MainWindow", "em Ordem", 0));
        pushButton_PosOrdem->setText(QApplication::translate("MainWindow", "pos Ordem", 0));
        QTableWidgetItem *___qtablewidgetitem = tableWidget_MostrarArvore->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("MainWindow", "NOME", 0));
        QTableWidgetItem *___qtablewidgetitem1 = tableWidget_MostrarArvore->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QApplication::translate("MainWindow", "REPETI\303\207\303\203O", 0));
        pushButton_PreOrdem->setText(QApplication::translate("MainWindow", "pre Ordem", 0));
        label->setText(QApplication::translate("MainWindow", "Buscar :", 0));
        menuCARREGAR->setTitle(QApplication::translate("MainWindow", "&MENU", 0));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
