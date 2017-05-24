#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->pushButton_Limpar->setEnabled(false);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_CarregarArquivo_clicked()
{
    try
    {
        QString nome_Do_Arquivo_No_Disco = QFileDialog::getOpenFileName(this,"Abrir Arquivo",QDir::currentPath(),"Arquivos Textos (*.csv *.txt)");
        ED1::Persistencia carregar_Arquivo(nome_Do_Arquivo_No_Disco); //Gerar minha lista
        ED1::Lista<QString> *lista_Pronta = carregar_Arquivo.carregarDados(); //Armazenar a lista gerada
        int tamanhoLista = lista_Pronta->obterTamanho(); //Saber o tamanho da lista para fazer a tabela
        for(int contador = 1 ; contador <= tamanhoLista ; contador++)
        {
            ui->listWidget_MostrarLista->addItem(lista_Pronta->acessarPosicao(contador));
        }
        delete lista_Pronta; // Ja usei a lista apago ela
        ui->pushButton_Limpar->setEnabled(true);
    } catch (QString &erro) { QMessageBox::information(this,"ERRO",erro);}
}

void MainWindow::on_pushButton_Limpar_clicked()
{
    try
    {
        ui->pushButton_Limpar->setEnabled(false);
        ui->listWidget_MostrarLista->clear();
    } catch (...) {QMessageBox::information(this,"ERRO","Erro ao limpar") ;   }
}
