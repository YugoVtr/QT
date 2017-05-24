#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "qcheckbox.h"
#include "QCheckBox"


MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow),
    foraDeOrdem(0),
    listaDeFolder(0)
{
    ui->setupUi(this);

    this->setWindowFlags(Qt::Dialog);

    QString url_Limpar = "../Projeto_ListaDeListas/Imagens/limpar.png";
    QPixmap img_Limpar(url_Limpar);
    QIcon limpar(img_Limpar);
    ui->pushButton_Limpar->setIcon(limpar);

    QString url_Carregar = "../Projeto_ListaDeListas/Imagens/carregar.png";
    QPixmap img_Carregar(url_Carregar);
    QIcon carregar(img_Carregar);
    ui->actionAbrir->setIcon(carregar);

    //QImage novo(QDir::currentPath()+"/carregar.png");
    //QGraphicsScene *teste = new QGraphicsScene(this);
    //teste->addPixmap(QPixmap::fromImage(novo));
    //ui->graphicsView->setScene(teste);

    //--------------------------------------------

    this->setGeometry(
        QStyle::alignedRect(
            Qt::LeftToRight,
            Qt::AlignCenter,
            this->size(),
            qApp->desktop()->availableGeometry()
        )
    );
    //--------------------------------------------
    ui->pushButton_Limpar->setVisible(false);
    ui->comboBox_Selecao->setVisible(false);
}

MainWindow::~MainWindow()
{
    if(foraDeOrdem) delete foraDeOrdem;
    delete ui;
}

void MainWindow::on_pushButton_Limpar_clicked()
{
    try
    {
        ui->pushButton_Limpar->setVisible(false);
        ui->comboBox_Selecao->setVisible(false);
        ui->actionAbrir->setEnabled(true);
        ui->actionAbrir->setChecked(false);
        ui->listWidget_MostrarLista->clear();
    } catch (...) {QMessageBox::information(this,"ERRO","Erro ao limpar") ;   }
}

void MainWindow::on_actionAbrir_triggered()
{
    try
    {
        ui->comboBox_Selecao->clear();
        ui->comboBox_Selecao->addItem("TUDO");

        ui->listWidget_MostrarLista->clear();
        QString nome_Do_Arquivo_No_Disco = QFileDialog::getOpenFileName(this,"Abrir Arquivo","../Arquivos","Arquivos Textos (*.csv *.txt)");
        ED1::Persistencia_Lista carregar_Arquivo(nome_Do_Arquivo_No_Disco);//Gerar minha pilha
        if(foraDeOrdem) delete foraDeOrdem; foraDeOrdem=0;
        foraDeOrdem = carregar_Arquivo.carregarDados();//Armazenar a lista gerada
        for(int contador = 1 ; contador <= foraDeOrdem->obterTamanho() ; contador++)
        {
            ui->listWidget_MostrarLista->addItem(foraDeOrdem->acessarPosicao(contador));
        }
        ED1::PersistirPorLetra gerarListaDeFolder(foraDeOrdem);
        listaDeFolder = gerarListaDeFolder.carregar();
        for(int contador = listaDeFolder->obterTamanho(); contador>0 ; contador--)
            ui->comboBox_Selecao->addItem(listaDeFolder->acessarPosicao(contador).getLetra());

        ui->pushButton_Limpar->setVisible(true);
        ui->comboBox_Selecao->setVisible(true);
        ui->actionAbrir->setEnabled(false);

    } catch (QString &erro) { QMessageBox::information(this,"ERRO",erro);}
}

void MainWindow::on_comboBox_Selecao_activated(const QString &arg1)
{
    ui->listWidget_MostrarLista->clear();
    if(arg1=="TUDO")
    {
        for(int contador = 1 ; contador <= foraDeOrdem->obterTamanho() ; contador++)
        {
            ui->listWidget_MostrarLista->addItem(foraDeOrdem->acessarPosicao(contador));
        }
    }
    else
    {
        QChar paraBuscar = arg1[0];
        int contador = 1;
        for(;listaDeFolder->acessarPosicao(contador).getLetra()!=paraBuscar;contador++){}
        ED1::Folder exibir = listaDeFolder->acessarPosicao(contador);
        ui->listWidget_MostrarLista->clear();

        for(int contador = 1 ; contador <= exibir.size() ; contador++)
        {
            ui->listWidget_MostrarLista->addItem(exibir.acessarPosicao(contador));
        }
    }
}
