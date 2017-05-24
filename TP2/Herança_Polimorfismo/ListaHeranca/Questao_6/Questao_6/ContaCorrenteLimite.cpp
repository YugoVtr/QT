#include "ContaCorrenteLimite.h"
namespace TP2
{
    float ContaCorrenteLimite::sacar(float valor)
    {
        if(valor<0) throw QString (" VALOR NAO PODE SER < 0 ");
        if(valor>saldo+limite) throw QString (" SALDO INSUFICIENTE PARA SAQUE ");
        saldo -= valor;
        return valor;
    }
}
