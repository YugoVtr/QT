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
        int *array;
    public:
        Fila(int tamanho);
        inline ~Fila(){if(array)delete[]array;}
        void inserir(int elemento);
        void remover();
        int acessar()const;
        bool eVazia()const;
    };
}

#endif // FILA_H
