#include "ContaPoupanca.h"

namespace SegundaLista {

    ContaPoupanca::ContaPoupanca():
        nomeDoCliente(""),
        agencia (0),
        numeroDaConta(0),
        saldo(0)
    {
    }
    float ContaPoupanca::sacar(float valor){
        if(valor<0) throw QString (" VALOR NAO PODE SER < 0 ");
        if(valor>saldo) throw QString (" SALDO INSUFICIENTE PARA SAQUE ");
        saldo -= valor;
        return valor;
    }

    void ContaPoupanca::depositar(float valor){
       if(valor<0) throw QString (" VALOR NAO PODE SER < 0 ");
       this->saldo += valor;    // o THIS e so pra lembrar que pode ser usado em qualquer lugar, mas nao precisa pois nao existe outro VALOR
    }
}
