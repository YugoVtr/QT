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
#include <QtWidgets/QFrame>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
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
    QPushButton *pushButton_Enviar;
    QLabel *label_FilaDeImpressao;
    QTextEdit *textEdit_ParaImprimir;
    QLabel *label_Impressora_1;
    QLabel *label_Impressora_2;
    QFrame *line;
    QFrame *line_2;
    QLabel *label_FilaDeImpressao_2;
    QLabel *label_MostrarFila;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(734, 372);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        pushButton_Enviar = new QPushButton(centralWidget);
        pushButton_Enviar->setObjectName(QStringLiteral("pushButton_Enviar"));
        pushButton_Enviar->setGeometry(QRect(620, 270, 100, 50));
        QFont font;
        font.setPointSize(15);
        font.setBold(true);
        font.setWeight(75);
        pushButton_Enviar->setFont(font);
        label_FilaDeImpressao = new QLabel(centralWidget);
        label_FilaDeImpressao->setObjectName(QStringLiteral("label_FilaDeImpressao"));
        label_FilaDeImpressao->setGeometry(QRect(280, 100, 431, 31));
        QFont font1;
        font1.setPointSize(10);
        font1.setBold(true);
        font1.setWeight(75);
        label_FilaDeImpressao->setFont(font1);
        textEdit_ParaImprimir = new QTextEdit(centralWidget);
        textEdit_ParaImprimir->setObjectName(QStringLiteral("textEdit_ParaImprimir"));
        textEdit_ParaImprimir->setGeometry(QRect(10, 200, 711, 60));
        label_Impressora_1 = new QLabel(centralWidget);
        label_Impressora_1->setObjectName(QStringLiteral("label_Impressora_1"));
        label_Impressora_1->setGeometry(QRect(10, 10, 711, 30));
        label_Impressora_1->setStyleSheet(QLatin1String("background-color: rgb(255, 255, 255);\n"
"border-color: rgb(0, 0, 0);"));
        label_Impressora_1->setTextFormat(Qt::AutoText);
        label_Impressora_1->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        label_Impressora_1->setMargin(5);
        label_Impressora_1->setIndent(1);
        label_Impressora_2 = new QLabel(centralWidget);
        label_Impressora_2->setObjectName(QStringLiteral("label_Impressora_2"));
        label_Impressora_2->setGeometry(QRect(10, 50, 711, 30));
        label_Impressora_2->setStyleSheet(QLatin1String("background-color: rgb(255, 255, 255);\n"
"border-color: rgb(0, 0, 0);"));
        label_Impressora_2->setTextFormat(Qt::AutoText);
        label_Impressora_2->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        label_Impressora_2->setMargin(5);
        label_Impressora_2->setIndent(1);
        line = new QFrame(centralWidget);
        line->setObjectName(QStringLiteral("line"));
        line->setGeometry(QRect(10, 90, 711, 16));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);
        line_2 = new QFrame(centralWidget);
        line_2->setObjectName(QStringLiteral("line_2"));
        line_2->setGeometry(QRect(10, 180, 711, 16));
        line_2->setFrameShape(QFrame::HLine);
        line_2->setFrameShadow(QFrame::Sunken);
        label_FilaDeImpressao_2 = new QLabel(centralWidget);
        label_FilaDeImpressao_2->setObjectName(QStringLiteral("label_FilaDeImpressao_2"));
        label_FilaDeImpressao_2->setGeometry(QRect(10, 100, 241, 31));
        label_FilaDeImpressao_2->setFont(font1);
        label_MostrarFila = new QLabel(centralWidget);
        label_MostrarFila->setObjectName(QStringLiteral("label_MostrarFila"));
        label_MostrarFila->setGeometry(QRect(10, 140, 700, 16));
        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 734, 21));
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
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "Impressora", 0));
        pushButton_Enviar->setText(QApplication::translate("MainWindow", "ENVIAR", 0));
        label_FilaDeImpressao->setText(QApplication::translate("MainWindow", " VAZIO", 0));
        label_Impressora_1->setText(QString());
        label_Impressora_2->setText(QString());
        label_FilaDeImpressao_2->setText(QApplication::translate("MainWindow", "TEXTO NA FILA PARA IMPRIMIR -->", 0));
        label_MostrarFila->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
