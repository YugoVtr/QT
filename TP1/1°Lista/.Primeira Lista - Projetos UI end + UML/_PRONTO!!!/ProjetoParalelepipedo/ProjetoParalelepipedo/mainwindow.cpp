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
        //Obter valores
        float altura = ui->lineEditAltura->text().toFloat();
        float largura = ui->lineEditLargura->text().toFloat();
        float comprimento = ui->lineEditComprimento->text().toFloat();
        //Passar os valores por atributo
        PrimeiraLista::Paralelepipedo paralelepipedoX;
        paralelepipedoX.setAltura(altura);
        paralelepipedoX.setLargura(largura);
        paralelepipedoX.setComprimento(comprimento);
        //Saida
        QString saida = " VOLUME = "+QString::number(paralelepipedoX.calcularVolume());
        saida+= "\n AREA = "+QString::number(paralelepipedoX.calcularArea());
        //Exibiçao
        ui->textEditSaida->setText(saida);

    } catch (QString &erro) {
        QMessageBox::information(this,"ERRO",erro);
    }
}
