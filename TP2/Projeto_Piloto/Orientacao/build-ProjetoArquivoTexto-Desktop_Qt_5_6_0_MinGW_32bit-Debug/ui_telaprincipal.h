/********************************************************************************
** Form generated from reading UI file 'telaprincipal.ui'
**
** Created by: Qt User Interface Compiler version 5.6.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TELAPRINCIPAL_H
#define UI_TELAPRINCIPAL_H

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

class Ui_TelaPrincipal
{
public:
    QWidget *centralWidget;
    QTextEdit *textEditSaida;
    QPushButton *pushButtonGeral;
    QPushButton *pushButtonLimpar;
    QWidget *widget;
    QHBoxLayout *horizontalLayout;
    QPushButton *pushButtonNome;
    QPushButton *pushButtonMatricula;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *TelaPrincipal)
    {
        if (TelaPrincipal->objectName().isEmpty())
            TelaPrincipal->setObjectName(QStringLiteral("TelaPrincipal"));
        TelaPrincipal->resize(647, 444);
        centralWidget = new QWidget(TelaPrincipal);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        textEditSaida = new QTextEdit(centralWidget);
        textEditSaida->setObjectName(QStringLiteral("textEditSaida"));
        textEditSaida->setGeometry(QRect(10, 70, 621, 271));
        pushButtonGeral = new QPushButton(centralWidget);
        pushButtonGeral->setObjectName(QStringLiteral("pushButtonGeral"));
        pushButtonGeral->setGeometry(QRect(40, 20, 113, 32));
        pushButtonLimpar = new QPushButton(centralWidget);
        pushButtonLimpar->setObjectName(QStringLiteral("pushButtonLimpar"));
        pushButtonLimpar->setGeometry(QRect(400, 20, 113, 32));
        widget = new QWidget(centralWidget);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setGeometry(QRect(170, 20, 199, 32));
        horizontalLayout = new QHBoxLayout(widget);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        pushButtonNome = new QPushButton(widget);
        pushButtonNome->setObjectName(QStringLiteral("pushButtonNome"));

        horizontalLayout->addWidget(pushButtonNome);

        pushButtonMatricula = new QPushButton(widget);
        pushButtonMatricula->setObjectName(QStringLiteral("pushButtonMatricula"));

        horizontalLayout->addWidget(pushButtonMatricula);

        TelaPrincipal->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(TelaPrincipal);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 647, 22));
        TelaPrincipal->setMenuBar(menuBar);
        mainToolBar = new QToolBar(TelaPrincipal);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        TelaPrincipal->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(TelaPrincipal);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        TelaPrincipal->setStatusBar(statusBar);

        retranslateUi(TelaPrincipal);

        QMetaObject::connectSlotsByName(TelaPrincipal);
    } // setupUi

    void retranslateUi(QMainWindow *TelaPrincipal)
    {
        TelaPrincipal->setWindowTitle(QApplication::translate("TelaPrincipal", "TelaPrincipal", 0));
        pushButtonGeral->setText(QApplication::translate("TelaPrincipal", "GERAL", 0));
        pushButtonLimpar->setText(QApplication::translate("TelaPrincipal", "LIMPAR", 0));
        pushButtonNome->setText(QApplication::translate("TelaPrincipal", "NOME", 0));
        pushButtonMatricula->setText(QApplication::translate("TelaPrincipal", "MATRICULA", 0));
    } // retranslateUi

};

namespace Ui {
    class TelaPrincipal: public Ui_TelaPrincipal {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TELAPRINCIPAL_H
