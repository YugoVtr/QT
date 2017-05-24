#include "telaprincipal.h"
#include "ui_telaprincipal.h"

TelaPrincipal::TelaPrincipal(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::TelaPrincipal)
{
    ui->setupUi(this);
}

TelaPrincipal::~TelaPrincipal()
{
    delete ui;
}

void TelaPrincipal::on_pushButtonNome_clicked()
{
    try {
///Users/eugeniojulio/Library/Mobile Documents/com~apple~CloudDocs/E_MacBookAir/2016/PUC/2016_1/Aulas/ArquivosDeDados
        TP2::OrdenarPorNome aux("/Users/eugeniojulio/Library/Mobile Documents/com~apple~CloudDocs/E_MacBookAir/2016/PUC/2016_1/Aulas/ArquivosDeDados/DadosAlunos.csv");
        std::vector<TP2::Aluno>* dados = 0;
        dados = aux.obterDadosOrdenado();
        QString saida;
        for(int pos = 0; pos < dados->size(); pos++){
            TP2::Aluno alunoAux;
            alunoAux = dados->operator [](pos);
            saida += alunoAux.getMatricula();
            saida += " ; ";
            saida += alunoAux.getNome();
            saida += " ; ";
            saida += alunoAux.getSituacao();
            saida += "\n";
        }
        ui->textEditSaida->setText(saida);
        delete dados;
    } catch (QString &msgErro) {
        QMessageBox::information(this,"ERRO",msgErro);
    }
}

void TelaPrincipal::on_pushButtonGeral_clicked()
{
    try {
///Users/eugeniojulio/Library/Mobile Documents/com~apple~CloudDocs/E_MacBookAir/2016/PUC/Aulas/ArquivosDeDados/DadosAlunos.csv
        TP2::DadosDoArquivo aux("/Users/eugeniojulio/Library/Mobile Documents/com~apple~CloudDocs/E_MacBookAir/2016/PUC/2016_1/Aulas/ArquivosDeDados/DadosAlunos.csv");
        std::vector<TP2::Aluno>* dados = 0;
        dados = aux.obterDadosDoArquivo();
        QString saida;
        for(int pos = 0; pos < dados->size(); pos++){
            TP2::Aluno alunoAux;
            alunoAux = dados->operator [](pos);
            saida += alunoAux.getMatricula();
            saida += " ; ";
            saida += alunoAux.getNome();
            saida += " ; ";
            saida += alunoAux.getSituacao();
            saida += "\n";
        }
        ui->textEditSaida->setText(saida);
        delete dados;
    } catch (QString &msgErro) {
        QMessageBox::information(this,"ERRO",msgErro);
    }
}

void TelaPrincipal::on_pushButtonLimpar_clicked()
{
    ui->textEditSaida->clear();
}

void TelaPrincipal::on_pushButtonMatricula_clicked()
{
    try {
        TP2::OrdenarPorMatricula aux("/Users/eugeniojulio/Library/Mobile Documents/com~apple~CloudDocs/E_MacBookAir/2016/PUC/2016_1/Aulas/ArquivosDeDados/DadosAlunos.csv");
        std::vector<TP2::Aluno>* dados = 0;
        dados = aux.obterDadosOrdenado();
        QString saida;
        for(int pos = 0; pos < dados->size(); pos++){
            TP2::Aluno alunoAux;
            alunoAux = dados->operator [](pos);
            saida += alunoAux.getMatricula();
            saida += " ; ";
            saida += alunoAux.getNome();
            saida += " ; ";
            saida += alunoAux.getSituacao();
            saida += "\n";
        }
        ui->textEditSaida->setText(saida);
        delete dados;
    } catch (QString &msgErro) {
        QMessageBox::information(this,"ERRO",msgErro);
    }

}
