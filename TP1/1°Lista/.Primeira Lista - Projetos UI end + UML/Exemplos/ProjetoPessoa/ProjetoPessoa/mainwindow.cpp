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

void MainWindow::on_pushButtonExecutar_clicked()
{
    try {
        QString nome = ui->lineEditNomeCompleto->text();
        int peso = ui->lineEditPeso->text().toInt();
        float altura = ui->lineEditAltura->text().toFloat();
        QString sexo = ui->lineEditSexo->text();

        TP1::Pessoa jose;
        jose.setNomeCompleto(nome);
        jose.setPeso(peso);
        jose.setAltura(altura);
        jose.setSexo(sexo);

        QString saida;
        //Concatenação de string
        saida = " Nome: "+ jose.getNomeCompleto();
        saida+="\n";
        saida+="Peso: " + QString::number(jose.getPeso());
        saida+="\n";
        saida+= "Altura: " + QString::number(jose.getAltura());
        saida+= "\n";
        saida+= "Sexo "+jose.getSexo();
        saida+= "\n";
        saida+= "IMC: "+QString::number(jose.calcularIMC());
        ui->textEditSaida->setText(saida);

    } catch (QString &erro) {
        QMessageBox::information(this,"ERRO",erro);
    }
}
