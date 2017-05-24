#include "ArtigoAutorPersistencia.h"
#include <fstream>

namespace Mumu
{

void ArtigoAutorPersistencia::incluir(ArtigoAutor &objeto) const
{
    std::ofstream arquivo(this->nomeDoArquivoNoDisco.toStdString().c_str(),std::ios_base::out|std::ios_base::app);
    if(!arquivo) throw QString ("Erro ao abrir o arquivo - Metodo incluir(Autor Persistencia) 1");
    arquivo.seekp(0,std::ios_base::beg);
    arquivo << objeto.desmontarObjeto().toStdString() + "\n";
    arquivo.close();
}

void ArtigoAutorPersistencia::alterar(QList<ArtigoAutor> *lista) const
{
    std::fstream arquivo;
    arquivo.open(this->nomeDoArquivoNoDisco.toStdString().c_str());
    std::string linha;
    int i = 0;
    QString saida = "";

    //pega todos os elementos do arquivo com execao dos que estao na lista
    while(std::getline(arquivo,linha))
    {
        ArtigoAutor a(linha);
        ArtigoAutor b = lista->at(i);
        if(b.getCodigoArtigo() != a.getCodigoArtigo())
            saida += QString::fromStdString(linha) + "\n";
    }


    arquivo.close();
    arquivo.open(this->nomeDoArquivoNoDisco.toStdString().c_str(),std::ios_base::out);
    if(!arquivo) throw QString ("Erro ao abrir o arquivo para alteracao 1!- Metodo alterar(Artigo Persistencia)");
    arquivo.clear();
    arquivo << saida.toStdString();

    //insiro a lista
    for(int i = 0; i < lista->size(); i++)
    {
        ArtigoAutor a = lista->at(i);
        arquivo << QString::number(a.getCodigoArtigo()).toStdString() + ";" + QString::number(a.getCodigoAutor()).toStdString() + "\n";
    }

}

QString ArtigoAutorPersistencia::consultar(const int codigo) const
{
    std::ifstream arquivo;
    arquivo.open(this->nomeDoArquivoNoDisco.toStdString().c_str());
    std::string linha;
    while(std::getline(arquivo,linha))
        if(ArtigoAutor(linha).getCodigoArtigo() == codigo)
            return QString::fromStdString(linha);
    return "0";
}

QList<ArtigoAutor> *ArtigoAutorPersistencia::listagem() const
{
    std::ifstream arquivo;
    QList<ArtigoAutor> * lista = new QList<ArtigoAutor>();
    arquivo.open(this->nomeDoArquivoNoDisco.toStdString().c_str());
    std::string linha;
    while(std::getline(arquivo,linha))
        lista->push_back(ArtigoAutor(linha));
    return lista;
}

QList<ArtigoAutor> *ArtigoAutorPersistencia::listagem(int codigo) const
{
    std::ifstream arquivo;
    QList<ArtigoAutor> * lista = new QList<ArtigoAutor>();
    arquivo.open(this->nomeDoArquivoNoDisco.toStdString().c_str());
    std::string linha;
    while(std::getline(arquivo,linha))
    {
        if(linha[0] == QString::number(codigo)[0])
            lista->push_back(ArtigoAutor(linha));
    }
    return lista;
}

}
