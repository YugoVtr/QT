#ifndef BARCO_H
#define BARCO_H
#include "QString"
#include "Veiculo.h"
namespace TP2 {class Barco;}

class Barco
{
    private:
        bool propulcao;
        int capacidade;
    public:
        Barco(): propulcao(false),capacidade(0){}

        void setpropulcao(bool propulcao){this->propulcao = propulcao;}
        void setCapacidade(int capacidade){this->capacidade=capacidade;}
        bool getpropulcao() const{return propulcao;}
        int getCapacidade() const{return capacidade;}

        QString ligar()const{ return "Barco Ligado";}
        QString desligar()const{return "Barco Desligado";}
        QString mover()const{return "Barco em movimento";}
        QString virar(QString direcao)const{return "Barco virou para "+ direcao;}
};

#endif // BARCO_H
