#ifndef IARVOREBINARIA_H
#define IARVOREBINARIA_H
#include "queue"

namespace ED1
{
    template <class Tipo>
    class IArvoreBinaria
    {
        public:
        virtual ~IArvoreBinaria(){}
        virtual void inserir(Tipo elemento) = 0;
        virtual std::queue<Tipo> *imprimir() = 0;
        virtual void remover(Tipo elemento) = 0;
    };
}


#endif // IARVOREBINARIA_H
