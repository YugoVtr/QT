#ifndef PERSISTENCIA_PILHA_H
#define PERSISTENCIA_PILHA_H
#include <QString>
#include "Pilha.h"
#include <QFileDialog>
#include <fstream>

namespace ED1
{
    class Persistencia_Pilha
    {
    private:
        QString nome_Do_Arquivo_No_Disco;

        Pilha<QString> *ordenar(Pilha<QString> *pilhaCheia)const;
    public:
        Persistencia_Pilha(): nome_Do_Arquivo_No_Disco("") {}
        Persistencia_Pilha(QString nomeDoArquivo): nome_Do_Arquivo_No_Disco(nomeDoArquivo) {}
        inline void set_NomeDoArquivo(QString nomeDoArquivo) {this->nome_Do_Arquivo_No_Disco = nomeDoArquivo;}
        inline QString get_NomeDoArquivo() const {return nome_Do_Arquivo_No_Disco;}
        Pilha<QString> *carregarDados()const;
    };
}
#endif // PERSISTENCIA_PILHA_H
