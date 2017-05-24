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
    try {//Monitorar
        //Obter valores
        float base = ui->lineEditBase->text().toFloat();
        float altura = ui->lineEditAltura->text().toFloat();
        //Armazenar os valores
        PrimeiraLista::Piramide piramideX;
        piramideX.setBase(base);
        piramideX.setAltura(altura);
        //criar saida
        QString saida = "VOLUME = "+QString::number(piramideX.calcularVolume());
        //Exibição
        ui->textEditSaida->setText(saida);


    } catch (QString &erro) {
        QMessageBox::information(this,"ERRO",erro);
    }
}
