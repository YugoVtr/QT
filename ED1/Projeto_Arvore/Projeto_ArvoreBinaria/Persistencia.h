#ifndef PERSISTENCIA_H
#define PERSISTENCIA_H
#include "QString"
#include "QFile"
#include "QTextStream"
#include "ArvoreBinaria.h"
#include "Item.h"
#include "fstream"

namespace ED1
{
    class Persistencia
    {
    private:
        QString nome_Do_Arquivo_No_Disco;

    public:
        Persistencia(): nome_Do_Arquivo_No_Disco("") {}
        Persistencia(QString nomeDoArquivo): nome_Do_Arquivo_No_Disco(nomeDoArquivo) {}
        inline void set_NomeDoArquivo(QString nomeDoArquivo) {this->nome_Do_Arquivo_No_Disco = nomeDoArquivo;}
        inline QString get_NomeDoArquivo() const {return nome_Do_Arquivo_No_Disco;}
        ArvoreBinaria<Item> *carregarDados();
    };
}
#endif // PERSISTENCIA_H
