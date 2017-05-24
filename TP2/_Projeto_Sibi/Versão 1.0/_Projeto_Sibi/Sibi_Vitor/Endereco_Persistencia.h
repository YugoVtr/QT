#ifndef ENDERECO_PERSISTENCIA_H
#define ENDERECO_PERSISTENCIA_H
#include "CRUD.h"
#include "Endereco.h"
#include "fstream"
#include "QFile"

namespace Vitor
{
    class Endereco_Persistencia : public CRUD<Endereco>
    {
    private:
        QString nome_No_Disco;
        QList<Endereco> *dados;
    public:
        Endereco_Persistencia(QString nome_No_Disco):nome_No_Disco(nome_No_Disco),dados(0){carregarDados();}
        QString getNome_No_Diso()const {return nome_No_Disco;}
        void incluir(Endereco &objeto)const;
        void alterar(Endereco &objeto)const;
        QList<Endereco>* listagem()const{return dados;}
        QList<Endereco> buscarDados(long long cpf)const;
        void carregarDados();
    };
}


#endif // ENDERECO_PERSISTENCIA_H
