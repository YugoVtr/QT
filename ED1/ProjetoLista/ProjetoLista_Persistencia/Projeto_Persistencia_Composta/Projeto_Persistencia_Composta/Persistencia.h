#ifndef PERSISTENCIA_H
#define PERSISTENCIA_H
#include <QString>
#include "Lista.h"
#include <QFileDialog>
#include <fstream>

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
        Lista<QString> *carregarDados()const;
        void salvarDados(ED1::Lista<QString> const * const lista)const;
    };
}
#endif // PERSISTENCIA_H
