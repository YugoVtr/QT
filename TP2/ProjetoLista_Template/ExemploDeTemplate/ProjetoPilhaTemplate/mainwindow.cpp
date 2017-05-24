#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow),
    objPilha(5)
{
    ui->setupUi(this);
    ui->lineEditQuantidadeDeElementos->setEnabled(false);
    ui->textEditSaida->setEnabled(false);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButtonEmpilhar_clicked()
{
    try {
        int elemento = ui->lineEditElemento->text().toInt();
        objPilha.push(elemento);
        ui->lineEditElemento->clear();
        ui->lineEditQuantidadeDeElementos->setText(QString::number(objPilha.size()));
    } catch (QString &erro) {
        QMessageBox::information(this,"CATCH",erro);
    }
}

void MainWindow::on_pushButtonMostrarDados_clicked()
{
    try {
        QString saida = "";
        while(!objPilha.empty()){
            saida += "Elemento: " + QString::number(objPilha.top()) + "\n";
            objPilha.pop();
        }
        ui->textEditSaida->setText(saida);
        ui->lineEditQuantidadeDeElementos->clear();
        ui->lineEditQuantidadeDeElementos->setText(QString::number(objPilha.size()));
    } catch (QString &erro) {
        QMessageBox::information(this,"CATCH",erro);
    }
}
