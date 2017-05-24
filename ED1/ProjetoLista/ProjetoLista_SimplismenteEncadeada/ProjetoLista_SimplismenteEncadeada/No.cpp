#include "No.h"
namespace ED1
{
    No::No():
        informacao(0),
        proximoElemento(0)
    {
    }
    No::No(int informacao, No *proximoElemento)
    {
        this->informacao = informacao;
        this->proximoElemento = proximoElemento;
    }
}

