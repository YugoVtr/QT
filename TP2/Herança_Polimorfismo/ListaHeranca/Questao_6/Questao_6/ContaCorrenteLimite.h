#ifndef CONTACORRENTELIMITE_H
#define CONTACORRENTELIMITE_H
#include "Conta.h"

namespace TP2
{
    class ContaCorrenteLimite : public Conta
    {
        private:
            float limite;
        public:
            ContaCorrenteLimite(float limite):Conta(),limite(limite){}
            void setLimite(float limite){this->limite=limite;}
            float getLimite() const{return limite;}
            float sacar(float valor);
    };
}
#endif // CONTACORRENTELIMITE_H
