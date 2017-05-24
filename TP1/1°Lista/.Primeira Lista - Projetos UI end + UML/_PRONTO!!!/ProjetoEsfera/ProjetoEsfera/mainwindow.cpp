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
    try {//Monitoramento das excessoes

        //Armazenar o valor da LINE_EDIT
        float raio = ui->lineEditRaio->text().toFloat();
        //Criar Objeto e passar raio por parametro
        PrimeiraLista::Esfera esferaX;
        esferaX.setRaio(raio);

        //Criar variavel de saida
        QString saida = "VOLUME: "+QString::number(esferaX.calcularVolume());
        saida+="\n";
        saida+=" AREA: "+QString::number(esferaX.calcularArea());

        //solicitar saida
        ui->textEditSaida->setText(saida);

    } catch (QString &erro) {
        QMessageBox::information(this,"ERRO",erro);
    }
}
