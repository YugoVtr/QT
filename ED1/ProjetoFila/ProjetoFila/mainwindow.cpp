#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow),
    doBanco(0)
{
    ui->setupUi(this);
    ui->lineEdit_Inserir->setEnabled(false);
    ui->pushButton_Inserir->setEnabled(false);
    ui->lineEdit_Verificar->setEnabled(false);
    ui->pushButton_Verificar->setEnabled(false);
    ui->pushButton_Remover->setEnabled(false);
    ui->lineEdit_eVazio->setEnabled(false);
    ui->pushButton_eVazio->setEnabled(false);

}

MainWindow::~MainWindow()
{
    if(doBanco) delete doBanco;
    delete ui;    
}


void MainWindow::on_pushButton_Criar_clicked()
{
    try
    {
        doBanco = new ED1::Fila(ui->lineEdit_Tamanho->text().toInt());

        ui->lineEdit_Tamanho->setEnabled(false);
        ui->pushButton_Criar->setEnabled(false);

        ui->lineEdit_Inserir->setEnabled(true);
        ui->pushButton_Inserir->setEnabled(true);
        ui->lineEdit_Verificar->setEnabled(true);
        ui->pushButton_Verificar->setEnabled(true);
        ui->pushButton_Remover->setEnabled(true);
        ui->lineEdit_eVazio->setEnabled(true);
        ui->pushButton_eVazio->setEnabled(true);
    }
    catch(QString &erro){QMessageBox::information(this,"ERRO",erro);}
}

void MainWindow::on_pushButton_Inserir_clicked()
{
    try
    {
        ui->lineEdit_Verificar->clear();
        ui->lineEdit_eVazio->clear();

        int valor = ui->lineEdit_Inserir->text().toInt();
        doBanco->inserir(valor);

        ui->lineEdit_Inserir->clear();
    }
    catch(QString &erro){QMessageBox::information(this,"ERRO",erro);}
}

void MainWindow::on_pushButton_Remover_clicked()
{
    try
    {
        ui->lineEdit_Inserir->clear();
        ui->lineEdit_Verificar->clear();
        ui->lineEdit_eVazio->clear();

        doBanco->remover();
    }
    catch(QString &erro){QMessageBox::information(this,"ERRO",erro);}
}

void MainWindow::on_pushButton_Verificar_clicked()
{
    try
    {
        ui->lineEdit_Inserir->clear();
        ui->lineEdit_eVazio->clear();

        int valor = doBanco->acessar();
        ui->lineEdit_Verificar->setText(QString::number(valor));
    }
    catch(QString &erro){QMessageBox::information(this,"ERRO",erro);}
}

void MainWindow::on_pushButton_eVazio_clicked()
{
    ui->lineEdit_Inserir->clear();
    ui->lineEdit_Verificar->clear();

    QString saida = "Nao";
    if(doBanco->eVazia()) saida = "Sim";
    ui->lineEdit_eVazio->setText(saida);
}
