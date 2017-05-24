#ifndef CONTA_H
#define CONTA_H
#include <QString>

namespace TP2 {

    class Conta
    {
        protected:
            QString nomeDoCliente;
            int agencia;
            int numeroDaConta;
            float saldo;

        public:
            Conta();
            QString getNomeDoCliente()const{ return nomeDoCliente;}
            int getAgencia()const { return agencia;}
            int getNumeroDaConta ()const {return numeroDaConta;}
            float getSaldo()const {return saldo;}

            void setNomeDoCliente(QString nomeDoCliente){ this->nomeDoCliente=nomeDoCliente; }
            void setAgencia ( int agencia ){ this->agencia = agencia;}
            void setNumeroDaConta ( int numeroDaConta ){this->numeroDaConta=numeroDaConta; }

            virtual float sacar(float valor);
            virtual void depositar(float valor);
    };
}

#endif // CONTA_H
