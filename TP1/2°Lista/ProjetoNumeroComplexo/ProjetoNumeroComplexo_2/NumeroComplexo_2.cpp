#include "NumeroComplexo_2.h"

//passagem de parametro por valor - faz uma copia e nao altera as variaveis passadas por parametro (usar com tipos primitivos)
//passagem de parametro por referencia - (apelido)
        //metodo(int &x,int&y)

namespace SegundaLista {

    NumeroComplexo::NumeroComplexo():
        parteReal(0),
        parteImaginaria(0)
    {
    }
    NumeroComplexo::NumeroComplexo(int parteReal, int parteImaginaria):
        parteReal(parteReal),
        parteImaginaria(parteImaginaria)
    {
    }
    NumeroComplexo::NumeroComplexo(NumeroComplexo &numero):
        parteReal(numero.parteReal),
        parteImaginaria(numero.parteImaginaria)
    {
    }
    void  NumeroComplexo::set(int parteReal, int parteImaginaria)
    {
       this->parteReal=parteReal;
       this->parteImaginaria=parteImaginaria;
    }
    void  NumeroComplexo::set(NumeroComplexo &numero)
    {
        this->parteReal = numero.parteReal;
        this->parteImaginaria = numero.parteImaginaria;
    }
    QString  NumeroComplexo::get()const
    {
        QString saida = QString::number(this->parteReal);
        if (parteImaginaria>=0) saida+="+";
        saida+=QString::number(this->parteImaginaria);
        saida+="i";
        return saida;
    }

    NumeroComplexo NumeroComplexo::somar(NumeroComplexo &numero)const
    {
        NumeroComplexo resultado;
        resultado.parteReal=this->parteReal+numero.parteReal;
        resultado.parteImaginaria=this->parteImaginaria+numero.parteImaginaria;
        return resultado;
    }
    NumeroComplexo NumeroComplexo::subtrair(NumeroComplexo &numero)const
    {
        NumeroComplexo resultado;
        resultado.parteReal=this->parteReal-numero.parteReal;
        resultado.parteImaginaria=this->parteImaginaria-numero.parteImaginaria;
        return resultado;
    }
    NumeroComplexo NumeroComplexo::multiplicar(NumeroComplexo &numero)const
    {
        NumeroComplexo resultado;
        resultado.parteReal=(this->parteReal*numero.parteReal)-(this->parteImaginaria*numero.parteImaginaria);
        resultado.parteImaginaria=(this->parteReal*numero.parteImaginaria)+(this->parteImaginaria*numero.parteReal);
        return resultado;
    }
    NumeroComplexo NumeroComplexo::dividir(NumeroComplexo &numero)const
    {
        NumeroComplexo resultado;
        resultado.parteReal=((this->parteReal*numero.parteReal)+(this->parteImaginaria*numero.parteImaginaria))/((numero.parteReal*numero.parteReal)+(numero.parteImaginaria*numero.parteImaginaria));
        resultado.parteImaginaria=((this->parteImaginaria*numero.parteReal)-(this->parteReal*numero.parteImaginaria))/((numero.parteReal*numero.parteReal)+(numero.parteImaginaria*numero.parteImaginaria));
        return resultado;
    }
    bool NumeroComplexo::igualdade(NumeroComplexo &numero)const
    {
        if (this->parteReal==numero.parteReal && this->parteImaginaria==numero.parteImaginaria) return true;
        else return false;
    }
    bool NumeroComplexo::diferenca(NumeroComplexo &numero)const
    {
        if (this->parteReal!=numero.parteReal || this->parteImaginaria!=numero.parteImaginaria) return true;
        else return false;
    }

}
