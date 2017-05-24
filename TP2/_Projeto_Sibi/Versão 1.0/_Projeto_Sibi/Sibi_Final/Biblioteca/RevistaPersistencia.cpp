#include "RevistaPersistencia.h"

namespace Biblioteca
{

RevistaPersistencia::RevistaPersistencia(QString nomeDoArquivoNoDisco) :
    nomeDoArquivoNoDisco(nomeDoArquivoNoDisco)
{

}

void RevistaPersistencia::incluir(Revista &objeto) const
{
    std::ofstream arquivo;
    arquivo.open(nomeDoArquivoNoDisco.toStdString().c_str(),std::ios_base::out|std::ios_base::app);
    if(!arquivo.is_open())
        throw QString("Erro ao abrir arquivo,incluir Persistencia Revista");
    arquivo << objeto.desmontarObjeto().toStdString()+"\n";
    arquivo.close();
}

void RevistaPersistencia::alterar(Revista &objeto) const
{
    std::fstream arquivo;
    arquivo.open(nomeDoArquivoNoDisco.toStdString().c_str());
    if(!arquivo.is_open())
        throw QString("Erro ao abrir arquivo,alterar Persistencia Revista");
    bool encontrou = false;
    std::string linha;
    QStack<Revista> pilha;
    getline(arquivo,linha);
    while(!arquivo.eof())
    {
        Revista aux;
        QString linhaAux = QString::fromStdString(linha);
        aux.montarObjeto(linhaAux);
        if(aux.getCodigo()!=objeto.getCodigo()) pilha.push_back(aux);
        else encontrou = true;
        getline(arquivo,linha);
    }
    if(!encontrou) throw QString("Impossivel aterar persistencia,Revista não encontrada");
    arquivo.close();
    std::ofstream arquivoSaida;
    arquivoSaida.open(nomeDoArquivoNoDisco.toStdString().c_str());
    if(!arquivoSaida.is_open())
        throw QString("Erro ao abrir arquivo,alterar Persistencia Revista");
    while(!pilha.empty())
    {
        Revista aux = pilha.top();
        arquivoSaida << aux.desmontarObjeto().toStdString()+"\n";
        pilha.pop();
    }
    arquivoSaida << objeto.desmontarObjeto().toStdString()+"\n";
    arquivoSaida.close();
}

QList<Revista> *RevistaPersistencia::listagem() const
{
    QList<Revista> *saida = new QList<Revista>();
    std::ifstream arquivo;
    arquivo.open(nomeDoArquivoNoDisco.toStdString().c_str());
    if(!arquivo.is_open())
        throw QString("Erro ao abrir o arquivo,listagem Peristencia Revista");
    std::string linha;
    getline(arquivo,linha);
    while(!arquivo.eof())
    {
        QString linhaAux = QString::fromStdString(linha);
        Revista aux;
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

QString RevistaPersistencia::consultar(int codigo) const
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
        Revista aux;
        aux.montarObjeto(linhaAux);
        if(aux.getCodigo() == codigo) return linhaAux;
        getline(arquivo,linha);
    }
    return "0";
}

}
