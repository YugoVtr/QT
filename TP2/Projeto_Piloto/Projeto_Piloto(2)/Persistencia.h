#ifndef PERSISTENCIA_H
#define PERSISTENCIA_H
#include <QString>
#include "arrayList.h"
#include "Piloto.h"
#include <QFileDialog>
#include <fstream>

namespace TP2
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
        arrayList<Piloto> *carregarDados()const;
    };
}
#endif // PERSISTENCIA_H
