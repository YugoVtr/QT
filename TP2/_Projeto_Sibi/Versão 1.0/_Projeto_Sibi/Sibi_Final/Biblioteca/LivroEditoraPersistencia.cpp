#include "LivroEditoraPersistencia.h"

namespace Biblioteca
{

LivroEditoraPersistencia::LivroEditoraPersistencia(QString nomeDoArquivoNoDisco) :
    nomeDoArquivoNoDisco(nomeDoArquivoNoDisco)
{
}

void LivroEditoraPersistencia::incluir(LivroEditora &objeto) const
{
    std::ofstream arquivo;
    arquivo.open(nomeDoArquivoNoDisco.toStdString().c_str(),std::ios_base::out|std::ios_base::app);
    if(!arquivo.is_open())
        throw QString("Erro ao abrir arquivo,incluir Persistencia LivroEditora");
    arquivo << objeto.desmontarObjeto().toStdString()+"\n";
    arquivo.close();
}

void LivroEditoraPersistencia::alterar(QList<LivroEditora> list) const
{
    std::fstream arquivo;
    arquivo.open(nomeDoArquivoNoDisco.toStdString().c_str());
    if(!arquivo.is_open())
        throw QString("Erro ao abrir arquivo,alterar Persistencia Livro Editora");
    QString saida;
    std::string linha;
    getline(arquivo,linha);
    while(!arquivo.eof())
    {
        LivroEditora a;
        QString linhaAux = QString::fromStdString(linha);
        a.montarObjeto(linhaAux);
        LivroEditora b = list.front();
        if(a.getCodigoLivro() != b.getCodigoLivro())
            saida += QString::fromStdString(linha)+"\n";
        getline(arquivo,linha);
    }
    arquivo.close();
    arquivo.open(nomeDoArquivoNoDisco.toStdString().c_str(),std::ios_base::out|std::ios_base::trunc);
    arquivo << saida.toStdString();
    for(int i = 0; i < list.size(); i++)
    {
        LivroEditora a = list[i];
        arquivo << a.desmontarObjeto().toStdString() + "\n";
    }
}

QList<LivroEditora> *LivroEditoraPersistencia::listagem() const
{
    QList<LivroEditora> *saida = new QList<LivroEditora>();
    std::ifstream arquivo;
    arquivo.open(nomeDoArquivoNoDisco.toStdString().c_str());
    if(!arquivo.is_open())
        throw QString("Erro ao abrir o arquivo,listagem Peristencia LivroEditora");
    std::string linha;
    getline(arquivo,linha);
    while(!arquivo.eof())
    {
        QString linhaAux = QString::fromStdString(linha);
        LivroEditora aux;
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

QList<LivroEditora> *LivroEditoraPersistencia::listagem(int codigo) const
{
    QList<LivroEditora> *saida = new QList<LivroEditora>();
    std::ifstream arquivo;
    arquivo.open(nomeDoArquivoNoDisco.toStdString().c_str());
    if(!arquivo.is_open())
        throw QString("Erro ao abrir o arquivo,listagem Peristencia LivroEditora");
    std::string linha;
    getline(arquivo,linha);
    while(!arquivo.eof())
    {
        QString linhaAux = QString::fromStdString(linha);
        LivroEditora aux;
        try{
            aux.montarObjeto(linhaAux);
            if(aux.getCodigoLivro() == codigo) saida->push_back(aux);
        }catch (QString &erro){
            throw erro;
        }
        getline(arquivo,linha);
    }
    return saida;
}

QString LivroEditoraPersistencia::consultar(int codigo)
{
    std::ifstream arquivo;
    arquivo.open(nomeDoArquivoNoDisco.toStdString().c_str());
    if(!arquivo.is_open())
        throw QString("Erro ao abrir o arquivo,listagem Peristencia Livro");
    std::string linha;
    getline(arquivo,linha);
    while(!arquivo.eof())
    {
        QString linhaAux = QString::fromStdString(linha);
        LivroEditora aux;
        aux.montarObjeto(linhaAux);
        if(aux.getCodigoLivro() == codigo) return linhaAux;
        getline(arquivo,linha);
    }
    return "0";
}

}
