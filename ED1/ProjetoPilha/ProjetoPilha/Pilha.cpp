#include "Pilha.h"

namespace ED1
{
    Pilha::Pilha(int limite):
        array(0),
        limite(0),
        topo(-1)
    {
        try
        {
            if(limite<1) throw QString ("tamanho invalido");
            array = new int[limite];
            this->limite = limite;
        }  catch (std::bad_alloc&)
        {
            throw QString("Sua maquina esta sem memoria");
        }
    }
    QString Pilha::getPilha()const
    {
        QString saida = "";
        for(int contador = topo ; contador > -1 ; contador-- )
        {
            saida += QString::number(this->array[contador]);
            saida += "\n";
        }
        return saida;
    }
    void Pilha::inserirElemento(int valor)
    {
        if (topo == this->limite-1) throw QString ("Pilha cheia");
        this->array[topo+1] = valor;
        topo = topo + 1;
    }
    int Pilha::acessarElementoTopo()const
    {
        if(this->ePilhaVazia()) throw QString ("Pilha vazia");
        return array[topo];
    }
    void Pilha::removerElemento()
    {
        if(this->ePilhaVazia()) throw QString ("Pilha ja esta vazia");
        topo = topo - 1;
    }
    bool Pilha::ePilhaVazia()const
    {
        if(topo == -1) return true;
        return false;
    }
}
