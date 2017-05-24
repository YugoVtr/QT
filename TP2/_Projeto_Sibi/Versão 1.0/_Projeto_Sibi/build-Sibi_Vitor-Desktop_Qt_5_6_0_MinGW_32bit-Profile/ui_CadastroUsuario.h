/********************************************************************************
** Form generated from reading UI file 'CadastroUsuario.ui'
**
** Created by: Qt User Interface Compiler version 5.6.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CADASTROUSUARIO_H
#define UI_CADASTROUSUARIO_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include "CadastroTelefone.h"

QT_BEGIN_NAMESPACE

class Ui_CadastroUsuario
{
public:
    QGridLayout *gridLayout_5;
    CadastroTelefone *widget;
    QSpacerItem *horizontalSpacer_3;
    QGridLayout *gridLayout;
    QLabel *cPFLabel;
    QLineEdit *cPFLineEdit;
    QGridLayout *gridLayout_2;
    QLabel *nomeLabel;
    QLineEdit *nomeLineEdit;
    QGridLayout *gridLayout_3;
    QLabel *emailLabel;
    QLineEdit *emailLineEdit;
    QHBoxLayout *horizontalLayout_2;
    QLabel *telefoneLabel;
    QPushButton *pushButton_AdicionarTelefone;
    QSpacerItem *horizontalSpacer_2;
    QLabel *enderecoLabel;
    QPushButton *pushButton_AdicionarEndereco;
    QGridLayout *gridLayout_4;
    QLabel *clienteLabel;
    QComboBox *clienteComboBox;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QPushButton *pushButton_Cancelar;
    QPushButton *pushButton_Cadastrar;

    void setupUi(QDialog *CadastroUsuario)
    {
        if (CadastroUsuario->objectName().isEmpty())
            CadastroUsuario->setObjectName(QStringLiteral("CadastroUsuario"));
        CadastroUsuario->resize(260, 262);
        QIcon icon;
        icon.addFile(QStringLiteral(":/Arquivos/Imagens/usuario.png"), QSize(), QIcon::Normal, QIcon::Off);
        CadastroUsuario->setWindowIcon(icon);
        gridLayout_5 = new QGridLayout(CadastroUsuario);
        gridLayout_5->setSpacing(6);
        gridLayout_5->setContentsMargins(11, 11, 11, 11);
        gridLayout_5->setObjectName(QStringLiteral("gridLayout_5"));
#include "QList"
#include "Telefone.h"
        QList<Vitor::Telefone> nada;
        widget = new CadastroTelefone(CadastroUsuario,333333,nada);
        widget->setObjectName(QStringLiteral("widget"));

        gridLayout_5->addWidget(widget, 5, 0, 1, 1);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_5->addItem(horizontalSpacer_3, 5, 1, 1, 1);

        gridLayout = new QGridLayout();
        gridLayout->setSpacing(6);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        cPFLabel = new QLabel(CadastroUsuario);
        cPFLabel->setObjectName(QStringLiteral("cPFLabel"));
        QFont font;
        font.setPointSize(9);
        font.setBold(true);
        font.setWeight(75);
        cPFLabel->setFont(font);

        gridLayout->addWidget(cPFLabel, 0, 0, 1, 1);

        cPFLineEdit = new QLineEdit(CadastroUsuario);
        cPFLineEdit->setObjectName(QStringLiteral("cPFLineEdit"));

        gridLayout->addWidget(cPFLineEdit, 1, 0, 1, 1);


        gridLayout_5->addLayout(gridLayout, 0, 0, 1, 2);

        gridLayout_2 = new QGridLayout();
        gridLayout_2->setSpacing(6);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        nomeLabel = new QLabel(CadastroUsuario);
        nomeLabel->setObjectName(QStringLiteral("nomeLabel"));
        nomeLabel->setFont(font);

        gridLayout_2->addWidget(nomeLabel, 0, 0, 1, 1);

        nomeLineEdit = new QLineEdit(CadastroUsuario);
        nomeLineEdit->setObjectName(QStringLiteral("nomeLineEdit"));

        gridLayout_2->addWidget(nomeLineEdit, 1, 0, 1, 1);


        gridLayout_5->addLayout(gridLayout_2, 1, 0, 1, 2);

        gridLayout_3 = new QGridLayout();
        gridLayout_3->setSpacing(6);
        gridLayout_3->setObjectName(QStringLiteral("gridLayout_3"));
        emailLabel = new QLabel(CadastroUsuario);
        emailLabel->setObjectName(QStringLiteral("emailLabel"));
        emailLabel->setFont(font);

        gridLayout_3->addWidget(emailLabel, 0, 0, 1, 1);

        emailLineEdit = new QLineEdit(CadastroUsuario);
        emailLineEdit->setObjectName(QStringLiteral("emailLineEdit"));

        gridLayout_3->addWidget(emailLineEdit, 1, 0, 1, 1);


        gridLayout_5->addLayout(gridLayout_3, 2, 0, 1, 2);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        telefoneLabel = new QLabel(CadastroUsuario);
        telefoneLabel->setObjectName(QStringLiteral("telefoneLabel"));
        telefoneLabel->setMinimumSize(QSize(0, 25));
        QFont font1;
        font1.setBold(true);
        font1.setWeight(75);
        telefoneLabel->setFont(font1);

        horizontalLayout_2->addWidget(telefoneLabel);

        pushButton_AdicionarTelefone = new QPushButton(CadastroUsuario);
        pushButton_AdicionarTelefone->setObjectName(QStringLiteral("pushButton_AdicionarTelefone"));
        pushButton_AdicionarTelefone->setMinimumSize(QSize(0, 25));
        pushButton_AdicionarTelefone->setLayoutDirection(Qt::LeftToRight);
        pushButton_AdicionarTelefone->setStyleSheet(QLatin1String("border: 0px solid grey;\n"
"text-align: left; "));
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/Arquivos/Imagens/adicionar.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_AdicionarTelefone->setIcon(icon1);

        horizontalLayout_2->addWidget(pushButton_AdicionarTelefone);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_2);

        enderecoLabel = new QLabel(CadastroUsuario);
        enderecoLabel->setObjectName(QStringLiteral("enderecoLabel"));
        enderecoLabel->setMinimumSize(QSize(0, 25));
        enderecoLabel->setFont(font1);

        horizontalLayout_2->addWidget(enderecoLabel);

        pushButton_AdicionarEndereco = new QPushButton(CadastroUsuario);
        pushButton_AdicionarEndereco->setObjectName(QStringLiteral("pushButton_AdicionarEndereco"));
        pushButton_AdicionarEndereco->setMinimumSize(QSize(0, 25));
        pushButton_AdicionarEndereco->setLayoutDirection(Qt::LeftToRight);
        pushButton_AdicionarEndereco->setStyleSheet(QLatin1String("border: 0px solid grey;\n"
"text-align: left; "));
        pushButton_AdicionarEndereco->setIcon(icon1);

        horizontalLayout_2->addWidget(pushButton_AdicionarEndereco);


        gridLayout_5->addLayout(horizontalLayout_2, 4, 0, 1, 2);

        gridLayout_4 = new QGridLayout();
        gridLayout_4->setSpacing(6);
        gridLayout_4->setObjectName(QStringLiteral("gridLayout_4"));
        clienteLabel = new QLabel(CadastroUsuario);
        clienteLabel->setObjectName(QStringLiteral("clienteLabel"));
        clienteLabel->setFont(font1);

        gridLayout_4->addWidget(clienteLabel, 0, 0, 1, 1);

        clienteComboBox = new QComboBox(CadastroUsuario);
        clienteComboBox->setObjectName(QStringLiteral("clienteComboBox"));
        clienteComboBox->setMinimumSize(QSize(0, 0));

        gridLayout_4->addWidget(clienteComboBox, 0, 1, 1, 1);


        gridLayout_5->addLayout(gridLayout_4, 6, 0, 1, 2);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalSpacer = new QSpacerItem(58, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        pushButton_Cancelar = new QPushButton(CadastroUsuario);
        pushButton_Cancelar->setObjectName(QStringLiteral("pushButton_Cancelar"));
        pushButton_Cancelar->setFont(font1);
        QIcon icon2;
        icon2.addFile(QStringLiteral(":/Arquivos/Imagens/cancel.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_Cancelar->setIcon(icon2);

        horizontalLayout->addWidget(pushButton_Cancelar);

        pushButton_Cadastrar = new QPushButton(CadastroUsuario);
        pushButton_Cadastrar->setObjectName(QStringLiteral("pushButton_Cadastrar"));
        pushButton_Cadastrar->setFont(font1);
        QIcon icon3;
        icon3.addFile(QStringLiteral(":/Arquivos/Imagens/OK.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_Cadastrar->setIcon(icon3);

        horizontalLayout->addWidget(pushButton_Cadastrar);


        gridLayout_5->addLayout(horizontalLayout, 7, 0, 1, 2);

        QWidget::setTabOrder(clienteComboBox, cPFLineEdit);
        QWidget::setTabOrder(cPFLineEdit, nomeLineEdit);
        QWidget::setTabOrder(nomeLineEdit, emailLineEdit);
        QWidget::setTabOrder(emailLineEdit, pushButton_AdicionarTelefone);
        QWidget::setTabOrder(pushButton_AdicionarTelefone, pushButton_AdicionarEndereco);
        QWidget::setTabOrder(pushButton_AdicionarEndereco, pushButton_Cadastrar);
        QWidget::setTabOrder(pushButton_Cadastrar, pushButton_Cancelar);

        retranslateUi(CadastroUsuario);

        QMetaObject::connectSlotsByName(CadastroUsuario);
    } // setupUi

    void retranslateUi(QDialog *CadastroUsuario)
    {
        CadastroUsuario->setWindowTitle(QApplication::translate("CadastroUsuario", "Cadastro", 0));
        cPFLabel->setText(QApplication::translate("CadastroUsuario", "CPF  :", 0));
        nomeLabel->setText(QApplication::translate("CadastroUsuario", "Nome :", 0));
        emailLabel->setText(QApplication::translate("CadastroUsuario", "Email :", 0));
        telefoneLabel->setText(QApplication::translate("CadastroUsuario", "Telefone", 0));
        pushButton_AdicionarTelefone->setText(QString());
        enderecoLabel->setText(QApplication::translate("CadastroUsuario", "Endereco", 0));
        pushButton_AdicionarEndereco->setText(QString());
        clienteLabel->setText(QApplication::translate("CadastroUsuario", "Cliente :", 0));
        clienteComboBox->clear();
        clienteComboBox->insertItems(0, QStringList()
         << QApplication::translate("CadastroUsuario", "1  -  Bibliotecario", 0)
         << QApplication::translate("CadastroUsuario", "2  -  Professor", 0)
         << QApplication::translate("CadastroUsuario", "3  -  Aluno", 0)
        );
        pushButton_Cancelar->setText(QApplication::translate("CadastroUsuario", "Cancel", 0));
        pushButton_Cadastrar->setText(QApplication::translate("CadastroUsuario", "Salvar", 0));
    } // retranslateUi

};

namespace Ui {
    class CadastroUsuario: public Ui_CadastroUsuario {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CADASTROUSUARIO_H
