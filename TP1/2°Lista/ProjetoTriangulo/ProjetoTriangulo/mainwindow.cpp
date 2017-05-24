#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->textEditSaida->setEnabled(false);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButtonCalcular_clicked()
{
    try
    {//Monitoramento
        //Reseber valores
        float ladoA=ui->lineEditLadoA->text().toFloat();
        float ladoB=ui->lineEditLadoB->text().toFloat();
        float ladoC=ui->lineEditLadoC->text().toFloat();
        //Criar objetos e armazenar valores
        SegundaLista::Triangulo trianguloX;
        trianguloX.setLados(ladoA,ladoB,ladoC);
        //Criar saida
        QString saida= " Area = " + QString::number(trianguloX.calcularArea());
        saida += "\n Tipo por ANGULO = " + trianguloX.encontrarTipoPorAngulo();
        saida += "\n Tipo por LADO = " + trianguloX.encontrarTipoPorLado();
        //Exibir saida
        ui->textEditSaida->setText(saida);

    } catch (QString &erro) {QMessageBox::information(this,"ERRO",erro);}
}
