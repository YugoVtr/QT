#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow),
    tree(0)
{
    ui->setupUi(this);
    ui->pushButton_Crescente->setEnabled(false);
    ui->pushButton_Decrescente->setEnabled(false);
    ui->pushButton_EmOrdem->setEnabled(false);
    ui->pushButton_PosOrdem->setEnabled(false);
    ui->pushButton_PreOrdem->setEnabled(false);
    ui->lineEdit_Buscar->setEnabled(false);
}

MainWindow::~MainWindow()
{
    if(tree) delete tree;
    delete ui;
}

void MainWindow::limparGrid() const
{
    for(int linha=0;linha<ui->tableWidget_MostrarArvore->rowCount();linha++)
        for(int coluna=0;coluna<ui->tableWidget_MostrarArvore->columnCount();coluna++)
            delete ui->tableWidget_MostrarArvore->item(linha,coluna);

    ui->tableWidget_MostrarArvore->setRowCount(0);
}

void MainWindow::listar(std::queue<ED1::Item> *fila)
{
    try
    {
        ui->tableWidget_MostrarArvore->setRowCount(fila->size());
        for(int linha=0;linha < ui->tableWidget_MostrarArvore->rowCount();linha++)
        {
            ui->tableWidget_MostrarArvore->setItem(linha,0,new QTableWidgetItem(fila->front().getNome()));
            ui->tableWidget_MostrarArvore->setItem(linha,1,new QTableWidgetItem(QString::number(fila->front().getRepeticao())));
            ui->tableWidget_MostrarArvore->item(linha,1)->setTextAlignment(Qt::AlignCenter);
            fila->pop();
        }
        delete fila;
    } catch (QString) { QMessageBox::critical(this,"ERRO","Erro em listar");  }
}


void MainWindow::on_actionABRIR_triggered()
{
    try
    {
        ui->actionABRIR->setEnabled(false);
        limparGrid();
        QString nome_Do_Arquivo_No_Disco = QFileDialog::getOpenFileName(
                    this,"Abrir Arquivo","../Projeto_ArvoreBinaria/Arquivos/","Arquivos Textos (*.csv *.txt)");
        ED1::Persistencia arquivo(nome_Do_Arquivo_No_Disco);
        tree = arquivo.carregarDados();
        listar(tree->imprimir());

        ui->pushButton_Crescente->setEnabled(true);
        ui->pushButton_Decrescente->setEnabled(true);
        ui->pushButton_EmOrdem->setEnabled(true);
        ui->pushButton_PosOrdem->setEnabled(true);
        ui->pushButton_PreOrdem->setEnabled(true);
        ui->lineEdit_Buscar->setEnabled(true);
    } catch (QString &erro) { QMessageBox::critical(this,"ERRO",erro);  }
}

void MainWindow::on_pushButton_Crescente_clicked()
{
    try
    {
        listar(tree->imprimir());
    } catch (QString) { QMessageBox::critical(this,"ERRO","Erro na ordem Crescente");  }
}

void MainWindow::on_pushButton_Decrescente_clicked()
{
    try
    {
        std::stack<ED1::Item> inverter;
        std::queue<ED1::Item> *fila = tree->imprimir();
        while(!fila->empty())
        {
            inverter.push(fila->front());
            fila->pop();
        }
        while(!inverter.empty())
        {
            fila->push(inverter.top());
            inverter.pop();
        }
        listar(fila);
    } catch (QString) { QMessageBox::critical(this,"ERRO","Erro na ordem Decrescente");  }
}

void MainWindow::on_pushButton_PreOrdem_clicked()
{
    try
    {
        listar(tree->preOrdem());
    } catch (QString) { QMessageBox::critical(this,"ERRO","Erro na pre Ordem");  }
}

void MainWindow::on_pushButton_EmOrdem_clicked()
{
    try
    {
        listar(tree->imprimir());
    } catch (QString) { QMessageBox::critical(this,"ERRO","Erro na in Ordem");  }
}

void MainWindow::on_pushButton_PosOrdem_clicked()
{
    try
    {
        listar(tree->posOrdem());
    } catch (QString) { QMessageBox::critical(this,"ERRO","Erro na pos Ordem");  }
}



void MainWindow::on_actionLIMPAR_triggered()
{
    limparGrid();
    ui->pushButton_Crescente->setEnabled(false);
    ui->pushButton_Decrescente->setEnabled(false);
    ui->pushButton_EmOrdem->setEnabled(false);
    ui->pushButton_PosOrdem->setEnabled(false);
    ui->pushButton_PreOrdem->setEnabled(false);
    ui->actionABRIR->setEnabled(true);
    ui->lineEdit_Buscar->setEnabled(false);
}

void MainWindow::on_actionFECHAR_triggered()
{
    this->close();
}

void MainWindow::on_lineEdit_Buscar_returnPressed()
{
    try
    {
        QString resposta = "NÃO";
        if(tree->buscar(ui->lineEdit_Buscar->text().toUpper())) resposta = "SIM";
        QMessageBox::about(this,"RESULTADO",resposta);

    } catch (QString &erro) { QMessageBox::critical(this,"ERRO",erro); }
}
