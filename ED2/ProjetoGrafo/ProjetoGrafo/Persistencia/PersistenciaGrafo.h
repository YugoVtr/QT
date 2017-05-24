#ifndef PERSISTENCIA_GRAFO_H
#define PERSISTENCIA_GRAFO_H
#include "Matriz/Matriz.h"
#include "Grafo/Grafo.h"
#include "fstream"
#include "QFile"

namespace ED2 {
    class PersistenciaGrafo;
}
class PersistenciaGrafo
{
private:
    QString nome_No_Disco;
    std::string intToString(int i)const;

public:
    PersistenciaGrafo(QString nome_No_Disco):nome_No_Disco(nome_No_Disco){}
    QString getNome_No_Diso()const {return nome_No_Disco;}
    void salvar(Grafo* grafo)const;
    Grafo* carregar()const;
    Matriz* carregarToMatrix()const;
};


#endif // PERSISTENCIA_GRAFO_H
