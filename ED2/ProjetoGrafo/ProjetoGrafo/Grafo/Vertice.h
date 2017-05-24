#ifndef VERTICE_H
#define VERTICE_H
#define INF INT_MAX
#include "Includes.h"

namespace ED2 {
    class Vertice;
}

//Cores que o vertice pode assumir
enum Cores { branco, cinza, preto };

class Vertice
{
private:
    std::string descricao;
    std::unordered_map<std::string,Vertice*> adjacentes;
    Cores cor;
    Vertice* predecessor;
    int distancia;

public:
    Vertice(){}
    Vertice(const std::string &descricao);
    //==================  Metodos not Const  ======================
    inline void setCor(Cores value) {cor = value;}
    inline void setPredecessor(Vertice * pai){predecessor=pai;}
    inline void setDistancia(int value) {distancia = value;}
    inline void setDescricao(std::string descricao){this->descricao = descricao;}

    void addAdjacente(Vertice* aresta);
    void clear();

    //================ Metodos Const =======================
    inline std::string getDescricao()const {return descricao;}
    inline std::unordered_map<std::string,Vertice*> getAdjacentes()const {return this->adjacentes;}
    inline Cores getCor()const{return cor;}
    inline Vertice* getPredecessor()const{return predecessor;}
    inline int getDistancia()const {return distancia;}
};

#endif // VERTICE_H
