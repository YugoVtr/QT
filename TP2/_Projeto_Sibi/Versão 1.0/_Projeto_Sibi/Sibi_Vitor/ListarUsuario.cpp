#include "ListarUsuario.h"
#include "ui_ListarUsuario.h"

ListarUsuario::ListarUsuario(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::ListarUsuario)
{
    ui->setupUi(this);
    ui->tableWidget_Usuarios->setSelectionBehavior(QAbstractItemView::SelectRows);
    this->setGeometry(
        QStyle::alignedRect(
            Qt::LeftToRight,
            Qt::AlignCenter,
            this->size(),
            qApp->desktop()->availableGeometry()
        )
    );
    this->setFixedSize(this->width(),this->height());
}

ListarUsuario::~ListarUsuario()
{
    limparGrid();
    delete ui;
}

void ListarUsuario::on_action_Novo_Cadastro_triggered()
{
    CadastroUsuario novoUser;
    novoUser.setModal(true);
    novoUser.exec();
}
void ListarUsuario::limparGrid()const
{
    for(int linha=0;linha<ui->tableWidget_Usuarios->rowCount();linha++)
        for(int coluna=0;coluna<ui->tableWidget_Usuarios->columnCount();coluna++)
            delete ui->tableWidget_Usuarios->item(linha,coluna);
    ui->tableWidget_Usuarios->setRowCount(0);
}

void ListarUsuario::on_action_Consultar_Cadastros_triggered()
{
    try
    {
        limparGrid();

        QString url_Mais = "../Sibi_Vitor/Arquivos/Imagens/mais.png";
        QPixmap img_Mais(url_Mais);
        QIcon mais(img_Mais);

        Vitor::Usuario_Persistencia mostrar("../Sibi_Vitor/Arquivos/Dados/usuarios.txt");
        QList<Vitor::Usuario>* lista = mostrar.listagem();
        if(lista->empty()) {QMessageBox::information(this,"AVISO","NÃO HÁ USUARIOS CADASTRADOS");}
        else
        {
            for(int contador = 0 ; !lista->empty() ; contador++)
            {
                QString cpf = QString::number(lista->front().getCpf());
                while(cpf.size()!=11) cpf = "0"+cpf;

                QString nome = lista->front().getNome();

                QString tipo = "";
                if(lista->front().getTipo()==1) tipo = "bibliotecario";
                if(lista->front().getTipo()==2) tipo = "professor";
                if(lista->front().getTipo()==3) tipo = "aluno";

                QString email = lista->front().getEmail();

                QString telefone = "";
                if(!lista->front().getTelefone().isEmpty())
                    telefone = lista->front().getTelefone().front().obterNumero();

                QString endereco = "";
                if(!lista->front().getEndereco().isEmpty()) endereco =
                        lista->front().getEndereco().front().obterEndereco();

                ui->tableWidget_Usuarios->setRowCount(ui->tableWidget_Usuarios->rowCount()+1);
                ui->tableWidget_Usuarios->setItem(contador,0,new QTableWidgetItem(cpf));
                ui->tableWidget_Usuarios->setItem(contador,1,new QTableWidgetItem(nome));
                ui->tableWidget_Usuarios->setItem(contador,2,new QTableWidgetItem(tipo));
                ui->tableWidget_Usuarios->setItem(contador,3,new QTableWidgetItem(email));
                ui->tableWidget_Usuarios->setItem(contador,4,new QTableWidgetItem(mais,telefone));
                ui->tableWidget_Usuarios->setItem(contador,5,new QTableWidgetItem(""));
                ui->tableWidget_Usuarios->setItem(contador,6,new QTableWidgetItem(mais,endereco));
                lista->pop_front();
            }
            ui->tableWidget_Usuarios->resizeColumnToContents(1);
            ui->tableWidget_Usuarios->resizeColumnToContents(3);
            ui->tableWidget_Usuarios->resizeColumnToContents(4);
            alinhamento(ui->tableWidget_Usuarios,ui->tableWidget_Usuarios->rowCount(),ui->tableWidget_Usuarios->columnCount());
        }
        if(lista) delete lista;
    }catch(QString &erro){QMessageBox::critical(this,"ERRO",erro);}
}
void ListarUsuario::alinhamento(QTableWidget *lista,int linhas,int colunas)const
{
    try
    {
        for(int linha=0; linha<linhas;linha++)
            for(int coluna=0; coluna<colunas;coluna++)
                lista->item(linha,coluna)->setTextAlignment(Qt::AlignCenter);
    }catch(...){}
}

void ListarUsuario::on_tableWidget_Usuarios_cellClicked(int row, int column)
{
    try
    {
        if(column==4)
        {
            ListarTelefone telefones(ui->tableWidget_Usuarios->item(row,0)->text().toLongLong());
            telefones.setModal(true);
            telefones.exec();
        }
        if(column==6)
        {
            ListarEndereco enderecos(ui->tableWidget_Usuarios->item(row,0)->text().toLongLong());
            enderecos.setModal(true);
            enderecos.exec();
        }
    } catch (QString &erro) { QMessageBox::critical(this,"ERRO",erro);   }
}
