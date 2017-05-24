#include "Fila.h"

namespace ED1
{
    Fila::Fila(int tamanho):
        inicio(-1),
        fim(-1),
        tamanho(0),
        quantidadeDeElementos(0),
        array(0)
    {
        try
        {
            if(tamanho<1) throw QString ("tamanho invalido");
            array = new QString[tamanho];
            this->tamanho = tamanho;
        }  catch (std::bad_alloc&){ throw QString("Sua maquina esta sem memoria");}
    }
    void Fila::inserir(QString elemento)
    {
        if(quantidadeDeElementos==tamanho) throw QString("Fila cheia");
        fim = fim+1;
        if(fim==tamanho) fim=0;
        array[fim] = elemento;
        quantidadeDeElementos = quantidadeDeElementos + 1;
        if(inicio == -1) inicio = 0;
    }
    void Fila::remover()
    {
        if(this->eVazia())throw QString ("Fila vazia");
        if(inicio==fim)
        {
            inicio=-1;
            fim=-1;
        }
        else
        {
            if(inicio==tamanho-1) inicio = 0;
            else inicio = inicio + 1;
        }
        quantidadeDeElementos = quantidadeDeElementos - 1;

    }
    QString Fila::acessar()const
    {
        if(this->eVazia()) throw QString ("Pilha esta vazia");
        QString saida = this->array[inicio];
        return saida;
    }
    bool Fila::eVazia()const
    {
        if(inicio == -1 && fim==-1) return true;
        return false;
    }

    QString Fila::getFila()
    {
        try
        {
            QString fila = "";
            ED1::Fila copia(this->tamanho);
            while(!this->eVazia())
            {
                copia.inserir(this->acessar());
                this->remover();
            }
            while(!copia.eVazia())
            {
                fila += copia.acessar() + "  |  ";
                this->inserir(copia.acessar());
                copia.remover();
            }

            return fila;

        }catch(QString) { throw QString("Não foi possivel retornar a fila");}
    }
}

