/********************************************************************************
** Form generated from reading UI file 'CadastroTelefone.ui'
**
** Created by: Qt User Interface Compiler version 5.6.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CADASTROTELEFONE_H
#define UI_CADASTROTELEFONE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_CadastroTelefone
{
public:
    QGridLayout *gridLayout_4;
    QGridLayout *gridLayout_2;
    QLabel *dDILabel;
    QLineEdit *dDILineEdit;
    QGridLayout *gridLayout;
    QLabel *dDDLabel;
    QLineEdit *dDDLineEdit;
    QGridLayout *gridLayout_3;
    QLabel *numeroLabel;
    QLineEdit *numeroLineEdit;
    QPushButton *pushButton_Cancel;
    QPushButton *pushButton_OK;

    void setupUi(QWidget *CadastroTelefone)
    {
        if (CadastroTelefone->objectName().isEmpty())
            CadastroTelefone->setObjectName(QStringLiteral("CadastroTelefone"));
        CadastroTelefone->resize(156, 148);
        QIcon icon;
        icon.addFile(QStringLiteral(":/Arquivos/Imagens/telefone.png"), QSize(), QIcon::Normal, QIcon::Off);
        CadastroTelefone->setWindowIcon(icon);
        CadastroTelefone->setLayoutDirection(Qt::LeftToRight);
        gridLayout_4 = new QGridLayout(CadastroTelefone);
        gridLayout_4->setObjectName(QStringLiteral("gridLayout_4"));
        gridLayout_2 = new QGridLayout();
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        dDILabel = new QLabel(CadastroTelefone);
        dDILabel->setObjectName(QStringLiteral("dDILabel"));
        QFont font;
        font.setPointSize(8);
        font.setBold(true);
        font.setUnderline(false);
        font.setWeight(75);
        dDILabel->setFont(font);

        gridLayout_2->addWidget(dDILabel, 0, 0, 1, 1);

        dDILineEdit = new QLineEdit(CadastroTelefone);
        dDILineEdit->setObjectName(QStringLiteral("dDILineEdit"));
        dDILineEdit->setMinimumSize(QSize(50, 0));
        dDILineEdit->setMaximumSize(QSize(50, 25));
        dDILineEdit->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_2->addWidget(dDILineEdit, 1, 0, 1, 1);


        gridLayout_4->addLayout(gridLayout_2, 0, 0, 1, 1);

        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        dDDLabel = new QLabel(CadastroTelefone);
        dDDLabel->setObjectName(QStringLiteral("dDDLabel"));
        dDDLabel->setFont(font);

        gridLayout->addWidget(dDDLabel, 0, 0, 1, 1);

        dDDLineEdit = new QLineEdit(CadastroTelefone);
        dDDLineEdit->setObjectName(QStringLiteral("dDDLineEdit"));
        dDDLineEdit->setMinimumSize(QSize(50, 0));
        dDDLineEdit->setMaximumSize(QSize(50, 25));
        dDDLineEdit->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(dDDLineEdit, 1, 0, 1, 1);


        gridLayout_4->addLayout(gridLayout, 0, 1, 1, 1);

        gridLayout_3 = new QGridLayout();
        gridLayout_3->setObjectName(QStringLiteral("gridLayout_3"));
        numeroLabel = new QLabel(CadastroTelefone);
        numeroLabel->setObjectName(QStringLiteral("numeroLabel"));
        numeroLabel->setFont(font);

        gridLayout_3->addWidget(numeroLabel, 0, 0, 1, 1);

        numeroLineEdit = new QLineEdit(CadastroTelefone);
        numeroLineEdit->setObjectName(QStringLiteral("numeroLineEdit"));
        numeroLineEdit->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_3->addWidget(numeroLineEdit, 1, 0, 1, 1);


        gridLayout_4->addLayout(gridLayout_3, 1, 0, 1, 2);

        pushButton_Cancel = new QPushButton(CadastroTelefone);
        pushButton_Cancel->setObjectName(QStringLiteral("pushButton_Cancel"));
        QFont font1;
        font1.setPointSize(8);
        font1.setBold(true);
        font1.setWeight(75);
        pushButton_Cancel->setFont(font1);
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/Arquivos/Imagens/cancel.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_Cancel->setIcon(icon1);

        gridLayout_4->addWidget(pushButton_Cancel, 2, 0, 1, 1);

        pushButton_OK = new QPushButton(CadastroTelefone);
        pushButton_OK->setObjectName(QStringLiteral("pushButton_OK"));
        pushButton_OK->setFont(font1);
        QIcon icon2;
        icon2.addFile(QStringLiteral(":/Arquivos/Imagens/OK.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_OK->setIcon(icon2);
        pushButton_OK->setCheckable(false);

        gridLayout_4->addWidget(pushButton_OK, 2, 1, 1, 1);

        QWidget::setTabOrder(numeroLineEdit, dDDLineEdit);
        QWidget::setTabOrder(dDDLineEdit, dDILineEdit);
        QWidget::setTabOrder(dDILineEdit, pushButton_OK);
        QWidget::setTabOrder(pushButton_OK, pushButton_Cancel);

        retranslateUi(CadastroTelefone);

        QMetaObject::connectSlotsByName(CadastroTelefone);
    } // setupUi

    void retranslateUi(QWidget *CadastroTelefone)
    {
        CadastroTelefone->setWindowTitle(QApplication::translate("CadastroTelefone", "Fone", 0));
        dDILabel->setText(QApplication::translate("CadastroTelefone", "DDI :", 0));
        dDILineEdit->setText(QApplication::translate("CadastroTelefone", "55", 0));
        dDDLabel->setText(QApplication::translate("CadastroTelefone", "DDD :", 0));
        dDDLineEdit->setText(QApplication::translate("CadastroTelefone", "062", 0));
        numeroLabel->setText(QApplication::translate("CadastroTelefone", "Numero :", 0));
        pushButton_Cancel->setText(QApplication::translate("CadastroTelefone", "Exit", 0));
        pushButton_Cancel->setShortcut(QApplication::translate("CadastroTelefone", "Return", 0));
        pushButton_OK->setText(QApplication::translate("CadastroTelefone", "OK", 0));
        pushButton_OK->setShortcut(QApplication::translate("CadastroTelefone", "Return", 0));
    } // retranslateUi

};

namespace Ui {
    class CadastroTelefone: public Ui_CadastroTelefone {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CADASTROTELEFONE_H
