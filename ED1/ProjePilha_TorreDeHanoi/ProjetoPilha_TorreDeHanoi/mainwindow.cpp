#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow),
    pino_1(0),
    pino_2(0),
    pino_3(0),
    pino1(" "),
    pino2(" "),
    pino3(" "),
    quantidade_De_Jogadas(0),
    origem(0),
    destino(0)
{
    ui->setupUi(this);
    ui->textEdit_Pino_1->setEnabled(false);
    ui->textEdit_Pino_2->setEnabled(false);
    ui->textEdit_Pino_3->setEnabled(false);
    ui->lineEdit_Pino_De_Destino->setEnabled(false);
    ui->lineEdit_Pino_De_Origem->setEnabled(false);
    ui->pushButton_Trocar_Disco->setEnabled(false);
    ui->pushButton_Restart->setEnabled(false);
}

MainWindow::~MainWindow()
{
    if(pino_1) delete pino_1;
    if(pino_2) delete pino_2;
    if(pino_3) delete pino_3;
    delete ui;
}

void MainWindow::on_pushButton_CriarJogo_clicked()
{
    try
    {
        int numero_De_Discos=ui->lineEdit_QuantidadeDeDiscos->text().toInt();
        pino_1 = new ED1::Pilha(numero_De_Discos);
        pino_2 = new ED1::Pilha(numero_De_Discos);
        pino_3 = new ED1::Pilha(numero_De_Discos);

        //preenche a pilha inicial
        for(int contador=numero_De_Discos; contador>0 ; contador--)
        {
            pino_1->inserirElemento(contador);
            pino1  = QString::number(contador) + "\n" + pino1;
            pino2 += " \n ";
            pino3 += " \n ";
        }
        //Exibe as pilhas na forma inicial
        ui->textEdit_Pino_1->setText(pino1);
        ui->textEdit_Pino_2->setText(pino2);
        ui->textEdit_Pino_3->setText(pino3);

        //Habilita e desabilita os botoes apos criar o jogo
        ui->lineEdit_QuantidadeDeDiscos->setEnabled(false);
        ui->lineEdit_Pino_De_Destino->setEnabled(true);
        ui->lineEdit_Pino_De_Origem->setEnabled(true);
        ui->pushButton_Trocar_Disco->setEnabled(true);
        ui->pushButton_Restart->setEnabled(true);
        ui->pushButton_CriarJogo->setEnabled(false);
    }
    catch (QString &erro){ QMessageBox::information(this,"ERRO",erro);}
    catch (std::bad_alloc&){ QMessageBox::information(this,"ERRO","Voce precisa de memoria");}
}

void MainWindow::on_pushButton_Trocar_Disco_clicked()
{
    try
    {
        quantidade_De_Jogadas++;  //Apertou o botão ele conta uma jogada
        ui->label_quantidade_De_Jogadas->setText(QString::number(quantidade_De_Jogadas)); //E mostra ao usuario

        int pino_Origem = ui->lineEdit_Pino_De_Origem->text().toInt();
        int pino_Destino = ui->lineEdit_Pino_De_Destino->text().toInt();

        //Excessoes para as possiveis merdas que o usuario queira fazer.
        if(pino_Origem==pino_Destino) throw QString (" Assim voce não vai ganhar ");
        if(pino_Origem<1 || pino_Origem>3) throw QString (" Esse pino de origem não existe ");
        if(pino_Destino<1 || pino_Destino>3) throw QString (" Esse pino de origem não existe ");

        //Objetos para armazenar o endereço da pilha de origem e de destino
        QString *saida_Origem;
        QString *saida_Destino;

        //Identifica qual a pilha de origem e qual e a pilha de destino
        if(pino_Origem==1) {origem = pino_1;  saida_Origem = &pino1;}
        if(pino_Origem==2) {origem = pino_2;  saida_Origem = &pino2;}
        if(pino_Origem==3) {origem = pino_3;  saida_Origem = &pino3;}
        if(pino_Destino==1) {destino = pino_1;  saida_Destino = &pino1;}
        if(pino_Destino==2) {destino = pino_2;  saida_Destino = &pino2;}
        if(pino_Destino==3) {destino = pino_3;  saida_Destino = &pino3;}

        //Se a pilha de destino não for vazia e o usuario tentar colocar um valor maior em cima de uma menor...excessao
        if(!destino->ePilhaVazia() && (origem->acessarElementoTopo()>destino->acessarElementoTopo()))
            { throw QString (" Não coloque um valor maior em cima de um valor menor "); }

        //Depois que tudo estiver OK movo o elemento para a pilha de detino e tiro ele da pilha de origem
        destino->inserirElemento(origem->acessarElementoTopo());
        origem->removerElemento();
        *saida_Destino = this->atualizar_Torre_Destino();
        *saida_Origem = this->atualizar_Torre_Origem();

        //Limpo o campo com as pilhas de origem e destino e...
        ui->lineEdit_Pino_De_Origem->clear();
        ui->lineEdit_Pino_De_Destino->clear();
        //...E imprimo novamente as pilhas
        ui->textEdit_Pino_1->setText(pino1);
        ui->textEdit_Pino_2->setText(pino2);
        ui->textEdit_Pino_3->setText(pino3);

        //Se o pino 2 estiver cheio o usuario ganha e reinicio o game.
        if(this->pino_2->numeroDeElementos()==ui->lineEdit_QuantidadeDeDiscos->text().toInt())
        {
            QMessageBox::about(this,"YOU WIN", "Voce ganhou com "+QString::number(quantidade_De_Jogadas)+ " jogadas.");
            this->on_pushButton_Restart_clicked();
        }

    } catch (QString &erro)
    { QMessageBox::information(this,"ERRO",erro);}
}

void MainWindow::on_pushButton_Restart_clicked()
{
    //Voltar os botoes e lineedit's ao estado inicial
    ui->textEdit_Pino_1->clear();
    ui->textEdit_Pino_2->clear();
    ui->textEdit_Pino_3->clear();
    ui->lineEdit_QuantidadeDeDiscos->clear();
    ui->lineEdit_Pino_De_Destino->clear();
    ui->lineEdit_Pino_De_Origem->clear();
    ui->lineEdit_QuantidadeDeDiscos->setEnabled(true);
    ui->lineEdit_Pino_De_Destino->setEnabled(false);
    ui->lineEdit_Pino_De_Origem->setEnabled(false);
    ui->pushButton_Trocar_Disco->setEnabled(false);
    ui->pushButton_Restart->setEnabled(false);
    ui->pushButton_CriarJogo->setEnabled(true);
    ui->label_quantidade_De_Jogadas->setText("0");

    //E apago os valores anteriores nos pinos
    if(pino_1) delete pino_1;
    if(pino_2) delete pino_2;
    if(pino_3) delete pino_3;
    pino_1 = 0;
    pino_2 = 0;
    pino_3 = 0;
    pino1 = "";
    pino2 = "";
    pino3 = "";
    quantidade_De_Jogadas=0;
}

QString MainWindow::atualizar_Torre_Origem()
{
    QString saida = "" ;
    ED1::Pilha pino_Origem_Auxiliar(ui->lineEdit_QuantidadeDeDiscos->text().toInt());
    while(!this->origem->ePilhaVazia())
    {
        pino_Origem_Auxiliar.inserirElemento(this->origem->acessarElementoTopo());
        this->origem->removerElemento();
    }
    while(!pino_Origem_Auxiliar.ePilhaVazia())
    {
        this->origem->inserirElemento(pino_Origem_Auxiliar.acessarElementoTopo());
        saida = QString::number(pino_Origem_Auxiliar.acessarElementoTopo()) + "\n" + saida;
        pino_Origem_Auxiliar.removerElemento();
    }
    return saida;
}
QString MainWindow::atualizar_Torre_Destino()
{
    QString saida = "" ;
    ED1::Pilha pino_Destino_Auxiliar(ui->lineEdit_QuantidadeDeDiscos->text().toInt());
    while(!this->destino->ePilhaVazia())
    {
        pino_Destino_Auxiliar.inserirElemento(this->destino->acessarElementoTopo());
        this->destino->removerElemento();
    }
    while(!pino_Destino_Auxiliar.ePilhaVazia())
    {
        this->destino->inserirElemento(pino_Destino_Auxiliar.acessarElementoTopo());
        saida = QString::number(pino_Destino_Auxiliar.acessarElementoTopo()) + "\n" + saida;
        pino_Destino_Auxiliar.removerElemento();
    }
    return saida;
}
