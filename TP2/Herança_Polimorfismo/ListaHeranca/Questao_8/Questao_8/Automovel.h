#ifndef AUTOMOVEL_H
#define AUTOMOVEL_H
#include "Veiculo.h"

namespace TP2 {class Automovel;}

class Automovel : public Veiculo
{
    private:
        int numeroDeRodas;
        QString placa;
    public:
        Automovel():numeroDeRodas(0),placa(""){}

        void setNumeroDeRodas(int numeroDeRodas){this->numeroDeRodas = numeroDeRodas;}
        void setPlaca(const QString &placa){this->placa=placa;}
        int getNumeroDeRodas()const{return numeroDeRodas;}
        QString getPlaca() const{return placa;}

        QString ligar()const{ return "Veiculo Ligado";}
        QString desligar()const{return "Veiculo Desligado";}
        QString mover()const{return "Veiculo em movimento";}
        QString virar(QString direcao)const{return "Veiculo virou para "+ direcao;}
};

#endif // AUTOMOVEL_H
