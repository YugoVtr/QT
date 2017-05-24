#ifndef FILA_H
#define FILA_H
#include "Interface_Fila.h"
#include "Interface_Lista.h"
#include "Lista_LDE_Circular.h"
#include "Lista_LDE.h"
#include "Lista_LSE_Circular.h"
#include "Lista_LSE.h"

namespace ED1
{
    template <class Tipo>
    class Fila : public Interface_Fila<Tipo>
    {
        private:
            ED1::Interface_Lista<Tipo> *lista;
        public:
            Fila(Interface_Lista<Tipo> *lista):lista(lista){}
            virtual ~Fila(){if(lista) delete lista;}
            void inserir(Tipo elemento){lista->incluirFinal(elemento);}
            Tipo acessar()const{if(this->eVazia())throw QString("Vazia");return lista->acessarPosicao(1);}
            Tipo remover(){return lista->removerInicio();}
            bool eVazia()const{return lista->eVazio();}
            int quantidadeElementos()const{return lista->obterTamanho();}
    };
}
#endif // FILA_H
