#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow),
    showRoster("")
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_InserirNoInicio_clicked()
{
    try
    {
        //int informacao = ui->lineEdit_Informacao->text().toInt();
        QString informacao = ui->lineEdit_Informacao->text(); //AQUI
        roster.incluirInicio(informacao);
        this->armazenarLista();
        ui->lineEdit_Informacao->clear();
        ui->label_Saida->setText(showRoster);
        this->ajustarTamanho();
    }
    catch (QString &erro) { QMessageBox::information(this,"ERRO",erro);   }
}

void MainWindow::on_pushButton_RemoverNoInicio_clicked()
{
    try
    {
        //QString removido = QString::number(roster.removerInicio());
        QString removido = roster.removerInicio();//AQUI
        this->armazenarLista();
        ui->label_Saida->setText(showRoster);
        this->ajustarTamanho();
        QMessageBox::about(this,"Informação",removido);
    }
    catch (QString &erro) { QMessageBox::information(this,"ERRO",erro);   }
}

void MainWindow::on_pushButton_InserirNoFinal_clicked()
{
    try
    {
        //int informacao = ui->lineEdit_Informacao->text().toInt();
        QString informacao = ui->lineEdit_Informacao->text(); //AQUI
        roster.incluirFinal(informacao);
        this->armazenarLista();
        ui->lineEdit_Informacao->clear();
        ui->label_Saida->setText(showRoster);
        this->ajustarTamanho();
    }
    catch (QString &erro) { QMessageBox::information(this,"ERRO",erro);   }
}

void MainWindow::on_pushButton_RemoverNoFinal_clicked()
{
    try
    {
        //QString removido = QString::number(roster.removerFinal());
        QString removido = roster.removerFinal(); //AQUI
        this->armazenarLista();
        ui->label_Saida->setText(showRoster);
        this->ajustarTamanho();
        ui->lineEdit_Informacao->clear();
        QMessageBox::about(this,"Informação",removido);
    }
    catch (QString &erro) { QMessageBox::information(this,"ERRO",erro);   }
}

void MainWindow::on_pushButton_InserirNaPosicao_clicked()
{
    try
    {
        //int informacao = ui->lineEdit_Informacao->text().toInt();
        QString informacao = ui->lineEdit_Informacao->text(); //AQUI
        int posicao = ui->lineEdit_Posicao->text().toInt();
        roster.incluirNaPosicao(informacao,posicao);
        this->armazenarLista();
        ui->lineEdit_Informacao->clear();
        ui->lineEdit_Posicao->clear();
        ui->label_Saida->setText(showRoster);
        this->ajustarTamanho();
    }
    catch (QString &erro) { QMessageBox::information(this,"ERRO",erro);   }
}

void MainWindow::on_pushButton_RemoverNaPosicao_clicked()
{
    try
    {
        int posicao = ui->lineEdit_Posicao->text().toInt();
        //QString removido = QString::number(roster.removerNaPosicao(posicao));
        QString removido = roster.removerNaPosicao(posicao); //AQUI
        this->armazenarLista();
        ui->lineEdit_Posicao->clear();
        ui->label_Saida->setText(showRoster);
        this->ajustarTamanho();
        QMessageBox::about(this,"Informação",removido);
    }
    catch (QString &erro) { QMessageBox::information(this,"ERRO",erro);   }
}


void MainWindow::on_pushButton_RemoverInformacao_clicked()
{
    try
    {
       //int informacao = ui->lineEdit_Informacao->text().toInt();
       QString informacao = ui->lineEdit_Informacao->text(); //AQUI
       int quantidade = roster.removerInformacao(informacao);
       this->armazenarLista();
       ui->lineEdit_Informacao->clear();
       ui->label_Saida->setText(showRoster);
       this->ajustarTamanho();
       QMessageBox::about(this,"Numero de remoções",QString::number(quantidade) + " Nós foram removidos");
    }
    catch (QString &erro) { QMessageBox::information(this,"ERRO",erro);   }
}

void MainWindow::on_pushButton_AcessarInformacao_clicked()
{
    try
    {
       //int posicao = roster.acessarInformacao(ui->lineEdit_Informacao->text().toInt());
       int posicao = roster.acessarInformacao(ui->lineEdit_Informacao->text()); //AQUI
       ui->lineEdit_Informacao->clear();
       QString saida = "Encontrado na posição -> " + QString::number(posicao) ;
       if(posicao==0) saida = "Não encontrado";
       QMessageBox::about(this,"Posição encontrada",saida);
    }
    catch (QString &erro) { QMessageBox::information(this,"ERRO",erro);   }
}

void MainWindow::on_pushButton_Tamanho_clicked()
{
    QMessageBox::about(this,"Tamanho","Tamanho -> "+QString::number(roster.obterTamanho()));
}

void MainWindow::on_pushButton_Vazio_clicked()
{
    QString resposta = " NÃO ";
    if(roster.eVazio()) resposta = " SIM ";
    QMessageBox::about(this," Vazio ?", resposta);
}

void MainWindow::on_pushButton_Limpar_clicked()
{
    roster.~Lista_LSE_Circular();
    this->armazenarLista();
    ui->label_Saida->setText(showRoster);
    this->ajustarTamanho();
}

void MainWindow::armazenarLista()
{
    try
    {
        showRoster = "|  ";
        for(int contador=1 ; contador<=this->roster.obterTamanho() ; contador++)
        {
            //showRoster += QString::number(roster.acessarPosicao(contador))+ "  |  ";
            showRoster += roster.acessarPosicao(contador)+ "  |  "; //AQUI
        }
        if(roster.eVazio()) showRoster = "EMPTY";
    }
    catch (QString &erro) { QMessageBox::information(this,"ERRO",erro);   }
}
void MainWindow::ajustarTamanho()
{
    ui->label_Saida->adjustSize();
    int tamanhoMinimo = 270;

    QRect nova = this->geometry();
    QRect line = ui->line->geometry();
    QRect line_2 = ui->line_2->geometry();

    nova.setWidth(300);
    line.setWidth(271);
    line_2.setWidth(271);

    if(ui->label_Saida->width()>tamanhoMinimo)
    {
       int novoTamanho = ui->label_Saida->width()*1.08;
       nova.setWidth(novoTamanho);

       line.setWidth(ui->label_Saida->width());
       line_2.setWidth(ui->label_Saida->width());
    }

    this->setGeometry(nova);
    ui->line->setGeometry(line);
    ui->line_2->setGeometry(line_2);
}
