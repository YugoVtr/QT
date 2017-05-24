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
    try {//Monitora as excessoes quando clicar em CALCULAR

        //Receber o conteudos das LINE_EDIT e armazenar
        QString nome = ui->lineEditNome->text();
        int peso = ui->lineEditPeso->text().toInt();
        float altura = ui->lineEditAltura->text().toFloat();
        QString sexo = ui->lineEditSexo->text();

        //Cria o Objeto
        //Armazenar os valores recebidos nos atributos da classe via parametro
        PrimeiraLista::Pessoa pessoaX;
        pessoaX.setNome(nome);
        pessoaX.setPeso(peso);
        pessoaX.setAltura(altura);
        pessoaX.setSexo(sexo);

        //Armazenar os dados de saida via CONCATENAÇÃO em uma variavel QString
        QString saida;
        saida= "NOME: "+ pessoaX.getNome();
        saida+= "\n";
        saida+= "PESO: "+QString::number(pessoaX.getPeso());
        saida+= " Kg \n";
        saida+= "ALTURA: "+QString::number(pessoaX.getAltura());
        saida+= " m \n";
        saida+= "SEXO: "+pessoaX.getSexo();
        saida+= "\n\n";
        saida+= "IMC = "+ QString::number(pessoaX.calcularIMC());

        //Solicitar que a mensagem de saida seja exibita (SETada) na TEXT_EDIT
        ui->textEditSaida->setText(saida);

    } catch (QString &erro) {
        QMessageBox::information(this," ERRO ",erro);
    }
}
