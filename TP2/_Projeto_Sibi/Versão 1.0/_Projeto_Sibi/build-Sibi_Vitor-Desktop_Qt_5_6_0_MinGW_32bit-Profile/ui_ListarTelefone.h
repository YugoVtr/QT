/********************************************************************************
** Form generated from reading UI file 'ListarTelefone.ui'
**
** Created by: Qt User Interface Compiler version 5.6.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LISTARTELEFONE_H
#define UI_LISTARTELEFONE_H

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

class Ui_ListarTelefone
{
public:
    QGridLayout *gridLayout;
    QPushButton *pushButton_Fechar;
    QSpacerItem *horizontalSpacer;
    QTableWidget *tableWidget_Telefones;
    QLabel *label;

    void setupUi(QDialog *ListarTelefone)
    {
        if (ListarTelefone->objectName().isEmpty())
            ListarTelefone->setObjectName(QStringLiteral("ListarTelefone"));
        ListarTelefone->resize(275, 272);
        QIcon icon;
        icon.addFile(QStringLiteral(":/Arquivos/Imagens/telefone.png"), QSize(), QIcon::Normal, QIcon::Off);
        ListarTelefone->setWindowIcon(icon);
        gridLayout = new QGridLayout(ListarTelefone);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        pushButton_Fechar = new QPushButton(ListarTelefone);
        pushButton_Fechar->setObjectName(QStringLiteral("pushButton_Fechar"));
        QFont font;
        font.setBold(true);
        font.setWeight(75);
        pushButton_Fechar->setFont(font);
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/Arquivos/Imagens/voltar.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_Fechar->setIcon(icon1);

        gridLayout->addWidget(pushButton_Fechar, 2, 1, 1, 1);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer, 2, 0, 1, 1);

        tableWidget_Telefones = new QTableWidget(ListarTelefone);
        if (tableWidget_Telefones->columnCount() < 3)
            tableWidget_Telefones->setColumnCount(3);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        tableWidget_Telefones->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        tableWidget_Telefones->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        tableWidget_Telefones->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        tableWidget_Telefones->setObjectName(QStringLiteral("tableWidget_Telefones"));
        tableWidget_Telefones->setEditTriggers(QAbstractItemView::NoEditTriggers);
        tableWidget_Telefones->horizontalHeader()->setDefaultSectionSize(50);
        tableWidget_Telefones->horizontalHeader()->setProperty("showSortIndicator", QVariant(false));
        tableWidget_Telefones->horizontalHeader()->setStretchLastSection(true);
        tableWidget_Telefones->verticalHeader()->setVisible(false);

        gridLayout->addWidget(tableWidget_Telefones, 1, 0, 1, 2);

        label = new QLabel(ListarTelefone);
        label->setObjectName(QStringLiteral("label"));
        QFont font1;
        font1.setPointSize(10);
        font1.setBold(true);
        font1.setWeight(75);
        label->setFont(font1);
        label->setStyleSheet(QStringLiteral("color: rgb(255, 0, 0);"));
        label->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label, 0, 0, 1, 2);


        retranslateUi(ListarTelefone);

        QMetaObject::connectSlotsByName(ListarTelefone);
    } // setupUi

    void retranslateUi(QDialog *ListarTelefone)
    {
        ListarTelefone->setWindowTitle(QApplication::translate("ListarTelefone", "Telefones", 0));
        pushButton_Fechar->setText(QApplication::translate("ListarTelefone", "Voltar", 0));
        QTableWidgetItem *___qtablewidgetitem = tableWidget_Telefones->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("ListarTelefone", "DDI", 0));
        QTableWidgetItem *___qtablewidgetitem1 = tableWidget_Telefones->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QApplication::translate("ListarTelefone", "DDD", 0));
        QTableWidgetItem *___qtablewidgetitem2 = tableWidget_Telefones->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QApplication::translate("ListarTelefone", "Telefone", 0));
        label->setText(QApplication::translate("ListarTelefone", "N\303\203O H\303\201 TELEFONES CADASTRADOS !!!", 0));
    } // retranslateUi

};

namespace Ui {
    class ListarTelefone: public Ui_ListarTelefone {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LISTARTELEFONE_H
