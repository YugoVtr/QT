#ifndef CONJUNTO_H
#define CONJUNTO_H
#include<QString>

namespace QuartaLista
{
    class Conjunto
    {
    private:
        int tamanho;
        int indiceDeUso;
        int *array;
    public:
        Conjunto(int tamanho);
        ~Conjunto() {if(array) delete[] array;}
        int getTamanho()const{return tamanho;}
        int getIndiceDeUso()const{return indiceDeUso;}
        void setElemento(int elemento);
        int getElemento(int posicao)const;
        bool buscar(int elemento)const;
        QString getConjunto()const;
        bool eConjuntoVazio()const{return indiceDeUso==0;}
        Conjunto* uniao(Conjunto const * const objeto)const;
        Conjunto* intersecao(Conjunto const * const objeto)const;
        Conjunto* diferenca(Conjunto const * const objeto)const;
        bool eVazio()const;
        bool eSubConjuntoDe(Conjunto const * const objeto)const;
        bool eIdenticoHa(Conjunto const * const objeto)const;
        bool eDisjuntoHa(Conjunto const * const objeto)const;
        void ordenarCrescente();
        int calcularAmplitude()const;
        int calcularProdutoEscalar(Conjunto const * const objeto)const;
        Conjunto* obterMaiorSubCadeiaCrescente()const;
        Conjunto* obterMaiorSubCadeiaDecrescente()const;
        Conjunto* uniaoOrdenada(Conjunto const * const objeto);
        float calcularMediaAritmetica()const;
    };
}

#endif // CONJUNTO_H
