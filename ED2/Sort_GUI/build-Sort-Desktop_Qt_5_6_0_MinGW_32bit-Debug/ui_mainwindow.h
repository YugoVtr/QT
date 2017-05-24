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
    QGridLayout *gridLayout;
    QTextEdit *textEdit_Out;
    QLineEdit *lineEdit_Put;
    QLineEdit *lineEdit_Count;
    QPushButton *pushButton_Sort;
    QLabel *label_Count;
    QLabel *label_Put;
    QPushButton *pushButton_Random;
    QComboBox *comboBox_Options;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(400, 307);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        gridLayout = new QGridLayout(centralWidget);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        textEdit_Out = new QTextEdit(centralWidget);
        textEdit_Out->setObjectName(QStringLiteral("textEdit_Out"));
        textEdit_Out->setEnabled(true);
        textEdit_Out->setUndoRedoEnabled(true);

        gridLayout->addWidget(textEdit_Out, 4, 0, 1, 4);

        lineEdit_Put = new QLineEdit(centralWidget);
        lineEdit_Put->setObjectName(QStringLiteral("lineEdit_Put"));

        gridLayout->addWidget(lineEdit_Put, 1, 1, 1, 1);

        lineEdit_Count = new QLineEdit(centralWidget);
        lineEdit_Count->setObjectName(QStringLiteral("lineEdit_Count"));

        gridLayout->addWidget(lineEdit_Count, 0, 1, 1, 1);

        pushButton_Sort = new QPushButton(centralWidget);
        pushButton_Sort->setObjectName(QStringLiteral("pushButton_Sort"));

        gridLayout->addWidget(pushButton_Sort, 1, 2, 1, 2);

        label_Count = new QLabel(centralWidget);
        label_Count->setObjectName(QStringLiteral("label_Count"));

        gridLayout->addWidget(label_Count, 0, 0, 1, 1);

        label_Put = new QLabel(centralWidget);
        label_Put->setObjectName(QStringLiteral("label_Put"));

        gridLayout->addWidget(label_Put, 1, 0, 1, 1);

        pushButton_Random = new QPushButton(centralWidget);
        pushButton_Random->setObjectName(QStringLiteral("pushButton_Random"));

        gridLayout->addWidget(pushButton_Random, 0, 2, 1, 2);

        comboBox_Options = new QComboBox(centralWidget);
        comboBox_Options->setObjectName(QStringLiteral("comboBox_Options"));

        gridLayout->addWidget(comboBox_Options, 3, 1, 1, 3);

        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 400, 20));
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
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "ORDENACAO", 0));
        pushButton_Sort->setText(QApplication::translate("MainWindow", "Sort", 0));
        label_Count->setText(QApplication::translate("MainWindow", "QUANTIDADE QUE  IR\303\201 SER ORDENADA --> ", 0));
        label_Put->setText(QApplication::translate("MainWindow", "INSERIR -->", 0));
        pushButton_Random->setText(QApplication::translate("MainWindow", "Aleatorio", 0));
        comboBox_Options->clear();
        comboBox_Options->insertItems(0, QStringList()
         << QApplication::translate("MainWindow", "Bubble", 0)
         << QApplication::translate("MainWindow", "Heap", 0)
         << QApplication::translate("MainWindow", "Insert", 0)
         << QApplication::translate("MainWindow", "Merge", 0)
         << QApplication::translate("MainWindow", "Quick", 0)
         << QApplication::translate("MainWindow", "Selection", 0)
        );
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
