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

void MainWindow::on_pushButtonSomar_clicked()
{
    try
    {
        int parteRealNumero1 = ui->lineEditParteRealNumero1->text().toInt();
        int parteImaginariaNumero1 = ui->lineEditParteImaginariaNumero1->text().toInt();
        numeroComplexo1.set(parteRealNumero1,parteImaginariaNumero1);
        int parteRealNumero2 = ui->lineEditParteRealNumero2->text().toInt();
        int parteImaginariaNumero2 = ui->lineEditParteImaginariaNumero2->text().toInt();
        numeroComplexo2.set(parteRealNumero2,parteImaginariaNumero2);

        resultado=numeroComplexo1+numeroComplexo2;
        ui->lineEditSaida->setText(resultado.get());
    } catch (QString &erro) {QMessageBox::information(this,"ERRO",erro);}
}

void MainWindow::on_pushButtonSubtrair_clicked()
{
    try
    {
        int parteRealNumero1 = ui->lineEditParteRealNumero1->text().toInt();
        int parteImaginariaNumero1 = ui->lineEditParteImaginariaNumero1->text().toInt();
        numeroComplexo1.set(parteRealNumero1,parteImaginariaNumero1);
        int parteRealNumero2 = ui->lineEditParteRealNumero2->text().toInt();
        int parteImaginariaNumero2 = ui->lineEditParteImaginariaNumero2->text().toInt();
        numeroComplexo2.set(parteRealNumero2,parteImaginariaNumero2);

       resultado=numeroComplexo1-numeroComplexo2;
        ui->lineEditSaida->setText(resultado.get());
    } catch (QString &erro) {QMessageBox::information(this,"ERRO",erro);}
}

void MainWindow::on_pushButtonMultiplicar_clicked()
{
    try
    {
        int parteRealNumero1 = ui->lineEditParteRealNumero1->text().toInt();
        int parteImaginariaNumero1 = ui->lineEditParteImaginariaNumero1->text().toInt();
        numeroComplexo1.set(parteRealNumero1,parteImaginariaNumero1);
        int parteRealNumero2 = ui->lineEditParteRealNumero2->text().toInt();
        int parteImaginariaNumero2 = ui->lineEditParteImaginariaNumero2->text().toInt();
        numeroComplexo2.set(parteRealNumero2,parteImaginariaNumero2);

        resultado=numeroComplexo1*numeroComplexo2;
        ui->lineEditSaida->setText(resultado.get());
    } catch (QString &erro) {QMessageBox::information(this,"ERRO",erro);}
}

void MainWindow::on_pushButtonDividir_clicked()
{
    try
    {
        int parteRealNumero1 = ui->lineEditParteRealNumero1->text().toInt();
        int parteImaginariaNumero1 = ui->lineEditParteImaginariaNumero1->text().toInt();
        numeroComplexo1.set(parteRealNumero1,parteImaginariaNumero1);
        int parteRealNumero2 = ui->lineEditParteRealNumero2->text().toInt();
        int parteImaginariaNumero2 = ui->lineEditParteImaginariaNumero2->text().toInt();
        numeroComplexo2.set(parteRealNumero2,parteImaginariaNumero2);

        resultado=numeroComplexo1/numeroComplexo2;
        ui->lineEditSaida->setText(resultado.get());
    } catch (QString &erro) {QMessageBox::information(this,"ERRO",erro);}
}

void MainWindow::on_pushButtonIgualdade_clicked()
{
    try
    {
        int parteRealNumero1 = ui->lineEditParteRealNumero1->text().toInt();
        int parteImaginariaNumero1 = ui->lineEditParteImaginariaNumero1->text().toInt();
        numeroComplexo1.set(parteRealNumero1,parteImaginariaNumero1);
        int parteRealNumero2 = ui->lineEditParteRealNumero2->text().toInt();
        int parteImaginariaNumero2 = ui->lineEditParteImaginariaNumero2->text().toInt();
        numeroComplexo2.set(parteRealNumero2,parteImaginariaNumero2);

        if(numeroComplexo1==numeroComplexo2) saida="SIM";
        else saida="NÃO";
        ui->lineEditSaida->setText(saida);
    }  catch (QString &erro) {QMessageBox::information(this,"ERRO",erro);}

}

void MainWindow::on_pushButtonDiferenca_clicked()
{
    try
    {
        int parteRealNumero1 = ui->lineEditParteRealNumero1->text().toInt();
        int parteImaginariaNumero1 = ui->lineEditParteImaginariaNumero1->text().toInt();
        numeroComplexo1.set(parteRealNumero1,parteImaginariaNumero1);
        int parteRealNumero2 = ui->lineEditParteRealNumero2->text().toInt();
        int parteImaginariaNumero2 = ui->lineEditParteImaginariaNumero2->text().toInt();
        numeroComplexo2.set(parteRealNumero2,parteImaginariaNumero2);

        if(numeroComplexo1!=numeroComplexo2) saida="SIM";
        else saida="NÃO";
        ui->lineEditSaida->setText(saida);
    }  catch (QString &erro) {QMessageBox::information(this,"ERRO",erro);}
}
