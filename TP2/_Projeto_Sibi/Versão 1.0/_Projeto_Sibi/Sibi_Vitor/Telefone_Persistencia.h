#ifndef TELEFONE_PERSISTENCIA_H
#define TELEFONE_PERSISTENCIA_H
#include "CRUD.h"
#include "Telefone.h"
#include "fstream"
#include "QFile"

namespace Vitor
{
    class Telefone_Persistencia : public CRUD<Telefone>
    {
    private:
        QString nome_No_Disco;
        QList<Telefone> *dados;
    public:
        Telefone_Persistencia(QString nome_No_Disco):nome_No_Disco(nome_No_Disco),dados(0){carregarDados();}
        QString getNome_No_Diso()const {return nome_No_Disco;}
        void incluir(Telefone &objeto)const;
        void alterar(Telefone &objeto)const;
        QList<Telefone>* listagem()const{return dados;}
        QList<Telefone> buscarDados(long long cpf)const;
        void carregarDados();
    };
}


#endif // TELEFONE_PERSISTENCIA_H
