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

void MainWindow::on_pushButtonCalcular_clicked()
{
    try {//Monitoramento
        //Obter Valores
        float largura = ui->lineEditLargura->text().toFloat();
        float comprimento = ui->lineEditComprimento->text().toFloat();
        //Passar por parametro
        PrimeiraLista::Retangulo retanguloX;
        retanguloX.setComprimento(comprimento);
        retanguloX.setLargura(largura);
        //Saida
        QString saida = "AREA = "+QString::number(retanguloX.calcularArea());
        saida+="\n PERIMETRO = "+QString::number(retanguloX.calcularPerimetro());
        //Exibição da saida
        ui->textEditSaida->setText(saida);


    } catch (QString &erro) {
        QMessageBox::information(this,"ERRO",erro);
    }
}
