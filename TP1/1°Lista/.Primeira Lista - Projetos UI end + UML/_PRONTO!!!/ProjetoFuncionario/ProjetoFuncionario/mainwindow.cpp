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
        //Obter Valores no mainWindow
        QString nome = ui->lineEditNome->text();
        float salario = ui->lineEditSalario->text().toFloat();
        int numeroDeFilhos = ui->lineEditNumeroDeFilhos->text().toInt();
        float aumentoSalarial = ui->lineEditAumentoSalarial->text().toFloat();

        //Passar os valores por parametro
        PrimeiraLista::Funcionario funcionarioX;
        funcionarioX.setNomeCompleto(nome);
        funcionarioX.setSalarioDoMes(salario);
        funcionarioX.setNumeroDeFilhos(numeroDeFilhos);
        funcionarioX.calcularAumentoSalarial(aumentoSalarial);

        //saida
        QString saida = funcionarioX.getNomeCompleto() + " terá o valor mensal do IRPF ";
        if (funcionarioX.calcularValorMensalIRPF()>0.0){
            saida+= " no valor de R$ ";
            saida+= QString::number(funcionarioX.calcularValorMensalIRPF());
        }
        else {
            saida+= " ISENTO ";
        }
        ui->textEditSaida->setText(saida);

    } catch (QString &erro) {
        QMessageBox::information(this,"ERRO",erro);
    }
}
