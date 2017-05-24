/********************************************************************************
** Form generated from reading UI file 'CadastroEndereco.ui'
**
** Created by: Qt User Interface Compiler version 5.6.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CADASTROENDERECO_H
#define UI_CADASTROENDERECO_H

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

QT_BEGIN_NAMESPACE

class Ui_CadastroEndereco
{
public:
    QGridLayout *gridLayout_4;
    QGridLayout *gridLayout;
    QLabel *logradouroLabel;
    QLineEdit *logradouroLineEdit;
    QGridLayout *gridLayout_2;
    QLabel *bairroLabel;
    QLabel *uFLabel;
    QLineEdit *bairroLineEdit;
    QComboBox *uFComboBox;
    QGridLayout *gridLayout_3;
    QLabel *cidadeLabel;
    QLabel *cEPLabel;
    QLabel *numeroLabel;
    QLineEdit *cidadeLineEdit;
    QLineEdit *cEPLineEdit;
    QLineEdit *numeroLineEdit;
    QSpacerItem *horizontalSpacer;
    QHBoxLayout *horizontalLayout;
    QPushButton *pushButton_Cancel;
    QPushButton *pushButton_OK;

    void setupUi(QDialog *CadastroEndereco)
    {
        if (CadastroEndereco->objectName().isEmpty())
            CadastroEndereco->setObjectName(QStringLiteral("CadastroEndereco"));
        CadastroEndereco->resize(374, 226);
        QIcon icon;
        icon.addFile(QStringLiteral(":/Arquivos/Imagens/endereco.png"), QSize(), QIcon::Normal, QIcon::Off);
        CadastroEndereco->setWindowIcon(icon);
        gridLayout_4 = new QGridLayout(CadastroEndereco);
        gridLayout_4->setObjectName(QStringLiteral("gridLayout_4"));
        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        logradouroLabel = new QLabel(CadastroEndereco);
        logradouroLabel->setObjectName(QStringLiteral("logradouroLabel"));
        QFont font;
        font.setPointSize(8);
        font.setBold(true);
        font.setUnderline(false);
        font.setWeight(75);
        logradouroLabel->setFont(font);

        gridLayout->addWidget(logradouroLabel, 0, 0, 1, 1);

        logradouroLineEdit = new QLineEdit(CadastroEndereco);
        logradouroLineEdit->setObjectName(QStringLiteral("logradouroLineEdit"));

        gridLayout->addWidget(logradouroLineEdit, 1, 0, 1, 1);


        gridLayout_4->addLayout(gridLayout, 0, 0, 1, 2);

        gridLayout_2 = new QGridLayout();
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        bairroLabel = new QLabel(CadastroEndereco);
        bairroLabel->setObjectName(QStringLiteral("bairroLabel"));
        bairroLabel->setFont(font);

        gridLayout_2->addWidget(bairroLabel, 0, 0, 1, 1);

        uFLabel = new QLabel(CadastroEndereco);
        uFLabel->setObjectName(QStringLiteral("uFLabel"));
        uFLabel->setFont(font);
        uFLabel->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        gridLayout_2->addWidget(uFLabel, 0, 1, 1, 1);

        bairroLineEdit = new QLineEdit(CadastroEndereco);
        bairroLineEdit->setObjectName(QStringLiteral("bairroLineEdit"));

        gridLayout_2->addWidget(bairroLineEdit, 1, 0, 1, 1);

        uFComboBox = new QComboBox(CadastroEndereco);
        uFComboBox->setObjectName(QStringLiteral("uFComboBox"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Maximum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(uFComboBox->sizePolicy().hasHeightForWidth());
        uFComboBox->setSizePolicy(sizePolicy);
        uFComboBox->setMaximumSize(QSize(170, 25));

        gridLayout_2->addWidget(uFComboBox, 1, 1, 1, 1);


        gridLayout_4->addLayout(gridLayout_2, 1, 0, 1, 2);

        gridLayout_3 = new QGridLayout();
        gridLayout_3->setObjectName(QStringLiteral("gridLayout_3"));
        cidadeLabel = new QLabel(CadastroEndereco);
        cidadeLabel->setObjectName(QStringLiteral("cidadeLabel"));
        cidadeLabel->setFont(font);
        cidadeLabel->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        gridLayout_3->addWidget(cidadeLabel, 0, 0, 1, 1);

        cEPLabel = new QLabel(CadastroEndereco);
        cEPLabel->setObjectName(QStringLiteral("cEPLabel"));
        cEPLabel->setFont(font);
        cEPLabel->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        gridLayout_3->addWidget(cEPLabel, 0, 1, 1, 1);

        numeroLabel = new QLabel(CadastroEndereco);
        numeroLabel->setObjectName(QStringLiteral("numeroLabel"));
        numeroLabel->setFont(font);

        gridLayout_3->addWidget(numeroLabel, 0, 2, 1, 1);

        cidadeLineEdit = new QLineEdit(CadastroEndereco);
        cidadeLineEdit->setObjectName(QStringLiteral("cidadeLineEdit"));

        gridLayout_3->addWidget(cidadeLineEdit, 1, 0, 1, 1);

        cEPLineEdit = new QLineEdit(CadastroEndereco);
        cEPLineEdit->setObjectName(QStringLiteral("cEPLineEdit"));

        gridLayout_3->addWidget(cEPLineEdit, 1, 1, 1, 1);

        numeroLineEdit = new QLineEdit(CadastroEndereco);
        numeroLineEdit->setObjectName(QStringLiteral("numeroLineEdit"));
        numeroLineEdit->setMaximumSize(QSize(70, 25));

        gridLayout_3->addWidget(numeroLineEdit, 1, 2, 1, 1);


        gridLayout_4->addLayout(gridLayout_3, 2, 0, 1, 2);

        horizontalSpacer = new QSpacerItem(169, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_4->addItem(horizontalSpacer, 3, 0, 1, 1);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        pushButton_Cancel = new QPushButton(CadastroEndereco);
        pushButton_Cancel->setObjectName(QStringLiteral("pushButton_Cancel"));
        QFont font1;
        font1.setBold(true);
        font1.setWeight(75);
        pushButton_Cancel->setFont(font1);
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/Arquivos/Imagens/cancel.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_Cancel->setIcon(icon1);

        horizontalLayout->addWidget(pushButton_Cancel);

        pushButton_OK = new QPushButton(CadastroEndereco);
        pushButton_OK->setObjectName(QStringLiteral("pushButton_OK"));
        pushButton_OK->setFont(font1);
        QIcon icon2;
        icon2.addFile(QStringLiteral(":/Arquivos/Imagens/OK.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_OK->setIcon(icon2);

        horizontalLayout->addWidget(pushButton_OK);


        gridLayout_4->addLayout(horizontalLayout, 3, 1, 1, 1);

        QWidget::setTabOrder(logradouroLineEdit, bairroLineEdit);
        QWidget::setTabOrder(bairroLineEdit, uFComboBox);
        QWidget::setTabOrder(uFComboBox, cidadeLineEdit);
        QWidget::setTabOrder(cidadeLineEdit, cEPLineEdit);
        QWidget::setTabOrder(cEPLineEdit, numeroLineEdit);
        QWidget::setTabOrder(numeroLineEdit, pushButton_OK);
        QWidget::setTabOrder(pushButton_OK, pushButton_Cancel);

        retranslateUi(CadastroEndereco);

        QMetaObject::connectSlotsByName(CadastroEndereco);
    } // setupUi

    void retranslateUi(QDialog *CadastroEndereco)
    {
        CadastroEndereco->setWindowTitle(QApplication::translate("CadastroEndereco", "Endereco", 0));
        logradouroLabel->setText(QApplication::translate("CadastroEndereco", "Logradouro :", 0));
        bairroLabel->setText(QApplication::translate("CadastroEndereco", "Bairro :", 0));
        uFLabel->setText(QApplication::translate("CadastroEndereco", "UF :", 0));
        bairroLineEdit->setText(QString());
        uFComboBox->clear();
        uFComboBox->insertItems(0, QStringList()
         << QApplication::translate("CadastroEndereco", "Acre", 0)
         << QApplication::translate("CadastroEndereco", "Alagoas", 0)
         << QApplication::translate("CadastroEndereco", "Amap\303\241", 0)
         << QApplication::translate("CadastroEndereco", "Amazonas", 0)
         << QApplication::translate("CadastroEndereco", "Bahia", 0)
         << QApplication::translate("CadastroEndereco", "Cear\303\241", 0)
         << QApplication::translate("CadastroEndereco", "Distrito Federal", 0)
         << QApplication::translate("CadastroEndereco", "Esp\303\255rito Santo", 0)
         << QApplication::translate("CadastroEndereco", "Goi\303\241s", 0)
         << QApplication::translate("CadastroEndereco", "Maranh\303\243o", 0)
         << QApplication::translate("CadastroEndereco", "Mato Grosso", 0)
         << QApplication::translate("CadastroEndereco", "Mato Grosso do Sul", 0)
         << QApplication::translate("CadastroEndereco", "Minas Gerais", 0)
         << QApplication::translate("CadastroEndereco", "Par\303\241", 0)
         << QApplication::translate("CadastroEndereco", "Para\303\255ba", 0)
         << QApplication::translate("CadastroEndereco", "Paran\303\241", 0)
         << QApplication::translate("CadastroEndereco", "Pernambuco", 0)
         << QApplication::translate("CadastroEndereco", "Piau\303\255", 0)
         << QApplication::translate("CadastroEndereco", "Rio de Janeiro", 0)
         << QApplication::translate("CadastroEndereco", "Rio Grande do Norte", 0)
         << QApplication::translate("CadastroEndereco", "Rio Grande do Sul", 0)
         << QApplication::translate("CadastroEndereco", "Rond\303\264nia", 0)
         << QApplication::translate("CadastroEndereco", "Roraima", 0)
         << QApplication::translate("CadastroEndereco", "Santa Catarina", 0)
         << QApplication::translate("CadastroEndereco", "S\303\243o Paulo", 0)
         << QApplication::translate("CadastroEndereco", "Sergipe", 0)
         << QApplication::translate("CadastroEndereco", "Tocantins", 0)
        );
        cidadeLabel->setText(QApplication::translate("CadastroEndereco", "Cidade :", 0));
        cEPLabel->setText(QApplication::translate("CadastroEndereco", "CEP :", 0));
        numeroLabel->setText(QApplication::translate("CadastroEndereco", "N\302\260 :", 0));
        cidadeLineEdit->setText(QString());
        cEPLineEdit->setText(QString());
        numeroLineEdit->setText(QString());
        pushButton_Cancel->setText(QApplication::translate("CadastroEndereco", "Cancel", 0));
        pushButton_OK->setText(QApplication::translate("CadastroEndereco", "OK", 0));
    } // retranslateUi

};

namespace Ui {
    class CadastroEndereco: public Ui_CadastroEndereco {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CADASTROENDERECO_H
