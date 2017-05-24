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
    QTextEdit *textEdit_Pino_1;
    QTextEdit *textEdit_Pino_2;
    QTextEdit *textEdit_Pino_3;
    QFrame *line;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *label_6;
    QLineEdit *lineEdit_Pino_De_Origem;
    QLineEdit *lineEdit_Pino_De_Destino;
    QPushButton *pushButton_Trocar_Disco;
    QPushButton *pushButton_Restart;
    QLabel *label_7;
    QLabel *label_quantidade_De_Jogadas;
    QLabel *label;
    QLineEdit *lineEdit_QuantidadeDeDiscos;
    QPushButton *pushButton_CriarJogo;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(257, 336);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        textEdit_Pino_1 = new QTextEdit(centralWidget);
        textEdit_Pino_1->setObjectName(QStringLiteral("textEdit_Pino_1"));
        textEdit_Pino_1->setGeometry(QRect(20, 60, 21, 100));
        textEdit_Pino_2 = new QTextEdit(centralWidget);
        textEdit_Pino_2->setObjectName(QStringLiteral("textEdit_Pino_2"));
        textEdit_Pino_2->setGeometry(QRect(110, 60, 21, 100));
        textEdit_Pino_3 = new QTextEdit(centralWidget);
        textEdit_Pino_3->setObjectName(QStringLiteral("textEdit_Pino_3"));
        textEdit_Pino_3->setGeometry(QRect(200, 60, 21, 100));
        line = new QFrame(centralWidget);
        line->setObjectName(QStringLiteral("line"));
        line->setGeometry(QRect(10, 200, 231, 20));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);
        label_2 = new QLabel(centralWidget);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(20, 40, 31, 16));
        label_3 = new QLabel(centralWidget);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(110, 40, 31, 16));
        label_4 = new QLabel(centralWidget);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(200, 40, 41, 16));
        label_5 = new QLabel(centralWidget);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(10, 220, 81, 23));
        label_6 = new QLabel(centralWidget);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(10, 250, 81, 23));
        lineEdit_Pino_De_Origem = new QLineEdit(centralWidget);
        lineEdit_Pino_De_Origem->setObjectName(QStringLiteral("lineEdit_Pino_De_Origem"));
        lineEdit_Pino_De_Origem->setGeometry(QRect(90, 220, 41, 23));
        lineEdit_Pino_De_Destino = new QLineEdit(centralWidget);
        lineEdit_Pino_De_Destino->setObjectName(QStringLiteral("lineEdit_Pino_De_Destino"));
        lineEdit_Pino_De_Destino->setGeometry(QRect(90, 250, 41, 23));
        pushButton_Trocar_Disco = new QPushButton(centralWidget);
        pushButton_Trocar_Disco->setObjectName(QStringLiteral("pushButton_Trocar_Disco"));
        pushButton_Trocar_Disco->setGeometry(QRect(140, 220, 101, 23));
        pushButton_Restart = new QPushButton(centralWidget);
        pushButton_Restart->setObjectName(QStringLiteral("pushButton_Restart"));
        pushButton_Restart->setGeometry(QRect(140, 250, 101, 23));
        label_7 = new QLabel(centralWidget);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setGeometry(QRect(10, 180, 47, 13));
        label_quantidade_De_Jogadas = new QLabel(centralWidget);
        label_quantidade_De_Jogadas->setObjectName(QStringLiteral("label_quantidade_De_Jogadas"));
        label_quantidade_De_Jogadas->setGeometry(QRect(70, 180, 47, 13));
        label = new QLabel(centralWidget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(16, 10, 85, 23));
        QFont font;
        font.setBold(false);
        font.setUnderline(true);
        font.setWeight(50);
        label->setFont(font);
        lineEdit_QuantidadeDeDiscos = new QLineEdit(centralWidget);
        lineEdit_QuantidadeDeDiscos->setObjectName(QStringLiteral("lineEdit_QuantidadeDeDiscos"));
        lineEdit_QuantidadeDeDiscos->setGeometry(QRect(107, 12, 57, 23));
        pushButton_CriarJogo = new QPushButton(centralWidget);
        pushButton_CriarJogo->setObjectName(QStringLiteral("pushButton_CriarJogo"));
        pushButton_CriarJogo->setGeometry(QRect(170, 11, 61, 23));
        MainWindow->setCentralWidget(centralWidget);
        textEdit_Pino_1->raise();
        textEdit_Pino_2->raise();
        textEdit_Pino_3->raise();
        line->raise();
        label_2->raise();
        label_3->raise();
        label_4->raise();
        label_5->raise();
        label_6->raise();
        lineEdit_Pino_De_Origem->raise();
        lineEdit_Pino_De_Destino->raise();
        pushButton_Trocar_Disco->raise();
        pushButton_Restart->raise();
        label_7->raise();
        label_quantidade_De_Jogadas->raise();
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 257, 21));
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
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "TorreDeHanoi", 0));
        label_2->setText(QApplication::translate("MainWindow", "Pino 1", 0));
        label_3->setText(QApplication::translate("MainWindow", "Pino 2", 0));
        label_4->setText(QApplication::translate("MainWindow", "Pino 3", 0));
        label_5->setText(QApplication::translate("MainWindow", "Pino de Origem", 0));
        label_6->setText(QApplication::translate("MainWindow", "Pino de Destino", 0));
        pushButton_Trocar_Disco->setText(QApplication::translate("MainWindow", "Trocar", 0));
        pushButton_Restart->setText(QApplication::translate("MainWindow", "Restart", 0));
        label_7->setText(QApplication::translate("MainWindow", "Jogadas:", 0));
        label_quantidade_De_Jogadas->setText(QApplication::translate("MainWindow", "0", 0));
        label->setText(QApplication::translate("MainWindow", "Numero de Discos", 0));
        pushButton_CriarJogo->setText(QApplication::translate("MainWindow", "Iniciar", 0));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
