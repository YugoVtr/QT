#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButtonAbrirArquivo_clicked()
{
    try {
        // criando um arquivo de entrada
        std::ifstream arquivo;

        //Buscando o arquivo no disco
        QString nomeDoArquivo = QFileDialog::getOpenFileName(this,"Abrir Arquivo",QDir::currentPath(),"Arquivos Textos (*.csv *.txt)");
        if(nomeDoArquivo.isEmpty()) throw QString("Arquivo nao foi selecionado");

        // abrindo um arquivo de entrada
        arquivo.open(nomeDoArquivo.toStdString().c_str());

        // verificando erro de abertura do arquivo de entrada
        if(!arquivo.is_open()){
            throw QString("ERRO Arquivo nao pode ser aberto");
        }

        std::string linha;
        QString texto;

        // lendo do arquivo
        getline(arquivo,linha);

        // Teste de fim do arquivo
        while(!arquivo.eof()){

            texto += QString::fromStdString(linha);
            texto += "\n";
            //lendo do arquivo
            getline(arquivo,linha);
        }
        // fechado o arquivo de entrada
        arquivo.close();
        ui->textEditSaida->setText(texto);

    } catch (...) {
        QMessageBox::information(this,"ERRO","erro");
    }



}


void MainWindow::on_pushButtonCriarNovoArquivo_clicked()
{
    try {
        QString texto = ui->textEditSaida->toPlainText();
        if(texto.isEmpty()) throw QString("Digitar o texto antes de Salvar");
        // criando um arquivo de entrada
        std::ofstream arquivo;

        //Buscando o arquivo no disco
        QString nomeDoArquivo = QFileDialog::getSaveFileName(this,"Criar Novo Arquivo",QDir::currentPath(),"Arquivos Textos (*.csv *.txt)");
        if(nomeDoArquivo.isEmpty()) throw QString("Arquivo nao foi selecionado");

        // abrindo um arquivo de entrada
        arquivo.open(nomeDoArquivo.toStdString().c_str());

        // verificando erro de abertura do arquivo de entrada
        if(!arquivo.is_open()){
            throw QString("ERRO Arquivo nao pode ser Criado");
        }

        arquivo<<texto.toStdString().c_str()<<std::endl;
        arquivo.close();
        ui->textEditSaida->clear();

    } catch (QString &erro) {
        QMessageBox::information(this,"ERRO",erro);
    }
}

void MainWindow::on_pushButtonLimparCaixa_clicked()
{
    ui->textEditSaida->clear();
}

void MainWindow::on_pushButtonIncluirNoFinal_clicked()
{
    try {
        QString texto = ui->textEditSaida->toPlainText();
        if(texto.isEmpty()) throw QString("Digitar o texto antes de Salvar");
        // criando um arquivo de entrada
        std::fstream arquivo;

        //Buscando o arquivo no disco
        QString nomeDoArquivo = QFileDialog::getOpenFileName(this,"Criar Novo Arquivo",QDir::currentPath(),"Arquivos Textos (*.csv *.txt)");
        if(nomeDoArquivo.isEmpty()) throw QString("Arquivo nao foi selecionado");

        // abrindo o arquivo no final
        arquivo.open(nomeDoArquivo.toStdString().c_str(),std::ios::out|std::ios::app);

        // verificando erro de abertura do arquivo de entrada
        if(!arquivo.is_open()){
            throw QString("ERRO Arquivo nao pode ser Criado");
        }

        arquivo<<"\n"<<texto.toStdString().c_str()<<std::endl;
        arquivo.close();
        ui->textEditSaida->clear();

    } catch (QString &erro) {
        QMessageBox::information(this,"ERRO",erro);
    }
}
