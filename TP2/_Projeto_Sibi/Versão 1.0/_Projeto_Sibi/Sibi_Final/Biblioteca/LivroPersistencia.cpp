#include "LivroPersistencia.h"

namespace Biblioteca
{

LivroPersistencia::LivroPersistencia(QString nomeDoArquivoNoDisco) :
    nomeDoArquivoNoDisco(nomeDoArquivoNoDisco)
{
}

void LivroPersistencia::incluir(Livro &objeto) const
{
    std::ofstream arquivo;
    arquivo.open(nomeDoArquivoNoDisco.toStdString().c_str(),std::ios_base::out|std::ios_base::app);
    if(!arquivo.is_open())
        throw QString("Erro ao abrir arquivo,incluir Persistencia Livro");
    arquivo << objeto.desmontarObjeto().toStdString()+"\n";
    arquivo.close();
}

void LivroPersistencia::alterar(Livro &objeto) const
{
    std::fstream arquivo;
    arquivo.open(nomeDoArquivoNoDisco.toStdString().c_str());
    if(!arquivo.is_open())
        throw QString("Erro ao abrir arquivo,alterar Persistencia Livro");
    bool encontrou = false;
    std::string linha;
    QStack<Livro> pilha;
    getline(arquivo,linha);
    while(!arquivo.eof())
    {
        Livro aux;
        QString linhaAux = QString::fromStdString(linha);
        aux.montarObjeto(linhaAux);
        if(aux.getIsbn()!=objeto.getIsbn()) pilha.push_back(aux);
        else encontrou = true;
        getline(arquivo,linha);
    }
    if(!encontrou) throw QString("Impossivel aterar persistencia,Livro não encontrado");
    arquivo.close();
    std::ofstream arquivoSaida;
    arquivoSaida.open(nomeDoArquivoNoDisco.toStdString().c_str());
    if(!arquivoSaida.is_open())
        throw QString("Erro ao abrir arquivo,alterar Persistencia Livro");
    while(!pilha.empty())
    {
        Livro aux = pilha.top();
        arquivoSaida << aux.desmontarObjeto().toStdString()+"\n";
        pilha.pop();
    }
    arquivoSaida << objeto.desmontarObjeto().toStdString()+"\n";
    arquivoSaida.close();
}

QList<Livro> *LivroPersistencia::listagem() const
{
    QList<Livro> *saida = new QList<Livro>();
    std::ifstream arquivo;
    arquivo.open(nomeDoArquivoNoDisco.toStdString().c_str());
    if(!arquivo.is_open())
        throw QString("Erro ao abrir o arquivo,listagem Peristencia Editora");
    std::string linha;
    getline(arquivo,linha);
    while(!arquivo.eof())
    {
        QString linhaAux = QString::fromStdString(linha);
        Livro aux;
        try{
            aux.montarObjeto(linhaAux);
        }catch (QString &erro){
            throw erro;
        }
        saida->push_back(aux);
        getline(arquivo,linha);
    }
    return saida;
}

QString LivroPersistencia::consultar(long isbn) const
{
    std::ifstream arquivo;
    arquivo.open(nomeDoArquivoNoDisco.toStdString().c_str());
    if(!arquivo.is_open())
        return "0";
    std::string linha;
    getline(arquivo,linha);
    while(!arquivo.eof())
    {
        QString linhaAux = QString::fromStdString(linha);
        Livro aux;
        aux.montarObjeto(linhaAux);
        if(aux.getIsbn() == isbn) return linhaAux;
        getline(arquivo,linha);
    }
    return "0";
}

}
