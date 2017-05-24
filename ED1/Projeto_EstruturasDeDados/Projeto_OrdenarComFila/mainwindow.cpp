#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "qcheckbox.h"
#include "QCheckBox"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    //--------------------------------------------

    this->setGeometry(
        QStyle::alignedRect(
            Qt::LeftToRight,
            Qt::AlignCenter,
            this->size(),
            qApp->desktop()->availableGeometry()
        )
    );
    //--------------------------------------------
    ui->pushButton_Limpar->setEnabled(false);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_Limpar_clicked()
{
    try
    {
        ui->pushButton_Limpar->setEnabled(false);
        ui->listWidget_MostrarLista->clear();
    } catch (...) {QMessageBox::information(this,"ERRO","Erro ao limpar") ;   }
}

void MainWindow::on_pushButton_CarregarArquivo_clicked()
{
    try
    {
        ui->listWidget_MostrarLista->clear();
        QString nome_Do_Arquivo_No_Disco = QFileDialog::getOpenFileName(this,"Abrir Arquivo",QDir::currentPath(),"Arquivos Textos (*.csv *.txt)");
        ED1::Persistencia_Fila carregar_Arquivo(nome_Do_Arquivo_No_Disco);//Gerar minha fila
        ED1::Fila<QString> *fila_Pronta = carregar_Arquivo.carregarDados();//Armazenar a lista gerada
        int tamanhoFila = fila_Pronta->quantidadeElementos(); //Saber o tamanho da lista para fazer a tabela
        for(int contador = 1 ; contador <= tamanhoFila ; contador++)
        {
            ui->listWidget_MostrarLista->addItem(fila_Pronta->remover());
        }
        delete fila_Pronta; // Ja usei a lista apago ela
        ui->pushButton_Limpar->setEnabled(true);
    } catch (QString &erro) { QMessageBox::information(this,"ERRO",erro);}
}
