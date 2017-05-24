#include "CadastroUsuario.h"
#include "ui_CadastroUsuario.h"

CadastroUsuario::CadastroUsuario(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::CadastroUsuario)
{
    ui->setupUi(this);
    this->setGeometry(
        QStyle::alignedRect(
            Qt::LeftToRight,
            Qt::AlignCenter,
            this->size(),
            qApp->desktop()->availableGeometry()
        )
    );
    this->setFixedSize(this->width(),this->height());

    QRegExp cpf("[0-9]*");
    QRegExpValidator *CPF = new QRegExpValidator(cpf,ui->cPFLineEdit);
    ui->cPFLineEdit->setValidator(CPF);
}

CadastroUsuario::~CadastroUsuario()
{
    delete ui->cPFLineEdit->validator();
    delete ui;
}

void CadastroUsuario::on_pushButton_AdicionarTelefone_clicked()
{
    ui->cPFLineEdit->setEnabled(false);
    CadastroTelefone telefone(ui->cPFLineEdit->text().toLongLong(),&telefones);
    telefone.setModal(true);
    telefone.exec();
}

void CadastroUsuario::on_pushButton_AdicionarEndereco_clicked()
{
    ui->cPFLineEdit->setEnabled(false);
    CadastroEndereco endereco(ui->cPFLineEdit->text().toLongLong(),&enderecos);
    endereco.setModal(true);
    endereco.exec();
}

void CadastroUsuario::on_pushButton_Cancelar_clicked()
{
    this->close();
}

void CadastroUsuario::on_pushButton_Cadastrar_clicked()
{
    try
    {
        long long cpf = ui->cPFLineEdit->text().toLongLong();
        QString nome = ui->nomeLineEdit->text();
        int tipo = ui->clienteComboBox->currentText().split('-').operator [](0).toInt();
        QString email =  ui->emailLineEdit->text();

        Vitor::TipoDoCliente type ;
        if(tipo==1){type=Vitor::bibliotecario;}
        if(tipo==2){type=Vitor::professor;}
        if(tipo==3){type=Vitor::aluno;}

        Vitor::Usuario usuario(cpf,nome,type,email);
        Vitor::Usuario_Persistencia user("../Arquivos/usuarios.txt");
        user.incluir(usuario);

        Vitor::Telefone_Persistencia telefone("../Arquivos/telefones.txt");
        while(!telefones.isEmpty())
        {
            telefone.incluir(telefones.front());
            telefones.pop_front();
        }
        Vitor::Endereco_Persistencia endereco("../Arquivos/enderecos.txt");
        while(!enderecos.isEmpty())
        {
            endereco.incluir(enderecos.front());
            enderecos.pop_front();
        }

        this->close();
    } catch (QString &erro) {QMessageBox::critical(this,"ERRO",erro); }

}
