#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow),
    duracel(0)
{
    ui->setupUi(this);
    //Desabilitar os botoes
    ui->lineEdit_InserirValor->setEnabled(false);
    ui->lineEdit_NumeroDeElementos->setEnabled(false);
    ui->pushButton_inserirElemento->setEnabled(false);
    ui->pushButton_RetirarElemento->setEnabled(false);
    ui->pushButton_NumeroDeElementos->setEnabled(false);
    ui->textEdit_Saida->setEnabled(false);
}

MainWindow::~MainWindow()
{
    delete ui;
    delete duracel;  //Deleta a pilha
}
void MainWindow::on_pushButton_CriarPilha_clicked()
{
    try
    {
        int tamanho = ui->lineEdit_TamanhodaPilhaCriada->text().toInt();
        duracel = new ED1::Pilha(tamanho); //Cria o objeto com o tamanho informado

        //Habilitar as operações e desabilita a criação
        ui->lineEdit_InserirValor->setEnabled(true);
        ui->pushButton_inserirElemento->setEnabled(true);
        ui->pushButton_RetirarElemento->setEnabled(true);
        ui->pushButton_NumeroDeElementos->setEnabled(true);

        ui->lineEdit_TamanhodaPilhaCriada->setEnabled(false);
        ui->pushButton_CriarPilha->setEnabled(false);
    } catch (QString &erro)
    {
        QMessageBox::information(this,"ASSIM NÃO DA",erro);
    }

}
void MainWindow::on_pushButton_inserirElemento_clicked()
{
    try
    {
            int elemento = ui->lineEdit_InserirValor->text().toInt();
            duracel->inserirElemento(elemento);

            ui->textEdit_Saida->setText(duracel->getPilha());
            ui->lineEdit_InserirValor->clear();
            ui->lineEdit_NumeroDeElementos->clear();
    } catch (QString &erro)
    {
        QMessageBox::information(this,"ERRO",erro);
    }
}

void MainWindow::on_pushButton_RetirarElemento_clicked()
{
    try
    {
        duracel->removerElemento();
        ui->textEdit_Saida->setText(duracel->getPilha());
        ui->lineEdit_NumeroDeElementos->clear();

    } catch (QString &erro)
    {
        QMessageBox::information(this,"ERRO",erro);
    }
}

void MainWindow::on_pushButton_NumeroDeElementos_clicked()
{
    try
    {
        QString saida = QString::number(duracel->numeroDeElementos());
        ui->lineEdit_NumeroDeElementos->setText(saida);

    } catch (QString &erro)
    {
        QMessageBox::information(this,"ERRO",erro);
    }
}

void MainWindow::on_lineEdit_TamanhodaPilhaCriada_returnPressed()
{
    this->on_pushButton_CriarPilha_clicked();
}

void MainWindow::on_lineEdit_InserirValor_returnPressed()
{
    this->on_pushButton_inserirElemento_clicked();
}
