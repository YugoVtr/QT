#ifndef LIVROS_H
#define LIVROS_H
#include <QString>
#include "Produto.h"
namespace Heranca
{
    class Livros;
}

class Livros : public Produto
{
    private:
        QString autor;
        QString tradutor;
        QString editora;
        int anoDePublicacao;

    public:
        Livros(): Produto(), autor(""), tradutor(""), editora(""), anoDePublicacao(0){}

        inline void setAutor(QString autor){ this->autor = autor; }
        inline void setTradutor(QString  tradutor){ this->tradutor = tradutor; }
        inline void setEditora(QString  editora){ this->editora = editora; }
        inline void setAnoDePublicacao(int  anoDePublicacao){ this->anoDePublicacao = anoDePublicacao; }

        inline QString getAutor() const{ return autor;}
        inline QString getTradutor() const{ return tradutor; }
        inline QString getEditora() const{ return editora; }
        inline int getAnoDePublicacao() const{ return anoDePublicacao; }
};

#endif // LIVROS_H
