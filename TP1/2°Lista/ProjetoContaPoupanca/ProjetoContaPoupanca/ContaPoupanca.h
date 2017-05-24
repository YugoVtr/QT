#ifndef CONTAPOUPANCA_H
#define CONTAPOUPANCA_H
#include <QString>

namespace SegundaLista {

class ContaPoupanca
{
    private:
        QString nomeDoCliente;
        int agencia;
        int numeroDaConta;
        float saldo;

    public:
        ContaPoupanca();
        QString getNomeDoCliente()const{ return nomeDoCliente;}
        int getAgencia()const { return agencia;}
        int getNumeroDaConta ()const {return numeroDaConta;}
        float getSaldo()const {return saldo;}

        void setNomeDoCliente(QString nomeDoCliente){ this->nomeDoCliente=nomeDoCliente; }
        void setAgencia ( int agencia ){ this->agencia = agencia;}
        void setNumeroDaConta ( int numeroDaConta ){this->numeroDaConta=numeroDaConta; }

        float sacar(float valor);
        void depositar(float valor);

};
}

#endif // CONTAPOUPANCA_H
