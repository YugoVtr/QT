#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow),
    tratamento_Valor(0)
{
    ui->setupUi(this);
    ui->lineEdit_Resultado->setEnabled(false);

    //LineEdit_Valor
    QRegExp tratamentoValor("[0-9]*");
    tratamento_Valor = new QRegExpValidator(tratamentoValor,ui->lineEdit_ValorParaEnviar);
    ui->lineEdit_ValorParaEnviar->setValidator(tratamento_Valor);
}

MainWindow::~MainWindow()
{
    delete tratamento_Valor;
    delete ui;
}

void MainWindow::on_pushButton_EnviarValor_clicked()
{
    try {
        int valor = ui->lineEdit_ValorParaEnviar->text().toInt(); //Armazena o valor decimal
        int base = ui->comboBox->currentText().toInt(); // Armazena a base destino
        if(base<2 || base>16) throw QString ("Base invalida");
        ED1::Pilha armazenarResto(100); //Pilha para armazenar o resto

        for(int contador = valor ; contador!=0 ; contador=contador/base ) //Preencher a pilha com os restos
        {
            armazenarResto.inserirElemento(contador%base); // Empilha os valores (restos das divisões)
        }

        QString posicao="0123456789ABCDEF"; //Vetor de char que define qual elemento entra na resposta
        QString resposta = ""; // armazena a resposta da conversão
        while(!armazenarResto.ePilhaVazia())
        {
            resposta = resposta + posicao[armazenarResto.acessarElementoTopo()]; //Acessa a posição de acordo com o valor do topo
            armazenarResto.removerElemento(); //Desempilha o elemento do topo
        }
        ui->lineEdit_Resultado->setText(resposta); // Exibe a resposta

    } catch (QString &erro)
    {
        QMessageBox::information(this,"ERRO",erro);
    }

}

