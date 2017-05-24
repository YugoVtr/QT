#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow),
    lista_Pronta(0)
{
    ui->setupUi(this);
    ui->tableWidget_Mostrar->setSelectionBehavior(QAbstractItemView::SelectRows);                               //Seleciona a linha

    this->setGeometry(                                                                                          //Centraliza
        QStyle::alignedRect(
            Qt::LeftToRight,
            Qt::AlignCenter,
            this->size(),
            qApp->desktop()->availableGeometry()
        )
    );

    ui->tableWidget_Mostrar->horizontalHeader()->setVisible(false);                                             //Desabilita cabeçalho
    ui->tableWidget_Mostrar->resizeColumnsToContents();                                                         //Ajusta as celulas
    this->setFixedSize(this->width(),this->height());                                                           //Fixa o tamanho da janela
    ui->pushButton_Ordenar->setEnabled(false);
    ui->pushButton_Limpar->setEnabled(false);                                                                   //Desabilita butão limpar
    ui->comboBox_TipoDeOrdenacao->setEnabled(false);
}

MainWindow::~MainWindow()
{
    this->limparGrid();
    if(lista_Pronta) delete lista_Pronta;
    delete ui;
}

void MainWindow::limparGrid() const
{
    for(int linha=0;linha<ui->tableWidget_Mostrar->rowCount();linha++)                                           //Corre a gride...
        for(int coluna=0;coluna<ui->tableWidget_Mostrar->columnCount();coluna++)
            delete ui->tableWidget_Mostrar->item(linha,coluna);                                                  //...Deletanto os itens

}

void MainWindow::escolherOrdem(QString ordem)
{
    try
    {
        if(ordem=="NOME")
        {
            TP2::OrdenarPorNome carregar_Arquivo(lista_Pronta);                                                 //Cria a persistencia com o nome
            lista_Pronta = carregar_Arquivo.obterDadosOrdenado();                                               //Cria a lista para receber os dados
        }
        if(ordem=="CODIGO")
        {
            TP2::OrdenarPorCodigo carregar_Arquivo(lista_Pronta);                                               //Cria a persistencia com o nome
            lista_Pronta = carregar_Arquivo.obterDadosOrdenado();                                               //Cria a lista para receber os dados
        }
        if(ordem=="EQUIPE e NOME")
        {
            TP2::OrdenarPorEquipe_Nome carregar_Arquivo(lista_Pronta);                                          //Cria a persistencia com o nome
            lista_Pronta = carregar_Arquivo.obterDadosOrdenado();                                               //Cria a lista para receber os dados
        }
        if(ordem=="PAIS e NOME")
        {
            TP2::OrdenarPorPais_Nome carregar_Arquivo(lista_Pronta);                                            //Cria a persistencia com o nome
            lista_Pronta = carregar_Arquivo.obterDadosOrdenado();                                               //Cria a lista para receber os dados
        }
        if(ordem=="MOTOR, EQUIPE e NOME")
        {
            TP2::OrdenarPorMotor_Equipe_Nome carregar_Arquivo(lista_Pronta);                                    //Cria a persistencia com o nome
            lista_Pronta = carregar_Arquivo.obterDadosOrdenado();                                               //Cria a lista para receber os dados
        }
        if(ordem=="PONTUAÇÃO")
        {
            TP2::OrdenarPorPontuacao_Idade carregar_Arquivo(lista_Pronta);                                      //Cria a persistencia com o nome
            lista_Pronta = carregar_Arquivo.obterDadosOrdenado();                                               //Cria a lista para receber os dados
        }
    } catch (QString &erro) { QMessageBox::information(this,"ERRO",erro);}
}

void MainWindow::listar() const
{
    try
    {
        if (lista_Pronta==0) throw QString("ERRO");
        if (lista_Pronta->eVazia()) throw QString("Arquivo todo errado");

        int tamanho = lista_Pronta->size();                                                                       //Numero de linhas da gride
        ui->tableWidget_Mostrar->setColumnCount(7);                                                             //Seta o numero de colunas
        ui->tableWidget_Mostrar->setRowCount(tamanho);                                                          //Seta o numero de linhas
        for(int contador = 0; contador < tamanho ; contador++)                                                  //Corra toda a lista de dados
        {
            TP2::Piloto piloto = (*lista_Pronta)[contador];                                                       //Setando os atributos na Gride
            ui->tableWidget_Mostrar->setItem(contador,0,new QTableWidgetItem(QString::number(piloto.getCodigo())));
            ui->tableWidget_Mostrar->setItem(contador,1,new QTableWidgetItem(piloto.getNome()));
            ui->tableWidget_Mostrar->setItem(contador,2,new QTableWidgetItem(piloto.getPais()));
            ui->tableWidget_Mostrar->setItem(contador,3,new QTableWidgetItem(QString::number(piloto.getIdade())));
            ui->tableWidget_Mostrar->setItem(contador,4,new QTableWidgetItem(piloto.getEquipe()));
            ui->tableWidget_Mostrar->setItem(contador,5,new QTableWidgetItem(piloto.getMotor()));
            ui->tableWidget_Mostrar->setItem(contador,6,new QTableWidgetItem(QString::number(piloto.getQuantidadeDePontos())));
            for(int coluna=0;coluna<7;coluna++)
                ui->tableWidget_Mostrar->item(contador,coluna)->setTextAlignment(Qt::AlignCenter);              //Alinha as celulas da linha ja feita
        }
    }catch (QString &erro) { throw erro;}
}

void MainWindow::on_pushButton_CarregarArquivo_clicked()
{
    try
    {
        this->on_pushButton_Limpar_clicked();
        if(this->lista_Pronta) {delete lista_Pronta;lista_Pronta=0;}
        QString nome_Do_Arquivo_No_Disco = QFileDialog::getOpenFileName(
                    this,"Abrir Arquivo",QDir::currentPath(),"Arquivos Textos (*.csv *.txt)");                  //Descobre nome do arquivo no disco
        TP2::Persistencia desordenado(nome_Do_Arquivo_No_Disco);
        lista_Pronta = desordenado.carregarDados();
        listar();
        ui->tableWidget_Mostrar->horizontalHeader()->setVisible(true);                                          //Habilita o cabeçalho
        ui->tableWidget_Mostrar->resizeColumnsToContents();                                                     //Ajusta as colunas
        ui->tableWidget_Mostrar->resizeRowsToContents();                                                        //Ajusta as linhas
        ui->pushButton_Limpar->setEnabled(true);                                                                //Habilita o botão de limpar
        ui->pushButton_Ordenar->setEnabled(true);
        ui->comboBox_TipoDeOrdenacao->setEnabled(true);
        ui->pushButton_CarregarArquivo->setEnabled(false);
    } catch (QString &erro) { QMessageBox::information(this,"ERRO",erro);}
}

void MainWindow::on_pushButton_Limpar_clicked()
{
    try
    {
        this->limparGrid();                                                                                     //Limpa a Grid
        ui->tableWidget_Mostrar->horizontalHeader()->setVisible(false);                                         //Desabilita o cabeçalho
        ui->pushButton_Limpar->setEnabled(false);                                                               //Desabilita o botão de limpar
        ui->tableWidget_Mostrar->setRowCount(0);                                                                //Retira as linhas da gride
        ui->pushButton_Ordenar->setEnabled(false);
        ui->comboBox_TipoDeOrdenacao->setEnabled(false);
        ui->pushButton_CarregarArquivo->setEnabled(true);
    } catch (...) {QMessageBox::information(this,"ERRO","Erro ao limpar") ;   }
}

void MainWindow::on_pushButton_Ordenar_clicked()
{
    try
    {
        limparGrid();
        escolherOrdem(ui->comboBox_TipoDeOrdenacao->currentText());
        listar();
    } catch (QString &erro) { QMessageBox::information(this,"ERRO",erro);}
}
