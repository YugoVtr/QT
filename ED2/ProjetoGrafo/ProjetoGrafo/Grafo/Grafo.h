#ifndef GRAFO_H
#define GRAFO_H
#include "Vertice.h"
#include "Aresta.h"
#include "Matriz/Matriz.h"

/*  -------------------------- CLASSE GRAFO --------------------------------
 * CRIADO POR: Vitor Hugo R. Miranda
 * DESCRIÇÃO: Classe para de Cadastro de Grafos atraves da representação por
 *            por lista de adjacencia.
 * ATRIBUTOS:
 *      # vertices: Estrutura de dados utilizada para implementar a lista de
 *                  adjacencia.
 *      # arestas:  Estrutura de dados utilizada utilizada para armazenar os
 *                  vertices do grafo.
 * METODOS: Os metodos estão descritos em suas respectivas implementações.
 *          (veja grafo.cpp)
 *
 * OBSERVAÇÕES: Foi utilizado para representar a lista de adjacencia e o con_
 *              junto de arestas do grafo uma implementação de tabela hash com
 *              o objetivo de otimizar a busca de um vertice ou aresta.
 *              A classe utilizada esta presente na biblioteca STL - a classe
 *              UNORDERED_MAP.
 *
 *              O cadastro do grafo informando a matriz de adjacencia foi feito
 *              utilizando a classe MATRIZ, implementada por mim na disciplina
 *              de TP2. Esta versão do grafo não considera uma matriz de inci_
 *              dencia com pesos, ou seja, o grafo cadastrado a partir da matriz
 *              de incidencia possui apenas arestas com peso.
 *---------------------------------------------------------------------------*/

namespace ED2 {
    class Grafo;
}

class Grafo
{
private:
    //================================ MEMBROS PRIVADOS =========================================
    std::unordered_map<std::string,Vertice*> vertices;                      //Lista de Adjacencia
    std::unordered_map<std::string,Aresta*> arestas;                        //Conjunto de Arestas

    void bfs(Vertice *origem);                                              //Busca em largura
    std::string print_path(Vertice origem,Vertice destino);                 //Impressão do BFS
    std::string intToString(int i)const;
    std::string montarDescricaoAresta(const std::string &origem, const std::string &destino)const;

    //=============================== MEMBROS PUBLICOS ===========================================
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
    std::stack<std::string> *vertice();
    std::stack<std::string> *aresta(const std::string &origem);
    bool find_Vertice(const std::string &descricao)const;
    bool find_Aresta (const std::string &origem, const std::string &destino)const;
};

#endif // GRAFO_H
