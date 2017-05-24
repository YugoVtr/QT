#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow),
    start(0)
{
    ui->setupUi(this);

    ui->lineEdit_ElementoParaBusca->setEnabled(false);
    ui->lineEdit_ElementoParaIncluir->setEnabled(false);
    ui->lineEdit_ElementoParaRemover->setEnabled(false);
    ui->lineEdit_ElementoParaSubstituir->setEnabled(false);
    ui->lineEdit_PosicaoParaIncluir->setEnabled(false);
    ui->lineEdit_PosicaoParaObterElemento->setEnabled(false);
    ui->lineEdit_PosicaoParaRemover->setEnabled(false);
    ui->lineEdit_PosicaoParaSubstituir->setEnabled(false);

    ui->pushButton_BuscarElemento->setEnabled(false);
    ui->pushButton_eVazia->setEnabled(false);
    ui->pushButton_IncluirNaPosicao->setEnabled(false);
    ui->pushButton_IncluirNoFim->setEnabled(false);
    ui->pushButton_IncluirNoInicio->setEnabled(false);
    ui->pushButton_ObterElemento->setEnabled(false);
    ui->pushButton_QuantidadeDeElementos->setEnabled(false);
    ui->pushButton_RemoverElementoEspecifico->setEnabled(false);
    ui->pushButton_RemoverNaPosicao->setEnabled(false);
    ui->pushButton_RemoverTodosElementos->setEnabled(false);
    ui->pushButton_SubstituirElemento->setEnabled(false);
    ui->label_Saida->setStyleSheet("border: 1px solid grey");

}

MainWindow::~MainWindow()
{
    if(start) delete start;
    delete ui;
}

void MainWindow::on_pushButton_CriarComTamanho_clicked()
{
    try
    {
      start = new TP2::Lista_Template<int>(ui->lineEdit_Tamanho->text().toInt()); //AQUI

      ui->label_Saida->setText(start->getFila());
      this->ajustarTamanho();
      ui->lineEdit_Tamanho->clear();

      ui->lineEdit_ElementoParaBusca->setEnabled(true);
      ui->lineEdit_ElementoParaIncluir->setEnabled(true);
      ui->lineEdit_ElementoParaRemover->setEnabled(true);
      ui->lineEdit_ElementoParaSubstituir->setEnabled(true);
      ui->lineEdit_PosicaoParaIncluir->setEnabled(true);
      ui->lineEdit_PosicaoParaObterElemento->setEnabled(true);
      ui->lineEdit_PosicaoParaRemover->setEnabled(true);
      ui->lineEdit_PosicaoParaSubstituir->setEnabled(true);

      ui->pushButton_BuscarElemento->setEnabled(true);
      ui->pushButton_eVazia->setEnabled(true);
      ui->pushButton_IncluirNaPosicao->setEnabled(true);
      ui->pushButton_IncluirNoFim->setEnabled(true);
      ui->pushButton_IncluirNoInicio->setEnabled(true);
      ui->pushButton_ObterElemento->setEnabled(true);
      ui->pushButton_QuantidadeDeElementos->setEnabled(true);
      ui->pushButton_RemoverElementoEspecifico->setEnabled(true);
      ui->pushButton_RemoverNaPosicao->setEnabled(true);
      ui->pushButton_RemoverTodosElementos->setEnabled(true);
      ui->pushButton_SubstituirElemento->setEnabled(true);

      ui->lineEdit_Tamanho->setEnabled(false);
      ui->pushButton_CriarComDefalt->setEnabled(false);
      ui->pushButton_CriarComTamanho->setEnabled(false);

    } catch (std::bad_alloc) { QMessageBox::information(this,"ERRO","TU TA SEM MEMORIA"); }
      catch (QString &erro) { QMessageBox::information(this,"ERRO",erro); }
}

void MainWindow::on_pushButton_CriarComDefalt_clicked()
{
    try
    {
      start = new TP2::Lista_Template<int>(); //AQUI

      ui->label_Saida->setText(start->getFila());
      this->ajustarTamanho();
      ui->lineEdit_Tamanho->clear();

      ui->lineEdit_ElementoParaBusca->setEnabled(true);
      ui->lineEdit_ElementoParaIncluir->setEnabled(true);
      ui->lineEdit_ElementoParaRemover->setEnabled(true);
      ui->lineEdit_ElementoParaSubstituir->setEnabled(true);
      ui->lineEdit_PosicaoParaIncluir->setEnabled(true);
      ui->lineEdit_PosicaoParaObterElemento->setEnabled(true);
      ui->lineEdit_PosicaoParaRemover->setEnabled(true);
      ui->lineEdit_PosicaoParaSubstituir->setEnabled(true);

      ui->pushButton_BuscarElemento->setEnabled(true);
      ui->pushButton_eVazia->setEnabled(true);
      ui->pushButton_IncluirNaPosicao->setEnabled(true);
      ui->pushButton_IncluirNoFim->setEnabled(true);
      ui->pushButton_IncluirNoInicio->setEnabled(true);
      ui->pushButton_ObterElemento->setEnabled(true);
      ui->pushButton_QuantidadeDeElementos->setEnabled(true);
      ui->pushButton_RemoverElementoEspecifico->setEnabled(true);
      ui->pushButton_RemoverNaPosicao->setEnabled(true);
      ui->pushButton_RemoverTodosElementos->setEnabled(true);
      ui->pushButton_SubstituirElemento->setEnabled(true);

      ui->lineEdit_Tamanho->setEnabled(false);
      ui->pushButton_CriarComDefalt->setEnabled(false);
      ui->pushButton_CriarComTamanho->setEnabled(false);

    } catch (std::bad_alloc) { QMessageBox::information(this,"ERRO","TU TA SEM MEMORIA"); }
      catch (QString &erro) { QMessageBox::information(this,"ERRO",erro); }
}

void MainWindow::on_pushButton_RemoverTodosElementos_clicked()
{
    try
    {
      this->start->removerElementos();
      ui->label_Saida->setText(start->getFila());
      this->ajustarTamanho();
    } catch (QString &erro) { QMessageBox::information(this,"ERRO",erro); }
}

void MainWindow::on_pushButton_IncluirNoFim_clicked()
{
    try
    {
        start->incluirElemento_Final(ui->lineEdit_ElementoParaIncluir->text().toInt()); //AQUI
        ui->label_Saida->setText(start->getFila());
        this->ajustarTamanho();
        ui->lineEdit_ElementoParaIncluir->clear();
    } catch (QString &erro) { QMessageBox::information(this,"ERRO",erro); }
}

void MainWindow::on_pushButton_IncluirNoInicio_clicked()
{
    try
    {
        start->incluirElemento_Inicio(ui->lineEdit_ElementoParaIncluir->text().toInt()); //AQUI
        ui->label_Saida->setText(start->getFila());
        this->ajustarTamanho();
        ui->lineEdit_ElementoParaIncluir->clear();
    } catch (QString &erro) { QMessageBox::information(this,"ERRO",erro); }
}

void MainWindow::on_pushButton_IncluirNaPosicao_clicked()
{
    try
    {
        int posicao = ui->lineEdit_PosicaoParaIncluir->text().toInt();
        start->incluirElemento_Posicao(posicao-1,ui->lineEdit_ElementoParaIncluir->text().toInt()); //AQUI
        ui->label_Saida->setText(start->getFila());
        this->ajustarTamanho();
        ui->lineEdit_ElementoParaIncluir->clear();
    } catch (QString &erro) { QMessageBox::information(this,"ERRO",erro); }
}

void MainWindow::on_pushButton_BuscarElemento_clicked()
{
    try
    {
        int elemento = start->buscarElemento(ui->lineEdit_ElementoParaBusca->text().toInt()); //AQUI
        QString resultado = "Elemento encontrado na posição "+ QString::number(elemento+1)+ " da lista";
        if(elemento==-1) resultado = "NÃO ENCONTRADO";
        QMessageBox::about(this,"Busca",resultado);
    } catch (QString &erro) { QMessageBox::information(this,"ERRO",erro); }
}

void MainWindow::on_pushButton_ObterElemento_clicked()
{
    try
    {
        int posicao = ui->lineEdit_PosicaoParaObterElemento->text().toInt();
        int elemento = (*start)[posicao-1];  //AQUI
        QString resultado = " O elemento na posicao "+ QString::number(posicao)+ " e: " + QString::number(elemento); //AQUI
        QMessageBox::about(this,"Obter Elemento na posicao",resultado);
    } catch (QString &erro) { QMessageBox::information(this,"ERRO",erro); }
}

void MainWindow::on_pushButton_eVazia_clicked()
{
    try
    {
        QString resultado = "NÃO";
        if(start->eVazia()) resultado = "SIM";
        QMessageBox::about(this,"E vazio",resultado);
    } catch (QString &erro) { QMessageBox::information(this,"ERRO",erro); }
}

void MainWindow::on_pushButton_RemoverNaPosicao_clicked()
{
    try
    {
        int posicao = ui->lineEdit_PosicaoParaRemover->text().toInt();
        start->removerElemento_Posicao(posicao-1);
        ui->label_Saida->setText(start->getFila());
    } catch (QString &erro) { QMessageBox::information(this,"ERRO",erro); }
}

void MainWindow::on_pushButton_RemoverElementoEspecifico_clicked()
{
    try
    {
        int quantidade = start->verificar_Quantidade_Elementos();
        int elemento = ui->lineEdit_ElementoParaRemover->text().toInt();//AQUI
        start->removerElemento_Especifico(elemento);
        quantidade = quantidade - start->verificar_Quantidade_Elementos();
        QMessageBox::about(this,"Removidos","Foram removidos -->"+QString::number(quantidade)+" elementos.");
        ui->label_Saida->setText(start->getFila());

    } catch (QString &erro) { QMessageBox::information(this,"ERRO",erro); }
}

void MainWindow::on_pushButton_SubstituirElemento_clicked()
{
    try
    {
        int elemento = ui->lineEdit_ElementoParaSubstituir->text().toInt();//AQUI
        int posicao = ui->lineEdit_PosicaoParaSubstituir->text().toInt();
        start->substituirElemento_Posicao(posicao-1,elemento);
        ui->label_Saida->setText(start->getFila());
    } catch (QString &erro) { QMessageBox::information(this,"ERRO",erro); }
}

void MainWindow::on_pushButton_QuantidadeDeElementos_clicked()
{
    try
    {
        QMessageBox::about(this,"Quantidade De Elementos ", QString::number(start->verificar_Quantidade_Elementos()));
    } catch (QString &erro) { QMessageBox::information(this,"ERRO",erro); }
}
void MainWindow::ajustarTamanho()
{
    ui->label_Saida->adjustSize();
    QRect nova = this->geometry();

    if(ui->label_Saida->width()>nova.width())
    {
       int novoTamanho = ui->label_Saida->width()*1.10;
       if(novoTamanho>1370) throw QString("Tamanho maximo da tela atingido");
       nova.setWidth(novoTamanho);
    }
    this->setGeometry(nova);
}

