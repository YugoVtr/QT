#ifndef ARVOREBINARIA_H
#define ARVOREBINARIA_H
#include "No.h"
#include "QString"
#include "IArvoreBinaria.h"

namespace ED1
{
    template <class Tipo>
    class ArvoreBinaria : public IArvoreBinaria<Tipo>
    {
    private:
        No<Tipo>* raiz;

    private:
        void inserirRecursivo(No<Tipo> **raiz, Tipo elemento);
        void removerRecursivo(No<Tipo> **raiz, Tipo elemento);
        std::queue<Tipo> *preOrdem_Recursivo(No<Tipo>* raiz, std::queue<Tipo> *resultado)const;
        std::queue<Tipo> *emOrdem(No<Tipo>* raiz, std::queue<Tipo> *resultado)const;
        std::queue<Tipo> *posOrdem_Recursivo(No<Tipo>* raiz, std::queue<Tipo> *resultado)const;
        Tipo retornar_Maior(No<Tipo> **raiz);
        bool buscar_Recursivo(Tipo elemento, No<Tipo>* raiz)const;
        Tipo obterElementoCompleto_Recursivo(Tipo elemento, No<Tipo>* raiz)const;

    public:
        ArvoreBinaria():raiz(0){}
        ~ArvoreBinaria(){if(raiz != 0) { delete raiz; }}

        void inserir(Tipo elemento){this->inserirRecursivo(&raiz,elemento);}
        void remover(Tipo elemento){this->removerRecursivo(&raiz, elemento);}
        std::queue<Tipo>* imprimir(){std::queue<Tipo>*resultado = new std::queue<Tipo>();return emOrdem(raiz,resultado);}

        std::queue<Tipo> *preOrdem()const{std::queue<Tipo>*resultado = new std::queue<Tipo>();return preOrdem_Recursivo(raiz,resultado);}
        std::queue<Tipo> *posOrdem()const{std::queue<Tipo>*resultado = new std::queue<Tipo>();return posOrdem_Recursivo(raiz,resultado);}
        bool buscar(Tipo elemento)const{return buscar_Recursivo(elemento,raiz);}
        Tipo obterElementoCompleto(Tipo elemento)const{return obterElementoCompleto_Recursivo(elemento,raiz);}
    };

    template <class Tipo>
    void ArvoreBinaria<Tipo>::inserirRecursivo(No<Tipo> **raiz, Tipo elemento)
    {
        if(*raiz == 0) {*raiz = new No<Tipo>(elemento);}
        else
        {
            if(elemento < (*raiz)->getDado()) {inserirRecursivo(&(*raiz)->esquerda, elemento);}
            else
            {
                if(elemento > (*raiz)->getDado() ) {inserirRecursivo(&(*raiz)->direita, elemento);}
                else throw QString("Elemento já Existe");
            }
        }
    }

    template <class Tipo>
    std::queue<Tipo>* ArvoreBinaria<Tipo>::preOrdem_Recursivo(No<Tipo>* raiz, std::queue<Tipo> *resultado)const
    {
        if(raiz != 0)
        {
            resultado->push(raiz->getDado());
            preOrdem_Recursivo(raiz->getEsquerda(),resultado);
            preOrdem_Recursivo(raiz->getDireita(),resultado);
        }
        return resultado;
    }

    template <class Tipo>
    std::queue<Tipo>* ArvoreBinaria<Tipo>::emOrdem(No<Tipo>* raiz, std::queue<Tipo> *resultado)const
    {
        if(raiz != 0)
        {
            emOrdem(raiz->getEsquerda(),resultado);
            resultado->push(raiz->getDado());
            emOrdem(raiz->getDireita(),resultado);
        }
        return resultado;
    }

    template <class Tipo>
    std::queue<Tipo>* ArvoreBinaria<Tipo>::posOrdem_Recursivo(No<Tipo>* raiz, std::queue<Tipo> *resultado)const
    {
        if(raiz != 0)
        {
            posOrdem_Recursivo(raiz->getEsquerda(),resultado);
            posOrdem_Recursivo(raiz->getDireita(),resultado);
            resultado->push(raiz->getDado());
        }
        return resultado;
    }

    template <class Tipo>
    Tipo ArvoreBinaria<Tipo>::retornar_Maior(No<Tipo> **raiz){
        Tipo valor;
        No<Tipo> *aux = 0;
        if((*raiz)->direita != 0) return (retornar_Maior(&(*raiz)->direita));
        else
        {
            aux = *raiz;
            valor = (*raiz)->getDado();
            *raiz = (*raiz)->esquerda;
            aux->esquerda = 0;
            aux->direita = 0;
            delete aux;
            return valor;
        }
    }

    template <class Tipo>
    bool ArvoreBinaria<Tipo>::buscar_Recursivo(Tipo elemento,No<Tipo>* raiz) const
    {
        if(raiz==0) return false;
        if(elemento==raiz->getDado()) return true;
        else
        {
            if(elemento<raiz->getDado()) return buscar_Recursivo(elemento,raiz->esquerda);
            else return buscar_Recursivo(elemento,raiz->direita);
        }
    }

    template <class Tipo>
    Tipo  ArvoreBinaria<Tipo>::obterElementoCompleto_Recursivo(Tipo elemento, No<Tipo>* raiz)const
    {
        if(raiz==0) throw QString("Elemento não existe - obter elemento");
        if(elemento==raiz->getDado()) return raiz->getDado();
        else
        {
            if(elemento<raiz->getDado()) return obterElementoCompleto_Recursivo(elemento,raiz->esquerda);
            else return obterElementoCompleto_Recursivo(elemento,raiz->direita);
        }
    }

    template <class Tipo>
    void ArvoreBinaria<Tipo>::removerRecursivo(No<Tipo> **raiz, Tipo elemento)
    {
        No<Tipo> *aux = 0;
        if(*raiz != 0)
        {
            if((*raiz)->getDado() == elemento)
            {
                aux = *raiz;
                if((*raiz)->esquerda == 0){
                    *raiz = (*raiz)->direita;
                    aux->esquerda = 0;
                    aux->direita = 0;
                    delete aux;
                }else
                    if((*raiz)->direita == 0)
                    {
                        *raiz = (*raiz)->esquerda;
                        aux->esquerda = 0;
                        aux->direita = 0;
                        delete aux;
                    }
                    else  { (*raiz)->setDado(this->retornar_Maior(&(*raiz)->esquerda)); }
            }
            else
            {
                if((*raiz)->getDado() < elemento){removerRecursivo(&(*raiz)->direita,elemento);}
                else
                {
                    if((*raiz)->getDado() > elemento) { removerRecursivo(&(*raiz)->esquerda,elemento);}
                }
            }

        }
        else throw QString("Elemento não Existe");
    }
}
#endif // ARVOREBINARIA_H
