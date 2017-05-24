#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow),
    manipular_Arquivo("")
{
    ui->setupUi(this);
    this->setGeometry(492,50,this->width(),this->height());
    this->setFixedSize(this->width(),150);
    ui->pushButton_Limpar->setEnabled(false);
    ui->pushButton_AdicionarLinha->setEnabled(false);
    ui->pushButton_RemoverLinha->setEnabled(false);
    ui->lineEdit_Linha->setEnabled(false);
    ui->pushButton_Salvar->setEnabled(false);
}

MainWindow::~MainWindow()
{
    this->on_pushButton_Salvar_clicked();
    this->limparTabela();
    delete ui;
}

void MainWindow::on_pushButton_CarregarArquivo_clicked()
{
    try
    {
        QString nome_Do_Arquivo_No_Disco = QFileDialog::getOpenFileName(this,"Abrir Arquivo",QDir::currentPath(),"Arquivos Textos (*.csv *.txt)");
        this->manipular_Arquivo.set_NomeDoArquivo(nome_Do_Arquivo_No_Disco); //Gerar minha lista
        ED1::Lista<QString> *lista_Pronta = manipular_Arquivo.carregarDados(); //Armazenar a lista gerada
        int tamanhoLista = lista_Pronta->obterTamanho(); //Saber o tamanho da lista para fazer a tabela
        ui->tableWidget_MostrarLista->setColumnCount(1); //Esta lista so tem uma coluna
        ui->tableWidget_MostrarLista->setRowCount(tamanhoLista);//Linha vão ter varias...depende do arquivo
        QTableWidgetItem *auxiliar; //Um item pra ir jogando na gride
        for(int contador = 1 ; contador <= tamanhoLista ; contador++)
        {
            auxiliar = new QTableWidgetItem(lista_Pronta->acessarPosicao(contador));
            ui->tableWidget_MostrarLista->setItem(contador-1,0,auxiliar);
        }
        delete lista_Pronta; // Ja usei a lista apago ela

        ui->pushButton_Limpar->setEnabled(true);
        ui->pushButton_AdicionarLinha->setEnabled(true);
        ui->pushButton_RemoverLinha->setEnabled(true);
        ui->lineEdit_Linha->setEnabled(true);
        ui->pushButton_Salvar->setEnabled(true);
        this->setFixedHeight(645);

    } catch (QString &erro) { QMessageBox::information(this,"ERRO",erro);}
}
void MainWindow::limparTabela()const
{
    int linhas = ui->tableWidget_MostrarLista->rowCount();
    for(int contador = 0; contador < linhas ; contador++)
    {
        QTableWidgetItem *temporario = ui->tableWidget_MostrarLista->item(contador,0);
        if(temporario) delete temporario;
    }
}


void MainWindow::on_pushButton_Limpar_clicked()
{
    try
    {
        ui->pushButton_Limpar->setEnabled(false);
        ui->pushButton_AdicionarLinha->setEnabled(false);
        ui->pushButton_RemoverLinha->setEnabled(false);
        ui->lineEdit_Linha->setEnabled(false);
        ui->lineEdit_Linha->clear();
        ui->pushButton_Salvar->setEnabled(false);

        this->limparTabela();
        ui->tableWidget_MostrarLista->setRowCount(0);
        ui->tableWidget_MostrarLista->setColumnCount(0);
        this->setFixedHeight(150);
    } catch (...) {QMessageBox::information(this,"ERRO","Erro ao limpar") ;   }
}

void MainWindow::on_pushButton_AdicionarLinha_clicked()
{
    try
    {
        int linha = ui->lineEdit_Linha->text().toInt();
        if(linha<1 || linha > ui->tableWidget_MostrarLista->rowCount()+1) throw QString("FORA DO INTERVALO");
        ui->tableWidget_MostrarLista->insertRow(linha-1);
        QTableWidgetItem *novo = new QTableWidgetItem("");
        ui->tableWidget_MostrarLista->setItem(linha-1,0, novo);
    } catch (QString &erro) {QMessageBox::information(this,"ERRO",erro) ;   }
}

void MainWindow::on_pushButton_RemoverLinha_clicked()
{
    try
    {
        int linha = ui->lineEdit_Linha->text().toInt();
        if(linha<1 || linha > ui->tableWidget_MostrarLista->rowCount()) throw QString("FORA DO INTERVALO");
        delete (ui->tableWidget_MostrarLista->item(linha-1,0));
        ui->tableWidget_MostrarLista->removeRow(linha-1);
    } catch (QString &erro) {QMessageBox::information(this,"ERRO",erro) ;   }
}

void MainWindow::on_pushButton_Salvar_clicked()
{
    try
    {
        QMessageBox verificar;
        verificar.setText("VOCE QUER SALVAR AS MUDANÇAS ?");
        verificar.setStandardButtons(QMessageBox::Save | QMessageBox::Cancel);
        verificar.setDefaultButton(QMessageBox::Save);
        int resposta = verificar.exec();

        ED1::Lista<QString> *novoArquivo = 0;
        int linhas = 0;

        switch (resposta) {
        case QMessageBox::Save:
            novoArquivo = new ED1::Lista<QString>();
            linhas = ui->tableWidget_MostrarLista->rowCount();
            for(int contador = 0; contador < linhas ; contador++)
            {
                QTableWidgetItem *temporario = ui->tableWidget_MostrarLista->item(contador,0);
                if(temporario) novoArquivo->incluirFinal(temporario->text());
            }
            manipular_Arquivo.salvarDados(novoArquivo);
            if(novoArquivo) delete novoArquivo;
            QMessageBox::about(this,"Concluido","ARQUIVO SALVO COM SUCESSO");
            break;

        case QMessageBox::Cancel:
            QMessageBox::about(this,"Cancelado","ARQUIVO NÃO FOI SALVO");
            break;

        default:
            break;
        }

    } catch (...) {QMessageBox::information(this,"ERRO","Erro ao salvar o arquivo") ;   }
}


