#ifndef FILA_H
#define FILA_H
#include <QString>

namespace ED1
{
    class Fila
    {
    private:
        int inicio;
        int fim;
        int tamanho;
        int quantidadeDeElementos;
        QString *array;
    public:
        Fila(int tamanho);
        inline ~Fila(){if(array)delete[]array;}
        void inserir(QString elemento);
        void remover();
        QString acessar()const;
        bool eVazia()const;
        QString getFila();
    };
}

#endif // FILA_H
