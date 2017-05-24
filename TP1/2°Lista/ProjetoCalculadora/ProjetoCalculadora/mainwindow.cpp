#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow),
    visor("  ")
{
    ui->setupUi(this);
    ui->lineEditVisor->setEnabled(false);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButtonAdicionar_clicked()
{//SOMAR
    try
    {

        float numero1=ui->lineEditNumero1->text().toFloat();
        float numero2=ui->lineEditNumero2->text().toFloat();
        resultado.setNumero1(numero1);
        resultado.setNumero2(numero2);
        visor = QString::number(resultado.adicionar());
        ui->lineEditVisor->setText(visor);

    }catch(QString &erro){ QMessageBox::information(this,"ERRO",erro); }
}

void MainWindow::on_pushButtonSubtrair_clicked()
{//SUBTRAIR
    try
    {
        float numero1=ui->lineEditNumero1->text().toFloat();
        float numero2=ui->lineEditNumero2->text().toFloat();
        resultado.setNumero1(numero1);
        resultado.setNumero2(numero2);
        visor = QString::number(resultado.subtrair());
        ui->lineEditVisor->setText(visor);

    }catch(QString &erro){QMessageBox::information(this,"ERRO",erro); }
}

void MainWindow::on_pushButtonDividir_clicked()
{//DIVIDIR
    try
    {
        float numero1=ui->lineEditNumero1->text().toFloat();
        float numero2=ui->lineEditNumero2->text().toFloat();
        resultado.setNumero1(numero1);
        resultado.setNumero2(numero2);
        visor = QString::number(resultado.dividir());
        ui->lineEditVisor->setText(visor);

    }catch(QString &erro){ QMessageBox::information(this,"ERRO",erro);}
}

void MainWindow::on_pushButtonMutiplicar_clicked()
{
    try
    {//MULTIPLICAR

        float numero1=ui->lineEditNumero1->text().toFloat();
        float numero2=ui->lineEditNumero2->text().toFloat();
        resultado.setNumero1(numero1);
        resultado.setNumero2(numero2);
        visor = QString::number(resultado.multiplicar());
        ui->lineEditVisor->setText(visor);

    }catch(QString &erro){QMessageBox::information(this,"ERRO",erro);}
}

void MainWindow::on_pushButtonPotencia_clicked()
{//POTENCIAÇÃO
    try
    {
        float numero1=ui->lineEditNumero1->text().toFloat();
        float numero2=ui->lineEditNumero2->text().toFloat();
        resultado.setNumero1(numero1);
        resultado.setNumero2(numero2);
        visor = QString::number(resultado.calcularPotencia());
        ui->lineEditVisor->setText(visor);

    }catch(QString &erro){ QMessageBox::information(this,"ERRO",erro); }
}

void MainWindow::on_pushButtonRaiz_clicked()
{//RADICIAÇÃO
    try
    {
        float numero1=ui->lineEditNumero1->text().toFloat();
        float numero2=ui->lineEditNumero2->text().toFloat();
        resultado.setNumero1(numero1);
        resultado.setNumero2(numero2);
        visor = QString::number(resultado.calcularRaiz());
        ui->lineEditVisor->setText(visor);

    }catch(QString &erro){QMessageBox::information(this,"ERRO",erro);}
}
