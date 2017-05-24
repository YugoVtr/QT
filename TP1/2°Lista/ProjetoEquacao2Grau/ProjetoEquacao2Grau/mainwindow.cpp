#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->lineEditSaida->setEnabled(false);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButtonCalcular_clicked()
{
    try
    {
        int coeficienteA = ui->lineEditCoeficienteA->text().toInt();
        int coeficienteB = ui->lineEditCoeficienteB->text().toInt();
        int coeficienteC = ui->lineEditCoeficienteC->text().toInt();

        SegundaLista::Equacao2Grau equacao;
        equacao.setCoeficienteA(coeficienteA);
        equacao.setCoeficienteB(coeficienteB);
        equacao.setCoeficienteC(coeficienteC);

        ui->lineEditSaida->setText(equacao.calcularTipoDeRaiz());

    } catch (QString &erro) {QMessageBox::information(this,"ERRO",erro);}
}
