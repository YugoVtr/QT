#include "CadastroEndereco.h"
#include "ui_CadastroEndereco.h"

CadastroEndereco::CadastroEndereco(long long cpf, QList<Vitor::Endereco> *value) :
    QDialog(0),
    ui(new Ui::CadastroEndereco),
    cpf(cpf),
    value(value)
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

    QRegExp cep("[0-9]*");
    QRegExpValidator *CEP = new QRegExpValidator(cep,ui->cEPLineEdit);
    ui->cEPLineEdit->setValidator(CEP);

    QRegExp numero("[0-9]*");
    QRegExpValidator *NUMERO = new QRegExpValidator(numero,ui->numeroLineEdit);
    ui->numeroLineEdit->setValidator(NUMERO);
}

CadastroEndereco::~CadastroEndereco()
{
    delete ui->cEPLineEdit->validator();
    delete ui->numeroLineEdit->validator();
    delete ui;
}

void CadastroEndereco::on_pushButton_Cancel_clicked()
{
    this->close();
}

void CadastroEndereco::on_pushButton_OK_clicked()
{
    try
    {
        QString logradouro = ui->logradouroLineEdit->text();
        int numero = ui->numeroLineEdit->text().toInt();
        QString bairro = ui->bairroLineEdit->text();
        int cep = ui->cEPLineEdit->text().toInt();
        QString cidade = ui->cidadeLineEdit->text();
        QString uf = ui->uFComboBox->currentText();

        Vitor::Endereco endereco(cpf,1,logradouro,numero,bairro,cep,cidade,uf);
        value->push_back(endereco);
        this->close();
    } catch (QString &erro) {QMessageBox::critical(this,"ERRO",erro); }
}
