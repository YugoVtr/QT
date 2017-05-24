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

void MainWindow::on_pushButtonSemTratamento_clicked()
{
    int valor1 = ui->lineEditValor1->text().toInt();
    int valor2 = ui->lineEditValor2->text().toInt();
    DividirSemTratamento testeSem(valor1,valor2);
    int resultado = testeSem.dividir();
    QString saida = "Resultado da Divisao\n";
    saida += "valor = " + QString::number(resultado);
    ui->textEditSaida->setText(saida);
}

void MainWindow::on_pushButtonComTratamento_clicked()
{
    int valor1 = ui->lineEditValor1->text().toInt();
    int valor2 = ui->lineEditValor2->text().toInt();
    try{
        DividirComTratamento testeCom(valor1,valor2);
        int resultado = testeCom.dividir();
        QString saida = "Resultado da Divisao\n";
        saida += "valor = " + QString::number(resultado);
        ui->textEditSaida->setText(saida);
    }catch(QString erro){
        QMessageBox::information(this,"ERRO NO SISTEMA",erro);
    }

}
