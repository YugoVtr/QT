#include "Vertice.h"

Vertice::Vertice(const std::string &descricao=""):
    descricao(descricao),
    adjacentes(),
    cor(branco),
    predecessor(0),
    distancia(INF)
{

}
void Vertice::addAdjacente(Vertice* vertice)
{
    if(adjacentes.find(vertice->getDescricao()) != adjacentes.end())
        throw std::string("Aresta já existe");
    adjacentes[vertice->getDescricao()] = vertice;
}

void Vertice::clear(){
    cor = branco;
    predecessor = 0;
    distancia = INF;
}
