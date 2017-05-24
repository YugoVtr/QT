#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->lineEditConcluido->setEnabled(false);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButtonSalvar_clicked()
{
    try
    {
        long long int numero=ui->lineEditNumero->text().toLongLong();
        SegundaLista::CPF cpf;
        cpf.setCPF(numero);
        ui->lineEditNumero->clear();
        ui->lineEditConcluido->setText("Concluido");

    } catch (QString &erro) {QMessageBox::information(this,"ERRO",erro);}
}
