#include "Conta.h"

namespace TP2
{
    Conta::Conta():
        nomeDoCliente(""),
        agencia (0),
        numeroDaConta(0),
        saldo(0)
    {
    }
    float Conta::sacar(float valor){
        if(valor<0) throw QString (" VALOR NAO PODE SER < 0 ");
        if(valor>saldo) throw QString (" SALDO INSUFICIENTE PARA SAQUE ");
        saldo -= valor;
        return valor;
    }

    void Conta::depositar(float valor){
       if(valor<0) throw QString (" VALOR NAO PODE SER < 0 ");
       saldo += valor;
    }
}
