#ifndef EDITORAPERSISTENCIA_H
#define EDITORAPERSISTENCIA_H

#include "Editora.h"
#include "Crud.h"
#include <fstream>
#include <QStack>

namespace Biblioteca
{

class EditoraPersistencia : public Vitor::Crud<Editora>
{
    QString nomeDoArquivoNoDisco;
public:
    EditoraPersistencia(QString nomeDoArquivoNoDisco):nomeDoArquivoNoDisco(nomeDoArquivoNoDisco){}
    void incluir(Editora &objeto)const;
    void alterar(Editora &objeto)const;
    QList<Editora> *listagem()const;
    QString consultar(int codigo)const;
};

}

#endif // EDITORAPERSISTENCIA_H
