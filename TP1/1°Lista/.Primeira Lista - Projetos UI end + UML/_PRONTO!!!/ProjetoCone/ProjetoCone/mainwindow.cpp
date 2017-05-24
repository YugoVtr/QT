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

        //Receber valores das  LINE_EDIT
        float altura = ui->lineEditAltura->text().toFloat();
        float raio = ui->lineEditRaio->text().toFloat();

        //Criar Objeto
        PrimeiraLista::Cone coneX;
        //Passar parametros para os atributos
        coneX.setAltura(altura);
        coneX.setRaio(raio);

        //Criar variavel para saida atraves de CONCATENAÇÃO
        QString saida;
        saida = " VOLUME = "+QString::number(coneX.calcularVolume());
        saida+= "\n";
        saida+= " AREA LATERAL = "+QString::number(coneX.calcularAreaLateral());
        saida+= "\n";
        saida+= " AREA TOTAL = "+QString::number(coneX.calcularAreaTotal());

        //Solicitar a TEXT_EDIT a saida
        ui->textEdit->setText(saida);

    } catch (QString &erro) {
        QMessageBox::information(this," ERRO ",erro);
    }
}
