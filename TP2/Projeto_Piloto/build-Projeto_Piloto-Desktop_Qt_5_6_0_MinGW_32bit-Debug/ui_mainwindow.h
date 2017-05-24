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
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QWidget *gridLayoutWidget;
    QGridLayout *gridLayout_Main;
    QComboBox *comboBox_TipoDeOrdenacao;
    QPushButton *pushButton_Ordenar;
    QPushButton *pushButton_Limpar;
    QPushButton *pushButton_CarregarArquivo;
    QSpacerItem *horizontalSpacer;
    QTableWidget *tableWidget_Mostrar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(595, 592);
        QIcon icon;
        icon.addFile(QStringLiteral("../incon_Main.png"), QSize(), QIcon::Normal, QIcon::Off);
        MainWindow->setWindowIcon(icon);
        MainWindow->setStyleSheet(QStringLiteral("background-color: rgb(175, 175, 175);"));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        gridLayoutWidget = new QWidget(centralWidget);
        gridLayoutWidget->setObjectName(QStringLiteral("gridLayoutWidget"));
        gridLayoutWidget->setGeometry(QRect(10, 10, 571, 541));
        gridLayout_Main = new QGridLayout(gridLayoutWidget);
        gridLayout_Main->setSpacing(8);
        gridLayout_Main->setContentsMargins(11, 11, 11, 11);
        gridLayout_Main->setObjectName(QStringLiteral("gridLayout_Main"));
        gridLayout_Main->setSizeConstraint(QLayout::SetDefaultConstraint);
        gridLayout_Main->setContentsMargins(0, 0, 0, 0);
        comboBox_TipoDeOrdenacao = new QComboBox(gridLayoutWidget);
        comboBox_TipoDeOrdenacao->setObjectName(QStringLiteral("comboBox_TipoDeOrdenacao"));
        comboBox_TipoDeOrdenacao->setStyleSheet(QStringLiteral("color: rgb(0, 0, 0);"));

        gridLayout_Main->addWidget(comboBox_TipoDeOrdenacao, 0, 0, 1, 2);

        pushButton_Ordenar = new QPushButton(gridLayoutWidget);
        pushButton_Ordenar->setObjectName(QStringLiteral("pushButton_Ordenar"));
        pushButton_Ordenar->setStyleSheet(QStringLiteral("color: rgb(0, 0, 0);"));

        gridLayout_Main->addWidget(pushButton_Ordenar, 0, 2, 1, 1);

        pushButton_Limpar = new QPushButton(gridLayoutWidget);
        pushButton_Limpar->setObjectName(QStringLiteral("pushButton_Limpar"));
        pushButton_Limpar->setStyleSheet(QStringLiteral("color: rgb(0, 0, 0);"));

        gridLayout_Main->addWidget(pushButton_Limpar, 0, 3, 1, 1);

        pushButton_CarregarArquivo = new QPushButton(gridLayoutWidget);
        pushButton_CarregarArquivo->setObjectName(QStringLiteral("pushButton_CarregarArquivo"));
        pushButton_CarregarArquivo->setStyleSheet(QLatin1String("color: rgb(0, 0, 0);\n"
"color: rgb(170, 0, 0);"));

        gridLayout_Main->addWidget(pushButton_CarregarArquivo, 0, 5, 1, 1);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_Main->addItem(horizontalSpacer, 0, 4, 1, 1);

        tableWidget_Mostrar = new QTableWidget(gridLayoutWidget);
        if (tableWidget_Mostrar->columnCount() < 7)
            tableWidget_Mostrar->setColumnCount(7);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        tableWidget_Mostrar->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        tableWidget_Mostrar->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        tableWidget_Mostrar->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        tableWidget_Mostrar->setHorizontalHeaderItem(3, __qtablewidgetitem3);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        tableWidget_Mostrar->setHorizontalHeaderItem(4, __qtablewidgetitem4);
        QTableWidgetItem *__qtablewidgetitem5 = new QTableWidgetItem();
        tableWidget_Mostrar->setHorizontalHeaderItem(5, __qtablewidgetitem5);
        QTableWidgetItem *__qtablewidgetitem6 = new QTableWidgetItem();
        tableWidget_Mostrar->setHorizontalHeaderItem(6, __qtablewidgetitem6);
        tableWidget_Mostrar->setObjectName(QStringLiteral("tableWidget_Mostrar"));
        tableWidget_Mostrar->setAutoScroll(true);
        tableWidget_Mostrar->setEditTriggers(QAbstractItemView::NoEditTriggers);
        tableWidget_Mostrar->setShowGrid(true);
        tableWidget_Mostrar->horizontalHeader()->setVisible(false);
        tableWidget_Mostrar->horizontalHeader()->setCascadingSectionResizes(false);
        tableWidget_Mostrar->horizontalHeader()->setProperty("showSortIndicator", QVariant(false));
        tableWidget_Mostrar->horizontalHeader()->setStretchLastSection(true);
        tableWidget_Mostrar->verticalHeader()->setVisible(false);

        gridLayout_Main->addWidget(tableWidget_Mostrar, 1, 0, 1, 6);

        MainWindow->setCentralWidget(centralWidget);
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
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "Lista de Pilotos", 0));
        comboBox_TipoDeOrdenacao->clear();
        comboBox_TipoDeOrdenacao->insertItems(0, QStringList()
         << QApplication::translate("MainWindow", "CODIGO", 0)
         << QApplication::translate("MainWindow", "NOME", 0)
         << QApplication::translate("MainWindow", "EQUIPE e NOME", 0)
         << QApplication::translate("MainWindow", "PAIS e NOME", 0)
         << QApplication::translate("MainWindow", "MOTOR, EQUIPE e NOME", 0)
         << QApplication::translate("MainWindow", "PONTUA\303\207\303\203O", 0)
        );
        pushButton_Ordenar->setText(QApplication::translate("MainWindow", "ORDENAR", 0));
        pushButton_Limpar->setText(QApplication::translate("MainWindow", "LIMPAR", 0));
        pushButton_CarregarArquivo->setText(QApplication::translate("MainWindow", "CARREGAR", 0));
        QTableWidgetItem *___qtablewidgetitem = tableWidget_Mostrar->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("MainWindow", "CODIGO", 0));
        QTableWidgetItem *___qtablewidgetitem1 = tableWidget_Mostrar->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QApplication::translate("MainWindow", "PILOTO", 0));
        QTableWidgetItem *___qtablewidgetitem2 = tableWidget_Mostrar->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QApplication::translate("MainWindow", "PA\303\215S", 0));
        QTableWidgetItem *___qtablewidgetitem3 = tableWidget_Mostrar->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QApplication::translate("MainWindow", "IDADE", 0));
        QTableWidgetItem *___qtablewidgetitem4 = tableWidget_Mostrar->horizontalHeaderItem(4);
        ___qtablewidgetitem4->setText(QApplication::translate("MainWindow", "EQUIPE", 0));
        QTableWidgetItem *___qtablewidgetitem5 = tableWidget_Mostrar->horizontalHeaderItem(5);
        ___qtablewidgetitem5->setText(QApplication::translate("MainWindow", "MOTOR", 0));
        QTableWidgetItem *___qtablewidgetitem6 = tableWidget_Mostrar->horizontalHeaderItem(6);
        ___qtablewidgetitem6->setText(QApplication::translate("MainWindow", "PONTOS", 0));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
