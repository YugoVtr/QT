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
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QLabel *label_PrimeiraMatriz;
    QLabel *label_QuantLinhas_Matriz_1;
    QLabel *label_QuantColunas_Matriz_1;
    QLineEdit *lineEdit_QuantLinhas_Matriz_1;
    QLineEdit *lineEdit_QuantColunas_Matriz_1;
    QPushButton *pushButton_Criar_Matriz_1;
    QPushButton *pushButton_Limpar_Matriz_1;
    QFrame *line;
    QLineEdit *lineEdit_QuantLinhas_Matriz_2;
    QLineEdit *lineEdit_QuantColunas_Matriz_2;
    QLabel *label_QuantLinhas_Matriz_2;
    QLabel *label_QuantColunas_Matriz_2;
    QPushButton *pushButton_Criar_Matriz_2;
    QPushButton *pushButton_Limpar_Matriz_2;
    QLabel *label_PrimeiraMatriz_2;
    QFrame *line_2;
    QPushButton *pushButton_Potenciacao_Matriz_1;
    QPushButton *pushButton_MultiplicarPorConstante_Matriz_1;
    QLineEdit *lineEdit_Expoente_Matriz_1;
    QLineEdit *lineEdit_Constante_Matriz_1;
    QFrame *line_3;
    QFrame *line_4;
    QLineEdit *lineEdit_Constante_Matriz_2;
    QPushButton *pushButton_Potenciacao_Matriz_2;
    QPushButton *pushButton_MultiplicarPorConstante_Matriz_2;
    QLineEdit *lineEdit_Expoente_Matriz_2;
    QTableWidget *tableWidget;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout;
    QPushButton *pushButton_Adicao;
    QPushButton *pushButton_Subtracao;
    QPushButton *pushButton_Multiplicacao;
    QPushButton *pushButton_Transposta_Matriz_1;
    QPushButton *pushButton_Transposta_Matriz_2;
    QTableWidget *tableWidget_Exibir_Matriz_1;
    QTableWidget *tableWidget_Exibir_Matriz_2;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(440, 672);
        MainWindow->setStyleSheet(QStringLiteral("background-color: rgb(240, 240, 240);"));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        label_PrimeiraMatriz = new QLabel(centralWidget);
        label_PrimeiraMatriz->setObjectName(QStringLiteral("label_PrimeiraMatriz"));
        label_PrimeiraMatriz->setGeometry(QRect(10, 10, 51, 25));
        QFont font;
        font.setFamily(QStringLiteral("AR CENA"));
        font.setPointSize(11);
        font.setBold(false);
        font.setUnderline(true);
        font.setWeight(50);
        label_PrimeiraMatriz->setFont(font);
        label_PrimeiraMatriz->setAlignment(Qt::AlignCenter);
        label_QuantLinhas_Matriz_1 = new QLabel(centralWidget);
        label_QuantLinhas_Matriz_1->setObjectName(QStringLiteral("label_QuantLinhas_Matriz_1"));
        label_QuantLinhas_Matriz_1->setGeometry(QRect(10, 50, 120, 25));
        QFont font1;
        font1.setFamily(QStringLiteral("AR CENA"));
        font1.setPointSize(11);
        font1.setBold(false);
        font1.setWeight(50);
        label_QuantLinhas_Matriz_1->setFont(font1);
        label_QuantColunas_Matriz_1 = new QLabel(centralWidget);
        label_QuantColunas_Matriz_1->setObjectName(QStringLiteral("label_QuantColunas_Matriz_1"));
        label_QuantColunas_Matriz_1->setGeometry(QRect(10, 90, 121, 25));
        label_QuantColunas_Matriz_1->setFont(font1);
        lineEdit_QuantLinhas_Matriz_1 = new QLineEdit(centralWidget);
        lineEdit_QuantLinhas_Matriz_1->setObjectName(QStringLiteral("lineEdit_QuantLinhas_Matriz_1"));
        lineEdit_QuantLinhas_Matriz_1->setGeometry(QRect(132, 50, 79, 25));
        lineEdit_QuantLinhas_Matriz_1->setFont(font1);
        lineEdit_QuantLinhas_Matriz_1->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));
        lineEdit_QuantColunas_Matriz_1 = new QLineEdit(centralWidget);
        lineEdit_QuantColunas_Matriz_1->setObjectName(QStringLiteral("lineEdit_QuantColunas_Matriz_1"));
        lineEdit_QuantColunas_Matriz_1->setGeometry(QRect(135, 90, 75, 25));
        lineEdit_QuantColunas_Matriz_1->setFont(font1);
        lineEdit_QuantColunas_Matriz_1->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));
        pushButton_Criar_Matriz_1 = new QPushButton(centralWidget);
        pushButton_Criar_Matriz_1->setObjectName(QStringLiteral("pushButton_Criar_Matriz_1"));
        pushButton_Criar_Matriz_1->setGeometry(QRect(10, 130, 90, 25));
        pushButton_Criar_Matriz_1->setFont(font1);
        pushButton_Limpar_Matriz_1 = new QPushButton(centralWidget);
        pushButton_Limpar_Matriz_1->setObjectName(QStringLiteral("pushButton_Limpar_Matriz_1"));
        pushButton_Limpar_Matriz_1->setGeometry(QRect(120, 130, 90, 25));
        pushButton_Limpar_Matriz_1->setFont(font1);
        line = new QFrame(centralWidget);
        line->setObjectName(QStringLiteral("line"));
        line->setGeometry(QRect(220, 10, 5, 300));
        line->setFont(font1);
        line->setFrameShape(QFrame::VLine);
        line->setFrameShadow(QFrame::Sunken);
        lineEdit_QuantLinhas_Matriz_2 = new QLineEdit(centralWidget);
        lineEdit_QuantLinhas_Matriz_2->setObjectName(QStringLiteral("lineEdit_QuantLinhas_Matriz_2"));
        lineEdit_QuantLinhas_Matriz_2->setGeometry(QRect(353, 50, 78, 25));
        lineEdit_QuantLinhas_Matriz_2->setFont(font1);
        lineEdit_QuantLinhas_Matriz_2->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));
        lineEdit_QuantColunas_Matriz_2 = new QLineEdit(centralWidget);
        lineEdit_QuantColunas_Matriz_2->setObjectName(QStringLiteral("lineEdit_QuantColunas_Matriz_2"));
        lineEdit_QuantColunas_Matriz_2->setGeometry(QRect(355, 90, 75, 25));
        lineEdit_QuantColunas_Matriz_2->setFont(font1);
        lineEdit_QuantColunas_Matriz_2->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));
        label_QuantLinhas_Matriz_2 = new QLabel(centralWidget);
        label_QuantLinhas_Matriz_2->setObjectName(QStringLiteral("label_QuantLinhas_Matriz_2"));
        label_QuantLinhas_Matriz_2->setGeometry(QRect(230, 50, 120, 25));
        label_QuantLinhas_Matriz_2->setFont(font1);
        label_QuantColunas_Matriz_2 = new QLabel(centralWidget);
        label_QuantColunas_Matriz_2->setObjectName(QStringLiteral("label_QuantColunas_Matriz_2"));
        label_QuantColunas_Matriz_2->setGeometry(QRect(230, 90, 121, 25));
        label_QuantColunas_Matriz_2->setFont(font1);
        pushButton_Criar_Matriz_2 = new QPushButton(centralWidget);
        pushButton_Criar_Matriz_2->setObjectName(QStringLiteral("pushButton_Criar_Matriz_2"));
        pushButton_Criar_Matriz_2->setGeometry(QRect(230, 130, 90, 25));
        pushButton_Criar_Matriz_2->setFont(font1);
        pushButton_Limpar_Matriz_2 = new QPushButton(centralWidget);
        pushButton_Limpar_Matriz_2->setObjectName(QStringLiteral("pushButton_Limpar_Matriz_2"));
        pushButton_Limpar_Matriz_2->setGeometry(QRect(340, 130, 90, 25));
        pushButton_Limpar_Matriz_2->setFont(font1);
        label_PrimeiraMatriz_2 = new QLabel(centralWidget);
        label_PrimeiraMatriz_2->setObjectName(QStringLiteral("label_PrimeiraMatriz_2"));
        label_PrimeiraMatriz_2->setGeometry(QRect(230, 10, 51, 25));
        label_PrimeiraMatriz_2->setFont(font);
        label_PrimeiraMatriz_2->setAlignment(Qt::AlignCenter);
        line_2 = new QFrame(centralWidget);
        line_2->setObjectName(QStringLiteral("line_2"));
        line_2->setGeometry(QRect(10, 310, 420, 5));
        line_2->setFont(font1);
        line_2->setFrameShape(QFrame::HLine);
        line_2->setFrameShadow(QFrame::Sunken);
        pushButton_Potenciacao_Matriz_1 = new QPushButton(centralWidget);
        pushButton_Potenciacao_Matriz_1->setObjectName(QStringLiteral("pushButton_Potenciacao_Matriz_1"));
        pushButton_Potenciacao_Matriz_1->setGeometry(QRect(11, 281, 46, 23));
        pushButton_Potenciacao_Matriz_1->setFont(font1);
        pushButton_Potenciacao_Matriz_1->setStyleSheet(QStringLiteral(""));
        QIcon icon;
        icon.addFile(QStringLiteral("../incone_Potencia.jpg"), QSize(), QIcon::Normal, QIcon::On);
        pushButton_Potenciacao_Matriz_1->setIcon(icon);
        pushButton_Potenciacao_Matriz_1->setIconSize(QSize(48, 18));
        pushButton_MultiplicarPorConstante_Matriz_1 = new QPushButton(centralWidget);
        pushButton_MultiplicarPorConstante_Matriz_1->setObjectName(QStringLiteral("pushButton_MultiplicarPorConstante_Matriz_1"));
        pushButton_MultiplicarPorConstante_Matriz_1->setGeometry(QRect(114, 281, 45, 23));
        pushButton_MultiplicarPorConstante_Matriz_1->setFont(font1);
        QIcon icon1;
        icon1.addFile(QStringLiteral("../incone_X_Constante.jpg"), QSize(), QIcon::Normal, QIcon::On);
        pushButton_MultiplicarPorConstante_Matriz_1->setIcon(icon1);
        pushButton_MultiplicarPorConstante_Matriz_1->setIconSize(QSize(48, 17));
        lineEdit_Expoente_Matriz_1 = new QLineEdit(centralWidget);
        lineEdit_Expoente_Matriz_1->setObjectName(QStringLiteral("lineEdit_Expoente_Matriz_1"));
        lineEdit_Expoente_Matriz_1->setGeometry(QRect(63, 282, 45, 20));
        lineEdit_Expoente_Matriz_1->setFont(font1);
        lineEdit_Expoente_Matriz_1->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));
        lineEdit_Constante_Matriz_1 = new QLineEdit(centralWidget);
        lineEdit_Constante_Matriz_1->setObjectName(QStringLiteral("lineEdit_Constante_Matriz_1"));
        lineEdit_Constante_Matriz_1->setGeometry(QRect(165, 282, 45, 20));
        lineEdit_Constante_Matriz_1->setFont(font1);
        lineEdit_Constante_Matriz_1->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));
        line_3 = new QFrame(centralWidget);
        line_3->setObjectName(QStringLiteral("line_3"));
        line_3->setGeometry(QRect(10, 270, 201, 5));
        line_3->setFont(font1);
        line_3->setFrameShape(QFrame::HLine);
        line_3->setFrameShadow(QFrame::Sunken);
        line_4 = new QFrame(centralWidget);
        line_4->setObjectName(QStringLiteral("line_4"));
        line_4->setGeometry(QRect(230, 270, 201, 5));
        line_4->setFont(font1);
        line_4->setFrameShape(QFrame::HLine);
        line_4->setFrameShadow(QFrame::Sunken);
        lineEdit_Constante_Matriz_2 = new QLineEdit(centralWidget);
        lineEdit_Constante_Matriz_2->setObjectName(QStringLiteral("lineEdit_Constante_Matriz_2"));
        lineEdit_Constante_Matriz_2->setGeometry(QRect(382, 280, 45, 20));
        lineEdit_Constante_Matriz_2->setFont(font1);
        lineEdit_Constante_Matriz_2->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));
        pushButton_Potenciacao_Matriz_2 = new QPushButton(centralWidget);
        pushButton_Potenciacao_Matriz_2->setObjectName(QStringLiteral("pushButton_Potenciacao_Matriz_2"));
        pushButton_Potenciacao_Matriz_2->setGeometry(QRect(228, 279, 46, 23));
        pushButton_Potenciacao_Matriz_2->setFont(font1);
        QIcon icon2;
        icon2.addFile(QStringLiteral("../incone_Potencia.jpg"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_Potenciacao_Matriz_2->setIcon(icon2);
        pushButton_Potenciacao_Matriz_2->setIconSize(QSize(48, 18));
        pushButton_MultiplicarPorConstante_Matriz_2 = new QPushButton(centralWidget);
        pushButton_MultiplicarPorConstante_Matriz_2->setObjectName(QStringLiteral("pushButton_MultiplicarPorConstante_Matriz_2"));
        pushButton_MultiplicarPorConstante_Matriz_2->setGeometry(QRect(331, 279, 45, 23));
        pushButton_MultiplicarPorConstante_Matriz_2->setFont(font1);
        pushButton_MultiplicarPorConstante_Matriz_2->setIcon(icon1);
        pushButton_MultiplicarPorConstante_Matriz_2->setIconSize(QSize(48, 17));
        lineEdit_Expoente_Matriz_2 = new QLineEdit(centralWidget);
        lineEdit_Expoente_Matriz_2->setObjectName(QStringLiteral("lineEdit_Expoente_Matriz_2"));
        lineEdit_Expoente_Matriz_2->setGeometry(QRect(280, 280, 45, 20));
        lineEdit_Expoente_Matriz_2->setFont(font1);
        lineEdit_Expoente_Matriz_2->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));
        tableWidget = new QTableWidget(centralWidget);
        if (tableWidget->columnCount() < 2)
            tableWidget->setColumnCount(2);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        __qtablewidgetitem->setTextAlignment(Qt::AlignCenter);
        __qtablewidgetitem->setBackground(QColor(240, 240, 240));
        tableWidget->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        __qtablewidgetitem1->setTextAlignment(Qt::AlignCenter);
        __qtablewidgetitem1->setBackground(QColor(240, 240, 240));
        tableWidget->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        if (tableWidget->rowCount() < 8)
            tableWidget->setRowCount(8);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        __qtablewidgetitem2->setTextAlignment(Qt::AlignLeading|Qt::AlignVCenter);
        __qtablewidgetitem2->setBackground(QColor(255, 255, 255));
        tableWidget->setVerticalHeaderItem(0, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(1, __qtablewidgetitem3);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(2, __qtablewidgetitem4);
        QTableWidgetItem *__qtablewidgetitem5 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(3, __qtablewidgetitem5);
        QTableWidgetItem *__qtablewidgetitem6 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(4, __qtablewidgetitem6);
        QTableWidgetItem *__qtablewidgetitem7 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(5, __qtablewidgetitem7);
        QTableWidgetItem *__qtablewidgetitem8 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(6, __qtablewidgetitem8);
        QTableWidgetItem *__qtablewidgetitem9 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(7, __qtablewidgetitem9);
        QTableWidgetItem *__qtablewidgetitem10 = new QTableWidgetItem();
        tableWidget->setItem(0, 0, __qtablewidgetitem10);
        QTableWidgetItem *__qtablewidgetitem11 = new QTableWidgetItem();
        tableWidget->setItem(4, 0, __qtablewidgetitem11);
        tableWidget->setObjectName(QStringLiteral("tableWidget"));
        tableWidget->setGeometry(QRect(50, 360, 321, 271));
        tableWidget->setFont(font1);
        tableWidget->setStyleSheet(QLatin1String("gridline-color: rgb(240, 240, 240);\n"
"background-color: rgb(240, 240, 240);"));
        tableWidget->setFrameShape(QFrame::StyledPanel);
        tableWidget->setFrameShadow(QFrame::Raised);
        tableWidget->setLineWidth(0);
        tableWidget->setVerticalScrollBarPolicy(Qt::ScrollBarAsNeeded);
        tableWidget->setAutoScroll(true);
        tableWidget->setAutoScrollMargin(20);
        tableWidget->setProperty("showDropIndicator", QVariant(true));
        tableWidget->setTextElideMode(Qt::ElideRight);
        tableWidget->setShowGrid(false);
        tableWidget->setCornerButtonEnabled(true);
        tableWidget->setRowCount(8);
        tableWidget->horizontalHeader()->setCascadingSectionResizes(false);
        tableWidget->horizontalHeader()->setProperty("showSortIndicator", QVariant(false));
        tableWidget->horizontalHeader()->setStretchLastSection(true);
        tableWidget->verticalHeader()->setCascadingSectionResizes(false);
        tableWidget->verticalHeader()->setProperty("showSortIndicator", QVariant(false));
        tableWidget->verticalHeader()->setStretchLastSection(true);
        layoutWidget = new QWidget(centralWidget);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(13, 323, 411, 32));
        horizontalLayout = new QHBoxLayout(layoutWidget);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        pushButton_Adicao = new QPushButton(layoutWidget);
        pushButton_Adicao->setObjectName(QStringLiteral("pushButton_Adicao"));
        pushButton_Adicao->setFont(font1);

        horizontalLayout->addWidget(pushButton_Adicao);

        pushButton_Subtracao = new QPushButton(layoutWidget);
        pushButton_Subtracao->setObjectName(QStringLiteral("pushButton_Subtracao"));
        pushButton_Subtracao->setFont(font1);

        horizontalLayout->addWidget(pushButton_Subtracao);

        pushButton_Multiplicacao = new QPushButton(layoutWidget);
        pushButton_Multiplicacao->setObjectName(QStringLiteral("pushButton_Multiplicacao"));
        pushButton_Multiplicacao->setFont(font1);

        horizontalLayout->addWidget(pushButton_Multiplicacao);

        pushButton_Transposta_Matriz_1 = new QPushButton(layoutWidget);
        pushButton_Transposta_Matriz_1->setObjectName(QStringLiteral("pushButton_Transposta_Matriz_1"));
        pushButton_Transposta_Matriz_1->setFont(font1);
        QIcon icon3;
        icon3.addFile(QStringLiteral("../incone_Transposta_Matriz_1.jpg"), QSize(), QIcon::Normal, QIcon::On);
        pushButton_Transposta_Matriz_1->setIcon(icon3);
        pushButton_Transposta_Matriz_1->setIconSize(QSize(48, 22));

        horizontalLayout->addWidget(pushButton_Transposta_Matriz_1);

        pushButton_Transposta_Matriz_2 = new QPushButton(layoutWidget);
        pushButton_Transposta_Matriz_2->setObjectName(QStringLiteral("pushButton_Transposta_Matriz_2"));
        pushButton_Transposta_Matriz_2->setFont(font1);
        pushButton_Transposta_Matriz_2->setStyleSheet(QStringLiteral("background-color: rgb(239, 239, 239);"));
        QIcon icon4;
        icon4.addFile(QStringLiteral("../incone_Transposta_Matriz_2.jpg"), QSize(), QIcon::Normal, QIcon::On);
        pushButton_Transposta_Matriz_2->setIcon(icon4);
        pushButton_Transposta_Matriz_2->setIconSize(QSize(48, 22));

        horizontalLayout->addWidget(pushButton_Transposta_Matriz_2);

        tableWidget_Exibir_Matriz_1 = new QTableWidget(centralWidget);
        tableWidget_Exibir_Matriz_1->setObjectName(QStringLiteral("tableWidget_Exibir_Matriz_1"));
        tableWidget_Exibir_Matriz_1->setGeometry(QRect(10, 160, 201, 101));
        tableWidget_Exibir_Matriz_1->horizontalHeader()->setVisible(false);
        tableWidget_Exibir_Matriz_1->horizontalHeader()->setProperty("showSortIndicator", QVariant(false));
        tableWidget_Exibir_Matriz_1->horizontalHeader()->setStretchLastSection(false);
        tableWidget_Exibir_Matriz_1->verticalHeader()->setVisible(false);
        tableWidget_Exibir_Matriz_1->verticalHeader()->setStretchLastSection(false);
        tableWidget_Exibir_Matriz_2 = new QTableWidget(centralWidget);
        tableWidget_Exibir_Matriz_2->setObjectName(QStringLiteral("tableWidget_Exibir_Matriz_2"));
        tableWidget_Exibir_Matriz_2->setGeometry(QRect(230, 160, 201, 101));
        tableWidget_Exibir_Matriz_2->horizontalHeader()->setVisible(false);
        tableWidget_Exibir_Matriz_2->horizontalHeader()->setCascadingSectionResizes(false);
        tableWidget_Exibir_Matriz_2->horizontalHeader()->setProperty("showSortIndicator", QVariant(false));
        tableWidget_Exibir_Matriz_2->horizontalHeader()->setStretchLastSection(false);
        tableWidget_Exibir_Matriz_2->verticalHeader()->setVisible(false);
        tableWidget_Exibir_Matriz_2->verticalHeader()->setHighlightSections(true);
        tableWidget_Exibir_Matriz_2->verticalHeader()->setProperty("showSortIndicator", QVariant(false));
        tableWidget_Exibir_Matriz_2->verticalHeader()->setStretchLastSection(false);
        MainWindow->setCentralWidget(centralWidget);
        layoutWidget->raise();
        label_PrimeiraMatriz->raise();
        label_QuantLinhas_Matriz_1->raise();
        label_QuantColunas_Matriz_1->raise();
        lineEdit_QuantLinhas_Matriz_1->raise();
        lineEdit_QuantColunas_Matriz_1->raise();
        pushButton_Criar_Matriz_1->raise();
        pushButton_Limpar_Matriz_1->raise();
        line->raise();
        lineEdit_QuantColunas_Matriz_2->raise();
        label_QuantLinhas_Matriz_2->raise();
        label_QuantColunas_Matriz_2->raise();
        pushButton_Criar_Matriz_2->raise();
        pushButton_Limpar_Matriz_2->raise();
        label_PrimeiraMatriz_2->raise();
        lineEdit_QuantLinhas_Matriz_2->raise();
        line_2->raise();
        pushButton_Potenciacao_Matriz_1->raise();
        pushButton_MultiplicarPorConstante_Matriz_1->raise();
        lineEdit_Expoente_Matriz_1->raise();
        lineEdit_Constante_Matriz_1->raise();
        line_3->raise();
        line_4->raise();
        lineEdit_Constante_Matriz_2->raise();
        pushButton_Potenciacao_Matriz_2->raise();
        pushButton_MultiplicarPorConstante_Matriz_2->raise();
        lineEdit_Expoente_Matriz_2->raise();
        tableWidget->raise();
        tableWidget_Exibir_Matriz_1->raise();
        tableWidget_Exibir_Matriz_2->raise();
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
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "Matriz", 0));
        label_PrimeiraMatriz->setText(QApplication::translate("MainWindow", "1\302\260 Matriz", 0));
        label_QuantLinhas_Matriz_1->setText(QApplication::translate("MainWindow", "Quantidade de Linhas ", 0));
        label_QuantColunas_Matriz_1->setText(QApplication::translate("MainWindow", "Quantidade de Colunas ", 0));
        pushButton_Criar_Matriz_1->setText(QApplication::translate("MainWindow", "Criar", 0));
        pushButton_Limpar_Matriz_1->setText(QApplication::translate("MainWindow", "Limpar", 0));
        label_QuantLinhas_Matriz_2->setText(QApplication::translate("MainWindow", "Quantidade de Linhas ", 0));
        label_QuantColunas_Matriz_2->setText(QApplication::translate("MainWindow", "Quantidade de Colunas ", 0));
        pushButton_Criar_Matriz_2->setText(QApplication::translate("MainWindow", "Criar", 0));
        pushButton_Limpar_Matriz_2->setText(QApplication::translate("MainWindow", "Limpar", 0));
        label_PrimeiraMatriz_2->setText(QApplication::translate("MainWindow", "2\302\260 Matriz", 0));
        pushButton_Potenciacao_Matriz_1->setText(QString());
        pushButton_MultiplicarPorConstante_Matriz_1->setText(QString());
        pushButton_Potenciacao_Matriz_2->setText(QString());
        pushButton_MultiplicarPorConstante_Matriz_2->setText(QString());
        QTableWidgetItem *___qtablewidgetitem = tableWidget->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("MainWindow", "1\302\260 Matriz", 0));
        QTableWidgetItem *___qtablewidgetitem1 = tableWidget->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QApplication::translate("MainWindow", "2\302\260 Matriz", 0));
        QTableWidgetItem *___qtablewidgetitem2 = tableWidget->verticalHeaderItem(0);
        ___qtablewidgetitem2->setText(QApplication::translate("MainWindow", "Triangular Superior", 0));
        QTableWidgetItem *___qtablewidgetitem3 = tableWidget->verticalHeaderItem(1);
        ___qtablewidgetitem3->setText(QApplication::translate("MainWindow", "Triangular Inferior", 0));
        QTableWidgetItem *___qtablewidgetitem4 = tableWidget->verticalHeaderItem(2);
        ___qtablewidgetitem4->setText(QApplication::translate("MainWindow", "Simetrica", 0));
        QTableWidgetItem *___qtablewidgetitem5 = tableWidget->verticalHeaderItem(3);
        ___qtablewidgetitem5->setText(QApplication::translate("MainWindow", "Identidade", 0));
        QTableWidgetItem *___qtablewidgetitem6 = tableWidget->verticalHeaderItem(4);
        ___qtablewidgetitem6->setText(QApplication::translate("MainWindow", "Iguais", 0));
        QTableWidgetItem *___qtablewidgetitem7 = tableWidget->verticalHeaderItem(5);
        ___qtablewidgetitem7->setText(QApplication::translate("MainWindow", "Diferentes", 0));
        QTableWidgetItem *___qtablewidgetitem8 = tableWidget->verticalHeaderItem(6);
        ___qtablewidgetitem8->setText(QApplication::translate("MainWindow", "Ortogonal", 0));
        QTableWidgetItem *___qtablewidgetitem9 = tableWidget->verticalHeaderItem(7);
        ___qtablewidgetitem9->setText(QApplication::translate("MainWindow", "Permuta\303\247\303\243o", 0));

        const bool __sortingEnabled = tableWidget->isSortingEnabled();
        tableWidget->setSortingEnabled(false);
        tableWidget->setSortingEnabled(__sortingEnabled);

        pushButton_Adicao->setText(QApplication::translate("MainWindow", "+", 0));
        pushButton_Subtracao->setText(QApplication::translate("MainWindow", "-", 0));
        pushButton_Multiplicacao->setText(QApplication::translate("MainWindow", "X", 0));
        pushButton_Transposta_Matriz_1->setText(QString());
        pushButton_Transposta_Matriz_2->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
