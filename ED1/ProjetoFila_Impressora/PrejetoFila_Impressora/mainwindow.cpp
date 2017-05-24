#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow),
    filaDeImpressao(0),
    imprimir_Na_1(0),
    imprimir_Na_2(0),
    quantidadeParaImprimir(0)
{
    ui->setupUi(this);    
    filaDeImpressao = new ED1::Fila(5);
    quantidadeParaImprimir = new int(0);
    imprimir_Na_1 = new ED1::Imprimir(ui->label_Impressora_1, this->filaDeImpressao, this->quantidadeParaImprimir,
                                      ui->label_FilaDeImpressao, ui->label_MostrarFila);

    imprimir_Na_2 = new ED1::Imprimir(ui->label_Impressora_2, this->filaDeImpressao, this->quantidadeParaImprimir,
                                      ui->label_FilaDeImpressao, ui->label_MostrarFila);

    ui->label_FilaDeImpressao->setText(QString::number(*quantidadeParaImprimir));
    ui->label_Impressora_1->setStyleSheet("border: 1px solid grey");
    ui->label_Impressora_2->setStyleSheet("border: 1px solid grey");
    this->setFixedSize(this->width(),this->height());
}

MainWindow::~MainWindow()
{
    imprimir_Na_1->terminate();
    imprimir_Na_2->terminate();
    delete filaDeImpressao;
    delete quantidadeParaImprimir;
    delete imprimir_Na_1;
    delete imprimir_Na_2; 
    delete ui;
}

void MainWindow::on_pushButton_Enviar_clicked()
{
    try
    {
        if(!ui->textEdit_ParaImprimir->toPlainText().isEmpty()) //Se não mandar texto, não precisa fazer nada
        {
            QString imprimir = ui->textEdit_ParaImprimir->toPlainText(); //Pega o texto
            filaDeImpressao->inserir(imprimir); //Manda para fila

            (*quantidadeParaImprimir)= (*quantidadeParaImprimir)+1; //Mais um para imprimir
            ui->label_FilaDeImpressao->setText(QString::number(*quantidadeParaImprimir)); //Mostra quantos falta a imprimir

            ui->textEdit_ParaImprimir->clear();
            if(!imprimir_Na_1->isRunning())imprimir_Na_1->start(QThread::HighPriority);
            if(!imprimir_Na_2->isRunning()) imprimir_Na_2->start(QThread::LowPriority);

            ui->label_MostrarFila->setText(filaDeImpressao->getFila());
        }
    } catch (QString &erro) {QMessageBox::information(this,"ERRO",erro);}
}

