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
#include <QtWidgets/QGridLayout>
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
    QLabel *label_Saida;
    QPushButton *pushButton_Limpar;
    QFrame *line;
    QFrame *line_2;
    QWidget *widget;
    QGridLayout *gridLayout;
    QLabel *label;
    QLabel *label_2;
    QLineEdit *lineEdit_Informacao;
    QLineEdit *lineEdit_Posicao;
    QPushButton *pushButton_InserirNoInicio;
    QPushButton *pushButton_RemoverNoInicio;
    QPushButton *pushButton_InserirNoFinal;
    QPushButton *pushButton_RemoverNoFinal;
    QPushButton *pushButton_InserirNaPosicao;
    QPushButton *pushButton_RemoverNaPosicao;
    QPushButton *pushButton_AcessarInformacao;
    QPushButton *pushButton_RemoverInformacao;
    QPushButton *pushButton_Tamanho;
    QPushButton *pushButton_Vazio;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(300, 350);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        label_Saida = new QLabel(centralWidget);
        label_Saida->setObjectName(QStringLiteral("label_Saida"));
        label_Saida->setGeometry(QRect(10, 225, 276, 21));
        label_Saida->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        pushButton_Limpar = new QPushButton(centralWidget);
        pushButton_Limpar->setObjectName(QStringLiteral("pushButton_Limpar"));
        pushButton_Limpar->setGeometry(QRect(11, 270, 133, 23));
        line = new QFrame(centralWidget);
        line->setObjectName(QStringLiteral("line"));
        line->setGeometry(QRect(10, 210, 271, 16));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);
        line_2 = new QFrame(centralWidget);
        line_2->setObjectName(QStringLiteral("line_2"));
        line_2->setGeometry(QRect(10, 250, 271, 16));
        line_2->setFrameShape(QFrame::HLine);
        line_2->setFrameShadow(QFrame::Sunken);
        widget = new QWidget(centralWidget);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setGeometry(QRect(10, 10, 274, 192));
        gridLayout = new QGridLayout(widget);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(widget);
        label->setObjectName(QStringLiteral("label"));
        QFont font;
        font.setPointSize(12);
        font.setBold(true);
        font.setWeight(75);
        label->setFont(font);
        label->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label, 0, 0, 1, 1);

        label_2 = new QLabel(widget);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setFont(font);
        label_2->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label_2, 0, 1, 1, 1);

        lineEdit_Informacao = new QLineEdit(widget);
        lineEdit_Informacao->setObjectName(QStringLiteral("lineEdit_Informacao"));
        lineEdit_Informacao->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(lineEdit_Informacao, 1, 0, 1, 1);

        lineEdit_Posicao = new QLineEdit(widget);
        lineEdit_Posicao->setObjectName(QStringLiteral("lineEdit_Posicao"));
        lineEdit_Posicao->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(lineEdit_Posicao, 1, 1, 1, 1);

        pushButton_InserirNoInicio = new QPushButton(widget);
        pushButton_InserirNoInicio->setObjectName(QStringLiteral("pushButton_InserirNoInicio"));

        gridLayout->addWidget(pushButton_InserirNoInicio, 2, 0, 1, 1);

        pushButton_RemoverNoInicio = new QPushButton(widget);
        pushButton_RemoverNoInicio->setObjectName(QStringLiteral("pushButton_RemoverNoInicio"));

        gridLayout->addWidget(pushButton_RemoverNoInicio, 2, 1, 1, 1);

        pushButton_InserirNoFinal = new QPushButton(widget);
        pushButton_InserirNoFinal->setObjectName(QStringLiteral("pushButton_InserirNoFinal"));

        gridLayout->addWidget(pushButton_InserirNoFinal, 3, 0, 1, 1);

        pushButton_RemoverNoFinal = new QPushButton(widget);
        pushButton_RemoverNoFinal->setObjectName(QStringLiteral("pushButton_RemoverNoFinal"));

        gridLayout->addWidget(pushButton_RemoverNoFinal, 3, 1, 1, 1);

        pushButton_InserirNaPosicao = new QPushButton(widget);
        pushButton_InserirNaPosicao->setObjectName(QStringLiteral("pushButton_InserirNaPosicao"));

        gridLayout->addWidget(pushButton_InserirNaPosicao, 4, 0, 1, 1);

        pushButton_RemoverNaPosicao = new QPushButton(widget);
        pushButton_RemoverNaPosicao->setObjectName(QStringLiteral("pushButton_RemoverNaPosicao"));

        gridLayout->addWidget(pushButton_RemoverNaPosicao, 4, 1, 1, 1);

        pushButton_AcessarInformacao = new QPushButton(widget);
        pushButton_AcessarInformacao->setObjectName(QStringLiteral("pushButton_AcessarInformacao"));

        gridLayout->addWidget(pushButton_AcessarInformacao, 5, 0, 1, 1);

        pushButton_RemoverInformacao = new QPushButton(widget);
        pushButton_RemoverInformacao->setObjectName(QStringLiteral("pushButton_RemoverInformacao"));

        gridLayout->addWidget(pushButton_RemoverInformacao, 5, 1, 1, 1);

        pushButton_Tamanho = new QPushButton(widget);
        pushButton_Tamanho->setObjectName(QStringLiteral("pushButton_Tamanho"));

        gridLayout->addWidget(pushButton_Tamanho, 6, 0, 1, 1);

        pushButton_Vazio = new QPushButton(widget);
        pushButton_Vazio->setObjectName(QStringLiteral("pushButton_Vazio"));

        gridLayout->addWidget(pushButton_Vazio, 6, 1, 1, 1);

        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 300, 21));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);
        QWidget::setTabOrder(lineEdit_Informacao, lineEdit_Posicao);
        QWidget::setTabOrder(lineEdit_Posicao, pushButton_InserirNoInicio);
        QWidget::setTabOrder(pushButton_InserirNoInicio, pushButton_RemoverNoInicio);
        QWidget::setTabOrder(pushButton_RemoverNoInicio, pushButton_InserirNoFinal);
        QWidget::setTabOrder(pushButton_InserirNoFinal, pushButton_RemoverNoFinal);
        QWidget::setTabOrder(pushButton_RemoverNoFinal, pushButton_InserirNaPosicao);
        QWidget::setTabOrder(pushButton_InserirNaPosicao, pushButton_RemoverNaPosicao);
        QWidget::setTabOrder(pushButton_RemoverNaPosicao, pushButton_AcessarInformacao);
        QWidget::setTabOrder(pushButton_AcessarInformacao, pushButton_RemoverInformacao);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "LISTA", 0));
        label_Saida->setText(QApplication::translate("MainWindow", "EMPTY", 0));
        pushButton_Limpar->setText(QApplication::translate("MainWindow", "Limpar", 0));
        label->setText(QApplication::translate("MainWindow", "Informa\303\247\303\243o", 0));
        label_2->setText(QApplication::translate("MainWindow", "Posi\303\247\303\243o", 0));
        pushButton_InserirNoInicio->setText(QApplication::translate("MainWindow", "Inserir no Inicio", 0));
        pushButton_RemoverNoInicio->setText(QApplication::translate("MainWindow", "Remover no Inicio", 0));
        pushButton_InserirNoFinal->setText(QApplication::translate("MainWindow", "Inserir no Final", 0));
        pushButton_RemoverNoFinal->setText(QApplication::translate("MainWindow", "Remover no Final", 0));
        pushButton_InserirNaPosicao->setText(QApplication::translate("MainWindow", "Inserir na Posicao", 0));
        pushButton_RemoverNaPosicao->setText(QApplication::translate("MainWindow", "Remover na Posicao", 0));
        pushButton_AcessarInformacao->setText(QApplication::translate("MainWindow", "Acessar Informa\303\247\303\243o ", 0));
        pushButton_RemoverInformacao->setText(QApplication::translate("MainWindow", "Remover informa\303\247\303\243o", 0));
        pushButton_Tamanho->setText(QApplication::translate("MainWindow", "Tamanho", 0));
        pushButton_Vazio->setText(QApplication::translate("MainWindow", "Vazio ?", 0));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
