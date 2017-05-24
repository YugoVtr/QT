#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->lineEditSaldo->setEnabled(false);
    ui->lineEditValor->setEnabled(false);

    ui->pushButtonDepositar->setEnabled(false);
    ui->pushButtonSacar->setEnabled(false);

}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButtonCriarConta_clicked()
{
    QString nome = ui->lineEditNomeDoCliente->text();
    int agencia = ui->lineEditAgencia->text().toInt();
    int numeroDaConta = ui->lineEditNumeroDaConta->text().toInt();

    conta.setNomeDoCliente(nome);
    conta.setAgencia(agencia);
    conta.setNumeroDaConta(numeroDaConta);
    ui->lineEditSaldo->setText("R$ 0.00");

    ui->lineEditNomeDoCliente->setEnabled(false);
    ui->lineEditAgencia->setEnabled(false);
    ui->lineEditNumeroDaConta->setEnabled(false);
    ui->pushButtonCriarConta->setEnabled(false);

    ui->pushButtonDepositar->setEnabled(true);
    ui->pushButtonSacar->setEnabled(true);
    ui->lineEditValor->setEnabled(true);


}

void MainWindow::on_pushButtonSacar_clicked()
{
    try {

        float valor = ui->lineEditValor->text().toFloat();
        conta.sacar(valor);
        QString saldo = " R$ "+ QString::number(conta.getSaldo());
        ui->lineEditSaldo->setText(saldo);
        ui->lineEditValor->clear();

    } catch (QString &erro) {
        QMessageBox::information(this,"ERRO",erro);
    }

}

void MainWindow::on_pushButtonDepositar_clicked()
{
    try {

        float valor = ui->lineEditValor->text().toFloat();
        conta.depositar(valor);
        QString saldo = " R$ "+ QString::number(conta.getSaldo());
        ui->lineEditSaldo->setText(saldo);
        ui->lineEditValor->clear();

    } catch (QString &erro) {
        QMessageBox::information(this,"ERRO",erro);
    }


}
