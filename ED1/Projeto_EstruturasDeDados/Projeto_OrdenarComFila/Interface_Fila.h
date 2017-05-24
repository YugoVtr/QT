#ifndef INTERFACE_FILA_H
#define INTERFACE_FILA_H

namespace ED1
{
    template <class Tipo>
    class Interface_Fila
    {
        public:
            virtual ~Interface_Fila(){}
            virtual void inserir(Tipo elemento)=0;
            virtual Tipo acessar()const=0;
            virtual Tipo remover()=0;
            virtual bool eVazia()const=0;
            virtual int quantidadeElementos()const=0;
    };
}
#endif // INTERFACE_FILA_H
