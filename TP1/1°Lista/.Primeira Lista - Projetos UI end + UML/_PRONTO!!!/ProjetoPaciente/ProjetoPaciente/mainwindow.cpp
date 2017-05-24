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
    try {//Monitoramento das exeções

        //capturar as informações
        QString nome = ui->lineEditNome->text();
        int peso = ui->lineEditPeso->text().toInt();
        float altura = ui->lineEditAltura->text().toFloat();

        //Criar valore porpassar valores por parametro
        PrimeiraLista::Paciente pacienteX;
        pacienteX.setNome(nome);
        pacienteX.setPeso(peso);
        pacienteX.setAltura(altura);

        //Variavel para saida
        QString saida;
        saida = pacienteX.getNome()+" esta "+pacienteX.calcularFaixaDePeso();
        ui->lineEditSaida->setText(saida);

    } catch (QString &erro) {
        QMessageBox::information(this,"ERRO",erro);
    }
}
