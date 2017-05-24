#ifndef INTERFACE_PILHA_H
#define INTERFACE_PILHA_H

namespace ED1
{
    template <class Tipo>
    class Interface_Pilha
    {
        public:
            virtual ~Interface_Pilha(){}
            virtual void inserir(Tipo elemento)=0;
            virtual Tipo acessar()const=0;
            virtual Tipo remover()=0;
            virtual bool eVazia()const=0;
            virtual int quantidadeElementos()const=0;
    };
}
#endif // INTERFACE_PILHA_H
