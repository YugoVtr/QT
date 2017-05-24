#ifndef PILHA_H
#define PILHA_H
#include "QString"

namespace ED1
{
    class Pilha
    {
    private:
        int *array;
        int limite;
        int topo;

    public:
        Pilha(int limite);
        inline ~Pilha(){if(array) delete[] array;}
        void inserirElemento(int valor);
        int acessarElementoTopo()const;
        void removerElemento();
        bool ePilhaVazia()const;
        inline int numeroDeElementos()const{return this-> topo+1;}
    };
}


#endif // PILHA_H
