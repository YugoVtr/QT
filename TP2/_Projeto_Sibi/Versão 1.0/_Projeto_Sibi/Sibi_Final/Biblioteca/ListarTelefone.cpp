#include "ListarTelefone.h"
#include "ui_ListarTelefone.h"

ListarTelefone::ListarTelefone(long long cpf) :
    QDialog(0),
    ui(new Ui::ListarTelefone)
{
    ui->setupUi(this);
    ui->label->setVisible(false);
    Vitor::Telefone_Persistencia telefones("../Arquivos/telefones.txt");
    QList<Vitor::Telefone> lista = telefones.buscarDados(cpf);
    if(lista.isEmpty()) {ui->label->setVisible(true);}
    else
    {
        ui->tableWidget_Telefones->setRowCount(lista.size());
        for(int linha=0;linha<=lista.size();linha++)
        {
            ui->tableWidget_Telefones->setItem(linha,0,new QTableWidgetItem(QString::number(lista.front().getDDI())));
            ui->tableWidget_Telefones->setItem(linha,1,new QTableWidgetItem(QString::number(lista.front().getDDD())));
            ui->tableWidget_Telefones->setItem(linha,2,new QTableWidgetItem(QString::number(lista.front().getNumero())));
            lista.pop_front();
        }
        alinhamento(ui->tableWidget_Telefones,ui->tableWidget_Telefones->rowCount(),ui->tableWidget_Telefones->columnCount());
    }
}

ListarTelefone::~ListarTelefone()
{
    limparGrid();
    delete ui;
}

void ListarTelefone::limparGrid()const
{
    for(int linha=0;linha<ui->tableWidget_Telefones->rowCount();linha++)
        for(int coluna=0;coluna<ui->tableWidget_Telefones->columnCount();coluna++)
            delete ui->tableWidget_Telefones->item(linha,coluna);
    ui->tableWidget_Telefones->setRowCount(0);
}

void ListarTelefone::alinhamento(QTableWidget *lista,int linhas,int colunas)const
{
    try
    {
        for(int linha=0; linha<linhas;linha++)
            for(int coluna=0; coluna<colunas;coluna++)
                lista->item(linha,coluna)->setTextAlignment(Qt::AlignCenter);
    }catch(...){}
}

void ListarTelefone::on_pushButton_Fechar_clicked()
{
    this->close();
}
