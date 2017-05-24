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
    QWidget *layoutWidget_3;
    QGridLayout *gridLayout_3;
    QPushButton *pushButton_CriarComTamanho;
    QLineEdit *lineEdit_Tamanho;
    QPushButton *pushButton_CriarComDefalt;
    QPushButton *pushButton_RemoverTodosElementos;
    QWidget *layoutWidget_4;
    QGridLayout *gridLayout_4;
    QLabel *label_Elemento_Substituir;
    QLineEdit *lineEdit_ElementoParaSubstituir;
    QPushButton *pushButton_SubstituirElemento;
    QLineEdit *lineEdit_PosicaoParaSubstituir;
    QLabel *label_Posicao_Substituir;
    QLabel *label_SubstituirElemento;
    QWidget *layoutWidget_2;
    QGridLayout *gridLayout_2;
    QPushButton *pushButton_BuscarElemento;
    QPushButton *pushButton_QuantidadeDeElementos;
    QLineEdit *lineEdit_PosicaoParaObterElemento;
    QPushButton *pushButton_ObterElemento;
    QPushButton *pushButton_eVazia;
    QLabel *label_Posicao_Obter;
    QLabel *label_Elemento_Buscar;
    QLineEdit *lineEdit_ElementoParaBusca;
    QWidget *layoutWidget_5;
    QGridLayout *gridLayout_5;
    QLabel *label_RemoverElementoEspecifico;
    QLineEdit *lineEdit_ElementoParaRemover;
    QPushButton *pushButton_RemoverElementoEspecifico;
    QPushButton *pushButton_RemoverNaPosicao;
    QLabel *label_RemoverNaPosicaoEspecifica;
    QLineEdit *lineEdit_PosicaoParaRemover;
    QFrame *line;
    QLabel *label_Saida_Titulo;
    QFrame *line_6;
    QWidget *layoutWidget;
    QGridLayout *gridLayout_1;
    QPushButton *pushButton_IncluirNoInicio;
    QPushButton *pushButton_IncluirNoFim;
    QLineEdit *lineEdit_ElementoParaIncluir;
    QPushButton *pushButton_IncluirNaPosicao;
    QLabel *label_Incluir;
    QLineEdit *lineEdit_PosicaoParaIncluir;
    QFrame *line_4;
    QFrame *line_3;
    QFrame *line_2;
    QLabel *label_Saida;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(469, 467);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        layoutWidget_3 = new QWidget(centralWidget);
        layoutWidget_3->setObjectName(QStringLiteral("layoutWidget_3"));
        layoutWidget_3->setGeometry(QRect(10, 10, 171, 56));
        gridLayout_3 = new QGridLayout(layoutWidget_3);
        gridLayout_3->setSpacing(6);
        gridLayout_3->setContentsMargins(11, 11, 11, 11);
        gridLayout_3->setObjectName(QStringLiteral("gridLayout_3"));
        gridLayout_3->setContentsMargins(0, 0, 0, 0);
        pushButton_CriarComTamanho = new QPushButton(layoutWidget_3);
        pushButton_CriarComTamanho->setObjectName(QStringLiteral("pushButton_CriarComTamanho"));

        gridLayout_3->addWidget(pushButton_CriarComTamanho, 0, 0, 1, 1);

        lineEdit_Tamanho = new QLineEdit(layoutWidget_3);
        lineEdit_Tamanho->setObjectName(QStringLiteral("lineEdit_Tamanho"));
        lineEdit_Tamanho->setAlignment(Qt::AlignCenter);

        gridLayout_3->addWidget(lineEdit_Tamanho, 0, 1, 1, 1);

        pushButton_CriarComDefalt = new QPushButton(layoutWidget_3);
        pushButton_CriarComDefalt->setObjectName(QStringLiteral("pushButton_CriarComDefalt"));

        gridLayout_3->addWidget(pushButton_CriarComDefalt, 1, 0, 1, 1);

        pushButton_RemoverTodosElementos = new QPushButton(layoutWidget_3);
        pushButton_RemoverTodosElementos->setObjectName(QStringLiteral("pushButton_RemoverTodosElementos"));
        QFont font;
        font.setPointSize(8);
        pushButton_RemoverTodosElementos->setFont(font);

        gridLayout_3->addWidget(pushButton_RemoverTodosElementos, 1, 1, 1, 1);

        layoutWidget_4 = new QWidget(centralWidget);
        layoutWidget_4->setObjectName(QStringLiteral("layoutWidget_4"));
        layoutWidget_4->setGeometry(QRect(10, 230, 171, 104));
        gridLayout_4 = new QGridLayout(layoutWidget_4);
        gridLayout_4->setSpacing(6);
        gridLayout_4->setContentsMargins(11, 11, 11, 11);
        gridLayout_4->setObjectName(QStringLiteral("gridLayout_4"));
        gridLayout_4->setContentsMargins(0, 0, 0, 0);
        label_Elemento_Substituir = new QLabel(layoutWidget_4);
        label_Elemento_Substituir->setObjectName(QStringLiteral("label_Elemento_Substituir"));

        gridLayout_4->addWidget(label_Elemento_Substituir, 2, 0, 1, 2);

        lineEdit_ElementoParaSubstituir = new QLineEdit(layoutWidget_4);
        lineEdit_ElementoParaSubstituir->setObjectName(QStringLiteral("lineEdit_ElementoParaSubstituir"));
        lineEdit_ElementoParaSubstituir->setAlignment(Qt::AlignCenter);

        gridLayout_4->addWidget(lineEdit_ElementoParaSubstituir, 2, 2, 1, 1);

        pushButton_SubstituirElemento = new QPushButton(layoutWidget_4);
        pushButton_SubstituirElemento->setObjectName(QStringLiteral("pushButton_SubstituirElemento"));

        gridLayout_4->addWidget(pushButton_SubstituirElemento, 3, 0, 1, 3);

        lineEdit_PosicaoParaSubstituir = new QLineEdit(layoutWidget_4);
        lineEdit_PosicaoParaSubstituir->setObjectName(QStringLiteral("lineEdit_PosicaoParaSubstituir"));
        lineEdit_PosicaoParaSubstituir->setAlignment(Qt::AlignCenter);

        gridLayout_4->addWidget(lineEdit_PosicaoParaSubstituir, 1, 1, 1, 2);

        label_Posicao_Substituir = new QLabel(layoutWidget_4);
        label_Posicao_Substituir->setObjectName(QStringLiteral("label_Posicao_Substituir"));

        gridLayout_4->addWidget(label_Posicao_Substituir, 1, 0, 1, 1);

        label_SubstituirElemento = new QLabel(layoutWidget_4);
        label_SubstituirElemento->setObjectName(QStringLiteral("label_SubstituirElemento"));
        QFont font1;
        font1.setPointSize(10);
        font1.setBold(true);
        font1.setUnderline(true);
        font1.setWeight(75);
        label_SubstituirElemento->setFont(font1);
        label_SubstituirElemento->setAlignment(Qt::AlignCenter);

        gridLayout_4->addWidget(label_SubstituirElemento, 0, 0, 1, 3);

        layoutWidget_2 = new QWidget(centralWidget);
        layoutWidget_2->setObjectName(QStringLiteral("layoutWidget_2"));
        layoutWidget_2->setGeometry(QRect(210, 10, 241, 121));
        gridLayout_2 = new QGridLayout(layoutWidget_2);
        gridLayout_2->setSpacing(6);
        gridLayout_2->setContentsMargins(11, 11, 11, 11);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        gridLayout_2->setContentsMargins(0, 0, 0, 0);
        pushButton_BuscarElemento = new QPushButton(layoutWidget_2);
        pushButton_BuscarElemento->setObjectName(QStringLiteral("pushButton_BuscarElemento"));

        gridLayout_2->addWidget(pushButton_BuscarElemento, 0, 0, 1, 2);

        pushButton_QuantidadeDeElementos = new QPushButton(layoutWidget_2);
        pushButton_QuantidadeDeElementos->setObjectName(QStringLiteral("pushButton_QuantidadeDeElementos"));

        gridLayout_2->addWidget(pushButton_QuantidadeDeElementos, 2, 1, 1, 3);

        lineEdit_PosicaoParaObterElemento = new QLineEdit(layoutWidget_2);
        lineEdit_PosicaoParaObterElemento->setObjectName(QStringLiteral("lineEdit_PosicaoParaObterElemento"));
        lineEdit_PosicaoParaObterElemento->setAlignment(Qt::AlignCenter);

        gridLayout_2->addWidget(lineEdit_PosicaoParaObterElemento, 1, 3, 1, 1);

        pushButton_ObterElemento = new QPushButton(layoutWidget_2);
        pushButton_ObterElemento->setObjectName(QStringLiteral("pushButton_ObterElemento"));

        gridLayout_2->addWidget(pushButton_ObterElemento, 1, 0, 1, 2);

        pushButton_eVazia = new QPushButton(layoutWidget_2);
        pushButton_eVazia->setObjectName(QStringLiteral("pushButton_eVazia"));

        gridLayout_2->addWidget(pushButton_eVazia, 2, 0, 1, 1);

        label_Posicao_Obter = new QLabel(layoutWidget_2);
        label_Posicao_Obter->setObjectName(QStringLiteral("label_Posicao_Obter"));

        gridLayout_2->addWidget(label_Posicao_Obter, 1, 2, 1, 1);

        label_Elemento_Buscar = new QLabel(layoutWidget_2);
        label_Elemento_Buscar->setObjectName(QStringLiteral("label_Elemento_Buscar"));

        gridLayout_2->addWidget(label_Elemento_Buscar, 0, 2, 1, 1);

        lineEdit_ElementoParaBusca = new QLineEdit(layoutWidget_2);
        lineEdit_ElementoParaBusca->setObjectName(QStringLiteral("lineEdit_ElementoParaBusca"));
        lineEdit_ElementoParaBusca->setAlignment(Qt::AlignCenter);

        gridLayout_2->addWidget(lineEdit_ElementoParaBusca, 0, 3, 1, 1);

        layoutWidget_5 = new QWidget(centralWidget);
        layoutWidget_5->setObjectName(QStringLiteral("layoutWidget_5"));
        layoutWidget_5->setGeometry(QRect(210, 170, 241, 121));
        gridLayout_5 = new QGridLayout(layoutWidget_5);
        gridLayout_5->setSpacing(6);
        gridLayout_5->setContentsMargins(11, 11, 11, 11);
        gridLayout_5->setObjectName(QStringLiteral("gridLayout_5"));
        gridLayout_5->setContentsMargins(0, 0, 0, 0);
        label_RemoverElementoEspecifico = new QLabel(layoutWidget_5);
        label_RemoverElementoEspecifico->setObjectName(QStringLiteral("label_RemoverElementoEspecifico"));

        gridLayout_5->addWidget(label_RemoverElementoEspecifico, 2, 0, 1, 2);

        lineEdit_ElementoParaRemover = new QLineEdit(layoutWidget_5);
        lineEdit_ElementoParaRemover->setObjectName(QStringLiteral("lineEdit_ElementoParaRemover"));
        lineEdit_ElementoParaRemover->setAlignment(Qt::AlignCenter);

        gridLayout_5->addWidget(lineEdit_ElementoParaRemover, 3, 0, 1, 1);

        pushButton_RemoverElementoEspecifico = new QPushButton(layoutWidget_5);
        pushButton_RemoverElementoEspecifico->setObjectName(QStringLiteral("pushButton_RemoverElementoEspecifico"));

        gridLayout_5->addWidget(pushButton_RemoverElementoEspecifico, 3, 1, 1, 1);

        pushButton_RemoverNaPosicao = new QPushButton(layoutWidget_5);
        pushButton_RemoverNaPosicao->setObjectName(QStringLiteral("pushButton_RemoverNaPosicao"));

        gridLayout_5->addWidget(pushButton_RemoverNaPosicao, 1, 1, 1, 1);

        label_RemoverNaPosicaoEspecifica = new QLabel(layoutWidget_5);
        label_RemoverNaPosicaoEspecifica->setObjectName(QStringLiteral("label_RemoverNaPosicaoEspecifica"));

        gridLayout_5->addWidget(label_RemoverNaPosicaoEspecifica, 0, 0, 1, 2);

        lineEdit_PosicaoParaRemover = new QLineEdit(layoutWidget_5);
        lineEdit_PosicaoParaRemover->setObjectName(QStringLiteral("lineEdit_PosicaoParaRemover"));
        lineEdit_PosicaoParaRemover->setAlignment(Qt::AlignCenter);

        gridLayout_5->addWidget(lineEdit_PosicaoParaRemover, 1, 0, 1, 1);

        line = new QFrame(centralWidget);
        line->setObjectName(QStringLiteral("line"));
        line->setGeometry(QRect(183, 10, 20, 321));
        line->setFrameShape(QFrame::VLine);
        line->setFrameShadow(QFrame::Sunken);
        label_Saida_Titulo = new QLabel(centralWidget);
        label_Saida_Titulo->setObjectName(QStringLiteral("label_Saida_Titulo"));
        label_Saida_Titulo->setGeometry(QRect(10, 350, 441, 21));
        QFont font2;
        font2.setPointSize(10);
        font2.setBold(true);
        font2.setWeight(75);
        label_Saida_Titulo->setFont(font2);
        label_Saida_Titulo->setStyleSheet(QStringLiteral(""));
        label_Saida_Titulo->setAlignment(Qt::AlignCenter);
        line_6 = new QFrame(centralWidget);
        line_6->setObjectName(QStringLiteral("line_6"));
        line_6->setGeometry(QRect(10, 340, 441, 20));
        line_6->setFrameShape(QFrame::HLine);
        line_6->setFrameShadow(QFrame::Sunken);
        layoutWidget = new QWidget(centralWidget);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(10, 90, 171, 118));
        gridLayout_1 = new QGridLayout(layoutWidget);
        gridLayout_1->setSpacing(6);
        gridLayout_1->setContentsMargins(11, 11, 11, 11);
        gridLayout_1->setObjectName(QStringLiteral("gridLayout_1"));
        gridLayout_1->setContentsMargins(0, 0, 0, 0);
        pushButton_IncluirNoInicio = new QPushButton(layoutWidget);
        pushButton_IncluirNoInicio->setObjectName(QStringLiteral("pushButton_IncluirNoInicio"));

        gridLayout_1->addWidget(pushButton_IncluirNoInicio, 2, 1, 1, 1);

        pushButton_IncluirNoFim = new QPushButton(layoutWidget);
        pushButton_IncluirNoFim->setObjectName(QStringLiteral("pushButton_IncluirNoFim"));

        gridLayout_1->addWidget(pushButton_IncluirNoFim, 2, 0, 1, 1);

        lineEdit_ElementoParaIncluir = new QLineEdit(layoutWidget);
        lineEdit_ElementoParaIncluir->setObjectName(QStringLiteral("lineEdit_ElementoParaIncluir"));
        lineEdit_ElementoParaIncluir->setAlignment(Qt::AlignCenter);

        gridLayout_1->addWidget(lineEdit_ElementoParaIncluir, 1, 0, 1, 2);

        pushButton_IncluirNaPosicao = new QPushButton(layoutWidget);
        pushButton_IncluirNaPosicao->setObjectName(QStringLiteral("pushButton_IncluirNaPosicao"));

        gridLayout_1->addWidget(pushButton_IncluirNaPosicao, 3, 0, 1, 1);

        label_Incluir = new QLabel(layoutWidget);
        label_Incluir->setObjectName(QStringLiteral("label_Incluir"));
        label_Incluir->setFont(font1);
        label_Incluir->setAlignment(Qt::AlignCenter);

        gridLayout_1->addWidget(label_Incluir, 0, 0, 1, 2);

        lineEdit_PosicaoParaIncluir = new QLineEdit(layoutWidget);
        lineEdit_PosicaoParaIncluir->setObjectName(QStringLiteral("lineEdit_PosicaoParaIncluir"));
        lineEdit_PosicaoParaIncluir->setAlignment(Qt::AlignCenter);

        gridLayout_1->addWidget(lineEdit_PosicaoParaIncluir, 3, 1, 1, 1);

        line_4 = new QFrame(centralWidget);
        line_4->setObjectName(QStringLiteral("line_4"));
        line_4->setGeometry(QRect(210, 140, 241, 20));
        line_4->setFrameShape(QFrame::HLine);
        line_4->setFrameShadow(QFrame::Sunken);
        line_3 = new QFrame(centralWidget);
        line_3->setObjectName(QStringLiteral("line_3"));
        line_3->setGeometry(QRect(10, 210, 171, 20));
        line_3->setFrameShape(QFrame::HLine);
        line_3->setFrameShadow(QFrame::Sunken);
        line_2 = new QFrame(centralWidget);
        line_2->setObjectName(QStringLiteral("line_2"));
        line_2->setGeometry(QRect(10, 70, 171, 20));
        line_2->setFrameShape(QFrame::HLine);
        line_2->setFrameShadow(QFrame::Sunken);
        label_Saida = new QLabel(centralWidget);
        label_Saida->setObjectName(QStringLiteral("label_Saida"));
        label_Saida->setGeometry(QRect(10, 380, 441, 21));
        QFont font3;
        font3.setPointSize(10);
        label_Saida->setFont(font3);
        label_Saida->setStyleSheet(QLatin1String("background-color: rgb(255, 255, 255);\n"
"border-color: rgb(0, 0, 0);"));
        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 469, 21));
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
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "Lista", 0));
        pushButton_CriarComTamanho->setText(QApplication::translate("MainWindow", "Criar", 0));
        pushButton_CriarComDefalt->setText(QApplication::translate("MainWindow", "Criar (Defalt)", 0));
        pushButton_RemoverTodosElementos->setText(QApplication::translate("MainWindow", "Remover Todos", 0));
        label_Elemento_Substituir->setText(QApplication::translate("MainWindow", "Novo Elemento ->", 0));
        lineEdit_ElementoParaSubstituir->setText(QString());
        pushButton_SubstituirElemento->setText(QApplication::translate("MainWindow", "Substituir", 0));
        label_Posicao_Substituir->setText(QApplication::translate("MainWindow", "Posi\303\247\303\243o ->", 0));
        label_SubstituirElemento->setText(QApplication::translate("MainWindow", "Substituir Elemento", 0));
        pushButton_BuscarElemento->setText(QApplication::translate("MainWindow", "Buscar Elemento", 0));
        pushButton_QuantidadeDeElementos->setText(QApplication::translate("MainWindow", "Quant. de Elemen.", 0));
        pushButton_ObterElemento->setText(QApplication::translate("MainWindow", "Obter Elemento", 0));
        pushButton_eVazia->setText(QApplication::translate("MainWindow", "E Vazia ?", 0));
        label_Posicao_Obter->setText(QApplication::translate("MainWindow", "Posi\303\247\303\243o ->", 0));
        label_Elemento_Buscar->setText(QApplication::translate("MainWindow", "Elemento ->", 0));
        label_RemoverElementoEspecifico->setText(QApplication::translate("MainWindow", "Remover Elemento com valor especifico -->", 0));
        pushButton_RemoverElementoEspecifico->setText(QApplication::translate("MainWindow", "Remover", 0));
        pushButton_RemoverNaPosicao->setText(QApplication::translate("MainWindow", "Remover", 0));
        label_RemoverNaPosicaoEspecifica->setText(QApplication::translate("MainWindow", "Remover Elemento em uma posi\303\247\303\243o especifica -->", 0));
        label_Saida_Titulo->setText(QApplication::translate("MainWindow", "SAIDA", 0));
        pushButton_IncluirNoInicio->setText(QApplication::translate("MainWindow", "No Inicio", 0));
        pushButton_IncluirNoFim->setText(QApplication::translate("MainWindow", "No Fim", 0));
        pushButton_IncluirNaPosicao->setText(QApplication::translate("MainWindow", "Na Posicao", 0));
        label_Incluir->setText(QApplication::translate("MainWindow", "Incluir", 0));
        label_Saida->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
