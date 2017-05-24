#ifndef GRAFO_H
#define GRAFO_H
#include <QList>
#include "Vertice.h"
#include "Aresta.h"
#include "Matriz/Matriz.h"

namespace ED2 {
    class Grafo;
}

class Grafo
{
private:
    std::unordered_map<std::string,Vertice*> vertices;
    std::unordered_map<std::string,Aresta*> arestas;

    void bfs(Vertice *origem);
    std::string print_path(Vertice origem,Vertice destino);
    std::string intToString(int i)const;

public:
    Grafo();
    Grafo(Matriz* grafo);
    ~Grafo();
    void createVertice(const std::string &descricao);
    void createAresta(std::string origem, std::string destino,int peso, bool isDirected);
    bool isDirected()const;
    int verticeCount()const;
    int arestaCount()const;
    Matriz* toMatrix()const;
    Grafo* fromMatrix(Matriz* matriz);
    void bfs(std::string origem);
    std::string print_path(std::string origem, std::string destino);
    void clear();
    bool isEmpty()const{return vertices.empty();}
    std::queue<std::string> *vertice();
    std::queue<std::string> *aresta(const std::string &origem);
};

#endif // GRAFO_H
