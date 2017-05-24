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
    try {//Monitora as excessoes

        //Captura as iformaçoes na LINE_EDIT
        float altura=ui->lineEditAltura->text().toFloat();
        float raio=ui->lineEditRaio->text().toFloat();

        //Cria o OBjeto
        PrimeiraLista::Cilindro cilindroX;
        //Armazena as informações nos atributos
        cilindroX.setAltura(altura);
        cilindroX.setRaio(raio);

        //Criar variavel de saida
        QString saida;
        saida = "VOLUME =  "+QString::number(cilindroX.calcularVolume());
        saida+= "\n";
        saida+= "AREA LATERAL = "+QString::number(cilindroX.calcularAreaLateral());
        saida+= "\n";
        saida+= "AREA TOTAL = "+QString::number(cilindroX.calcularAreaTotal());

        //solicitar a exibição da saida
        ui->textEditSaida->setText(saida);

    } catch (QString &erro) {
        QMessageBox::information(this," ERRO ",erro);
    }
}
