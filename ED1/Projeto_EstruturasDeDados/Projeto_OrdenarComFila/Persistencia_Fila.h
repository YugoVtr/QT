#ifndef PERSISTENCIA_FILA_H
#define PERSISTENCIA_FILA_H
#include <QString>
#include "Fila.h"
#include <QFileDialog>
#include <fstream>

namespace ED1
{
    class Persistencia_Fila
    {
    private:
        QString nome_Do_Arquivo_No_Disco;

        Fila<QString> *ordenar(Fila<QString> *filaCheia)const;
    public:
        Persistencia_Fila(): nome_Do_Arquivo_No_Disco("") {}
        Persistencia_Fila(QString nomeDoArquivo): nome_Do_Arquivo_No_Disco(nomeDoArquivo) {}
        inline void set_NomeDoArquivo(QString nomeDoArquivo) {this->nome_Do_Arquivo_No_Disco = nomeDoArquivo;}
        inline QString get_NomeDoArquivo() const {return nome_Do_Arquivo_No_Disco;}
        Fila<QString> *carregarDados()const;
    };
}
#endif // PERSISTENCIA_FILA_H
