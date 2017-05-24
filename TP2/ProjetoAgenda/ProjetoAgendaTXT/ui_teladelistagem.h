/********************************************************************************
** Form generated from reading UI file 'teladelistagem.ui'
**
** Created by: Qt User Interface Compiler version 5.4.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TELADELISTAGEM_H
#define UI_TELADELISTAGEM_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableWidget>

QT_BEGIN_NAMESPACE

class Ui_TelaDeListagem
{
public:
    QTableWidget *tableWidgetListagem;
    QPushButton *pushButtonListar;
    QPushButton *pushButtonVoltar;

    void setupUi(QDialog *TelaDeListagem)
    {
        if (TelaDeListagem->objectName().isEmpty())
            TelaDeListagem->setObjectName(QStringLiteral("TelaDeListagem"));
        TelaDeListagem->resize(706, 300);
        tableWidgetListagem = new QTableWidget(TelaDeListagem);
        if (tableWidgetListagem->columnCount() < 4)
            tableWidgetListagem->setColumnCount(4);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        __qtablewidgetitem->setTextAlignment(Qt::AlignHCenter|Qt::AlignVCenter|Qt::AlignCenter);
        tableWidgetListagem->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        tableWidgetListagem->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        tableWidgetListagem->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        tableWidgetListagem->setHorizontalHeaderItem(3, __qtablewidgetitem3);
        tableWidgetListagem->setObjectName(QStringLiteral("tableWidgetListagem"));
        tableWidgetListagem->setGeometry(QRect(20, 80, 671, 192));
        pushButtonListar = new QPushButton(TelaDeListagem);
        pushButtonListar->setObjectName(QStringLiteral("pushButtonListar"));
        pushButtonListar->setGeometry(QRect(20, 50, 115, 32));
        pushButtonVoltar = new QPushButton(TelaDeListagem);
        pushButtonVoltar->setObjectName(QStringLiteral("pushButtonVoltar"));
        pushButtonVoltar->setGeometry(QRect(580, 50, 115, 32));

        retranslateUi(TelaDeListagem);

        QMetaObject::connectSlotsByName(TelaDeListagem);
    } // setupUi

    void retranslateUi(QDialog *TelaDeListagem)
    {
        TelaDeListagem->setWindowTitle(QApplication::translate("TelaDeListagem", "Dialog", 0));
        QTableWidgetItem *___qtablewidgetitem = tableWidgetListagem->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("TelaDeListagem", "NOME", 0));
        QTableWidgetItem *___qtablewidgetitem1 = tableWidgetListagem->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QApplication::translate("TelaDeListagem", "ENDERECO", 0));
        QTableWidgetItem *___qtablewidgetitem2 = tableWidgetListagem->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QApplication::translate("TelaDeListagem", "TELEFONE", 0));
        QTableWidgetItem *___qtablewidgetitem3 = tableWidgetListagem->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QApplication::translate("TelaDeListagem", "EMAIL", 0));
        pushButtonListar->setText(QApplication::translate("TelaDeListagem", "LISTAR", 0));
        pushButtonVoltar->setText(QApplication::translate("TelaDeListagem", "VOLTAR", 0));
    } // retranslateUi

};

namespace Ui {
    class TelaDeListagem: public Ui_TelaDeListagem {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TELADELISTAGEM_H
