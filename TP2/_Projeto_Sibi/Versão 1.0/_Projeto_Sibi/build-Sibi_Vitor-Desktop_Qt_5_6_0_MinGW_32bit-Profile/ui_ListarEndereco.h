/********************************************************************************
** Form generated from reading UI file 'ListarEndereco.ui'
**
** Created by: Qt User Interface Compiler version 5.6.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LISTARENDERECO_H
#define UI_LISTARENDERECO_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTableWidget>

QT_BEGIN_NAMESPACE

class Ui_ListarEndereco
{
public:
    QGridLayout *gridLayout;
    QPushButton *pushButton_Fechar;
    QSpacerItem *horizontalSpacer;
    QTableWidget *tableWidget_Enderecos;
    QLabel *label;

    void setupUi(QDialog *ListarEndereco)
    {
        if (ListarEndereco->objectName().isEmpty())
            ListarEndereco->setObjectName(QStringLiteral("ListarEndereco"));
        ListarEndereco->resize(867, 272);
        QIcon icon;
        icon.addFile(QStringLiteral(":/Arquivos/Imagens/endereco.png"), QSize(), QIcon::Normal, QIcon::Off);
        ListarEndereco->setWindowIcon(icon);
        gridLayout = new QGridLayout(ListarEndereco);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        pushButton_Fechar = new QPushButton(ListarEndereco);
        pushButton_Fechar->setObjectName(QStringLiteral("pushButton_Fechar"));
        QFont font;
        font.setBold(true);
        font.setWeight(75);
        pushButton_Fechar->setFont(font);
        QIcon icon1;
        icon1.addFile(QStringLiteral("Arquivos/Imagens/voltar.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_Fechar->setIcon(icon1);

        gridLayout->addWidget(pushButton_Fechar, 2, 1, 1, 1);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer, 2, 0, 1, 1);

        tableWidget_Enderecos = new QTableWidget(ListarEndereco);
        if (tableWidget_Enderecos->columnCount() < 6)
            tableWidget_Enderecos->setColumnCount(6);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        tableWidget_Enderecos->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        tableWidget_Enderecos->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        tableWidget_Enderecos->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        tableWidget_Enderecos->setHorizontalHeaderItem(3, __qtablewidgetitem3);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        tableWidget_Enderecos->setHorizontalHeaderItem(4, __qtablewidgetitem4);
        QTableWidgetItem *__qtablewidgetitem5 = new QTableWidgetItem();
        tableWidget_Enderecos->setHorizontalHeaderItem(5, __qtablewidgetitem5);
        tableWidget_Enderecos->setObjectName(QStringLiteral("tableWidget_Enderecos"));
        tableWidget_Enderecos->setEditTriggers(QAbstractItemView::NoEditTriggers);
        tableWidget_Enderecos->horizontalHeader()->setDefaultSectionSize(150);
        tableWidget_Enderecos->horizontalHeader()->setProperty("showSortIndicator", QVariant(false));
        tableWidget_Enderecos->horizontalHeader()->setStretchLastSection(true);
        tableWidget_Enderecos->verticalHeader()->setVisible(false);

        gridLayout->addWidget(tableWidget_Enderecos, 1, 0, 1, 2);

        label = new QLabel(ListarEndereco);
        label->setObjectName(QStringLiteral("label"));
        QFont font1;
        font1.setPointSize(10);
        font1.setBold(true);
        font1.setWeight(75);
        label->setFont(font1);
        label->setStyleSheet(QStringLiteral("color: rgb(255, 0, 0);"));
        label->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label, 0, 0, 1, 2);


        retranslateUi(ListarEndereco);

        QMetaObject::connectSlotsByName(ListarEndereco);
    } // setupUi

    void retranslateUi(QDialog *ListarEndereco)
    {
        ListarEndereco->setWindowTitle(QApplication::translate("ListarEndereco", "Enderecos", 0));
        pushButton_Fechar->setText(QApplication::translate("ListarEndereco", "Voltar", 0));
        QTableWidgetItem *___qtablewidgetitem = tableWidget_Enderecos->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("ListarEndereco", "Logradouro", 0));
        QTableWidgetItem *___qtablewidgetitem1 = tableWidget_Enderecos->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QApplication::translate("ListarEndereco", "Numero", 0));
        QTableWidgetItem *___qtablewidgetitem2 = tableWidget_Enderecos->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QApplication::translate("ListarEndereco", "Bairro", 0));
        QTableWidgetItem *___qtablewidgetitem3 = tableWidget_Enderecos->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QApplication::translate("ListarEndereco", "CEP", 0));
        QTableWidgetItem *___qtablewidgetitem4 = tableWidget_Enderecos->horizontalHeaderItem(4);
        ___qtablewidgetitem4->setText(QApplication::translate("ListarEndereco", "Cidade", 0));
        QTableWidgetItem *___qtablewidgetitem5 = tableWidget_Enderecos->horizontalHeaderItem(5);
        ___qtablewidgetitem5->setText(QApplication::translate("ListarEndereco", "Estado", 0));
        label->setText(QApplication::translate("ListarEndereco", "N\303\203O H\303\201 ENDERE\303\207OS CADASTRADOS !!!", 0));
    } // retranslateUi

};

namespace Ui {
    class ListarEndereco: public Ui_ListarEndereco {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LISTARENDERECO_H
