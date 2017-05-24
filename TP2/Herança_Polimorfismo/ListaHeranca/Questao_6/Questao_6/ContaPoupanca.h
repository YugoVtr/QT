#ifndef CONTAPOUPANCA_H
#define CONTAPOUPANCA_H
#include "Conta.h"

namespace TP2
{
    class ContaPoupanca : public Conta
    {
        private:
            float rendimento;
        public:
            ContaPoupanca(float rendimento):Conta(),rendimento(rendimento){}
            void setRendimento(float rendimento){this->rendimento=rendimento;}
            float getRendimento() const{return rendimento;}
            void addRendimento() {this->saldo = saldo*(1+rendimento);}
    };
}

#endif // CONTAPOUPANCA_H
