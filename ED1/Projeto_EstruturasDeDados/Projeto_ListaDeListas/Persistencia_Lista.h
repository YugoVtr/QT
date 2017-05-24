#ifndef PERSISTENCIA_LISTA_H
#define PERSISTENCIA_LISTA_H
#include <QString>
#include "Lista_LDE_Circular.h"
#include "Folder.h"
#include <QFileDialog>
#include <fstream>
#include "QFile"
#include "QTextStream"

namespace ED1
{
    class Persistencia_Lista
    {
    private:
        QString nome_Do_Arquivo_No_Disco;

    public:
        Persistencia_Lista(): nome_Do_Arquivo_No_Disco("") {}
        Persistencia_Lista(QString nomeDoArquivo): nome_Do_Arquivo_No_Disco(nomeDoArquivo) {}
        inline void set_NomeDoArquivo(QString nomeDoArquivo) {this->nome_Do_Arquivo_No_Disco = nomeDoArquivo;}
        inline QString get_NomeDoArquivo() const {return nome_Do_Arquivo_No_Disco;}
        Lista_LDE_Circular<QString> *carregarDados();
    };
}
#endif // PERSISTENCIA_LISTA_H
