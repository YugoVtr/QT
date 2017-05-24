#ifndef VEICULO_H
#define VEICULO_H
#include "QString"

namespace TP2 {class Veiculo;}

class Veiculo
{
    public:
        virtual ~Veiculo();
        virtual QString ligar()const=0;
        virtual QString desligar()const=0;
        virtual QString mover()const=0;
        virtual QString virar(QString direcao)const=0;
};

#endif // VEICULO_H
