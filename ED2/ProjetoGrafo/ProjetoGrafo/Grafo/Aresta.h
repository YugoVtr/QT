#ifndef ARESTA_H
#define ARESTA_H
#include "Grafo/Vertice.h"

namespace ED2 {
    class Aresta;
}
class Aresta
{
    Vertice* origem;
    Vertice* destino;
    int peso;

public:
    Aresta(){}
    Aresta(Vertice* origem,Vertice* destino, int peso):origem(origem),destino(destino),peso(peso){}
    void setPeso(int peso){this->peso = peso;}
    void setOrigem(Vertice* const origem){this->origem = origem;}
    void setDestino(Vertice* const destino){this->destino = destino;}
    int getPeso()const{return this->peso;}
    Vertice* getOrigem()const{return this->origem;}
    Vertice* getDestino()const{return this->destino;}
};

#endif // ARESTA_H
