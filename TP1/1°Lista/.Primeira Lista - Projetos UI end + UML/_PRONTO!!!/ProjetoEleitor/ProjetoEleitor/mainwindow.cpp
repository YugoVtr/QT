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

        //Quardar valores nas LINE_EDIT
        QString nome = ui->lineEditNome->text();
        int anoDeNascimento = ui->lineEditAnoDeNascimento->text().toInt();

        //Criar Objeto
        PrimeiraLista::Eleitor eleitorX;
        //Passar os valores por parametro
        eleitorX.setNome(nome);
        eleitorX.setAnoDeNascimento(anoDeNascimento);

        //Criar variavel de saida
        QString saida = eleitorX.calcularTipoDeEleitor();

        //Solicitar a exibição da saida
        ui->lineEditSaida-> setText(saida);

    } catch (QString &erro) {
        QMessageBox::information(this,"ERRO",erro);
    }
}
