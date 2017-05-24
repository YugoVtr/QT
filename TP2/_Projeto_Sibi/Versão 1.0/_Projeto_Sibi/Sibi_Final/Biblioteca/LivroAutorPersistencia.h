#ifndef LIVROAUTORPERSISTENCIA_H
#define LIVROAUTORPERSISTENCIA_H

#include "LivroAutor.h"
#include "Crud.h"
#include <fstream>
#include <QStack>

namespace Biblioteca
{

class LivroAutorPersistencia : public Vitor::Crud<LivroAutor>
{
    QString nomeDoArquivoNoDisco;
public:
    LivroAutorPersistencia(QString nomeDoArquivoNoDisco);
    void incluir(LivroAutor &objeto)const;
    void alterar(QList<LivroAutor> list)const;
    void alterar(LivroAutor &objeto)const {objeto.setCodigoLivro(0);}
    QList<LivroAutor> *listagem()const;
    QList<LivroAutor> *listagem(int codigo)const;
    QString consultar(int codigo);
};

}

#endif // LIVROAUTORPERSISTENCIA_H
