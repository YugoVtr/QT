/********************************************************************************
** Form generated from reading UI file 'ListarUsuario.ui'
**
** Created by: Qt User Interface Compiler version 5.6.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LISTARUSUARIO_H
#define UI_LISTARUSUARIO_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ListarUsuario
{
public:
    QAction *action_Novo_Cadastro;
    QAction *actionLimpar;
    QAction *actionSair;
    QAction *action_Consultar_Cadastros;
    QWidget *centralWidget;
    QGridLayout *gridLayout;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QPushButton *pushButton_AlterarCadastro;
    QTableWidget *tableWidget_Usuarios;
    QStatusBar *statusBar;
    QMenuBar *menuBar;
    QMenu *menuAbrir;

    void setupUi(QMainWindow *ListarUsuario)
    {
        if (ListarUsuario->objectName().isEmpty())
            ListarUsuario->setObjectName(QStringLiteral("ListarUsuario"));
        ListarUsuario->resize(1149, 456);
        QIcon icon;
        icon.addFile(QStringLiteral(":/Arquivos/Imagens/listar.png"), QSize(), QIcon::Normal, QIcon::Off);
        ListarUsuario->setWindowIcon(icon);
        action_Novo_Cadastro = new QAction(ListarUsuario);
        action_Novo_Cadastro->setObjectName(QStringLiteral("action_Novo_Cadastro"));
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/Arquivos/Imagens/usuario.png"), QSize(), QIcon::Normal, QIcon::Off);
        action_Novo_Cadastro->setIcon(icon1);
        actionLimpar = new QAction(ListarUsuario);
        actionLimpar->setObjectName(QStringLiteral("actionLimpar"));
        QIcon icon2;
        icon2.addFile(QStringLiteral(":/Arquivos/Imagens/limpar.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionLimpar->setIcon(icon2);
        actionSair = new QAction(ListarUsuario);
        actionSair->setObjectName(QStringLiteral("actionSair"));
        QIcon icon3;
        icon3.addFile(QStringLiteral(":/Arquivos/Imagens/sair.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionSair->setIcon(icon3);
        action_Consultar_Cadastros = new QAction(ListarUsuario);
        action_Consultar_Cadastros->setObjectName(QStringLiteral("action_Consultar_Cadastros"));
        QIcon icon4;
        icon4.addFile(QStringLiteral(":/Arquivos/Imagens/buscar.png"), QSize(), QIcon::Normal, QIcon::Off);
        action_Consultar_Cadastros->setIcon(icon4);
        centralWidget = new QWidget(ListarUsuario);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        gridLayout = new QGridLayout(centralWidget);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalSpacer = new QSpacerItem(278, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        pushButton_AlterarCadastro = new QPushButton(centralWidget);
        pushButton_AlterarCadastro->setObjectName(QStringLiteral("pushButton_AlterarCadastro"));

        horizontalLayout->addWidget(pushButton_AlterarCadastro);


        gridLayout->addLayout(horizontalLayout, 1, 0, 1, 1);

        tableWidget_Usuarios = new QTableWidget(centralWidget);
        if (tableWidget_Usuarios->columnCount() < 7)
            tableWidget_Usuarios->setColumnCount(7);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        tableWidget_Usuarios->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        tableWidget_Usuarios->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        tableWidget_Usuarios->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        tableWidget_Usuarios->setHorizontalHeaderItem(3, __qtablewidgetitem3);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        tableWidget_Usuarios->setHorizontalHeaderItem(4, __qtablewidgetitem4);
        QTableWidgetItem *__qtablewidgetitem5 = new QTableWidgetItem();
        tableWidget_Usuarios->setHorizontalHeaderItem(5, __qtablewidgetitem5);
        QTableWidgetItem *__qtablewidgetitem6 = new QTableWidgetItem();
        tableWidget_Usuarios->setHorizontalHeaderItem(6, __qtablewidgetitem6);
        tableWidget_Usuarios->setObjectName(QStringLiteral("tableWidget_Usuarios"));
        tableWidget_Usuarios->setEditTriggers(QAbstractItemView::NoEditTriggers);
        tableWidget_Usuarios->setIconSize(QSize(20, 20));
        tableWidget_Usuarios->setTextElideMode(Qt::ElideMiddle);
        tableWidget_Usuarios->horizontalHeader()->setDefaultSectionSize(110);
        tableWidget_Usuarios->horizontalHeader()->setStretchLastSection(true);
        tableWidget_Usuarios->verticalHeader()->setVisible(false);
        tableWidget_Usuarios->verticalHeader()->setDefaultSectionSize(50);

        gridLayout->addWidget(tableWidget_Usuarios, 0, 0, 1, 1);

        ListarUsuario->setCentralWidget(centralWidget);
        statusBar = new QStatusBar(ListarUsuario);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        ListarUsuario->setStatusBar(statusBar);
        menuBar = new QMenuBar(ListarUsuario);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 1149, 20));
        menuAbrir = new QMenu(menuBar);
        menuAbrir->setObjectName(QStringLiteral("menuAbrir"));
        ListarUsuario->setMenuBar(menuBar);
        QWidget::setTabOrder(tableWidget_Usuarios, pushButton_AlterarCadastro);

        menuBar->addAction(menuAbrir->menuAction());
        menuAbrir->addAction(action_Consultar_Cadastros);
        menuAbrir->addAction(action_Novo_Cadastro);
        menuAbrir->addAction(actionLimpar);
        menuAbrir->addAction(actionSair);
        menuAbrir->addSeparator();

        retranslateUi(ListarUsuario);

        QMetaObject::connectSlotsByName(ListarUsuario);
    } // setupUi

    void retranslateUi(QMainWindow *ListarUsuario)
    {
        ListarUsuario->setWindowTitle(QApplication::translate("ListarUsuario", "Listar Usuario", 0));
        action_Novo_Cadastro->setText(QApplication::translate("ListarUsuario", "&Novo Cadastro", 0));
        action_Novo_Cadastro->setShortcut(QApplication::translate("ListarUsuario", "Space", 0));
        actionLimpar->setText(QApplication::translate("ListarUsuario", "&Limpar", 0));
        actionLimpar->setShortcut(QApplication::translate("ListarUsuario", "Backspace", 0));
        actionSair->setText(QApplication::translate("ListarUsuario", "&Sair", 0));
        actionSair->setShortcut(QApplication::translate("ListarUsuario", "Esc", 0));
        action_Consultar_Cadastros->setText(QApplication::translate("ListarUsuario", "&Listar Cadastros", 0));
        action_Consultar_Cadastros->setShortcut(QApplication::translate("ListarUsuario", "Ctrl+S", 0));
        pushButton_AlterarCadastro->setText(QApplication::translate("ListarUsuario", "Alterar Cadastro", 0));
        QTableWidgetItem *___qtablewidgetitem = tableWidget_Usuarios->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("ListarUsuario", "CPF", 0));
        QTableWidgetItem *___qtablewidgetitem1 = tableWidget_Usuarios->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QApplication::translate("ListarUsuario", "Nome", 0));
        QTableWidgetItem *___qtablewidgetitem2 = tableWidget_Usuarios->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QApplication::translate("ListarUsuario", "Cliente", 0));
        QTableWidgetItem *___qtablewidgetitem3 = tableWidget_Usuarios->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QApplication::translate("ListarUsuario", "Email", 0));
        QTableWidgetItem *___qtablewidgetitem4 = tableWidget_Usuarios->horizontalHeaderItem(4);
        ___qtablewidgetitem4->setText(QApplication::translate("ListarUsuario", "Telefone", 0));
        QTableWidgetItem *___qtablewidgetitem5 = tableWidget_Usuarios->horizontalHeaderItem(5);
        ___qtablewidgetitem5->setText(QApplication::translate("ListarUsuario", "Devedor ?", 0));
        QTableWidgetItem *___qtablewidgetitem6 = tableWidget_Usuarios->horizontalHeaderItem(6);
        ___qtablewidgetitem6->setText(QApplication::translate("ListarUsuario", "Endereco", 0));
        menuAbrir->setTitle(QApplication::translate("ListarUsuario", "&Menu", 0));
    } // retranslateUi

};

namespace Ui {
    class ListarUsuario: public Ui_ListarUsuario {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LISTARUSUARIO_H
