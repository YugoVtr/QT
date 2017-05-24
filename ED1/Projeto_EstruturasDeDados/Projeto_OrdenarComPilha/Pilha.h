#ifndef PILHA_H
#define PILHA_H
#include "Interface_Pilha.h"
#include "Interface_Lista.h"
#include "Lista_LDE_Circular.h"
#include "Lista_LDE.h"
#include "Lista_LSE_Circular.h"
#include "Lista_LSE.h"

namespace ED1
{
    template <class Tipo>
    class Pilha : public Interface_Pilha<Tipo>
    {
        private:
            ED1::Interface_Lista<Tipo> *lista;
        public:
            Pilha(Interface_Lista<Tipo> *lista):lista(lista){}
            virtual ~Pilha(){if(lista) delete lista;}
            void inserir(Tipo elemento){lista->incluirInicio(elemento);}
            Tipo acessar()const{if(this->eVazia())throw QString("Vazia");return lista->acessarPosicao(1);}
            Tipo remover(){return lista->removerInicio();}
            bool eVazia()const{return lista->eVazio();}
            int quantidadeElementos()const{return lista->obterTamanho();}
    };
}


#endif // PILHA_H
