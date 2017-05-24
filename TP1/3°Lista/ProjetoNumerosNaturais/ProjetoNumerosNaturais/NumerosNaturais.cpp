#include "NumerosNaturais.h"

namespace TerceiraLista
{
    NumerosNaturais::NumerosNaturais():
        numero(0)
    {
    }
    NumerosNaturais::NumerosNaturais(long numero)
    {
        if(numero<0)throw QString("Numero nao natural");
        this->numero=numero;
    }
    NumerosNaturais::NumerosNaturais(NumerosNaturais &objeto):
        numero(objeto.numero)
    {
    }
    void NumerosNaturais::set(long numero)
    {
        if(numero<0)throw QString("Numero nao natural");
        this->numero=numero;
    }
    void NumerosNaturais::set(NumerosNaturais &objeto)
    {
        this->numero=objeto.numero;
    }
    NumerosNaturais NumerosNaturais::calcularFatorial() const
    {
        long resultado=1;
        for(long valor=this->numero; valor>1 ; valor--) resultado *= valor;

        NumerosNaturais fatorial(0);
        if(this->numero>12) return fatorial; //Para não fazer o fatorial maior que 16
        fatorial.set(resultado);
        return fatorial;
    }
    bool NumerosNaturais::eNumeroPerfeito()const
    {
        long numero=this->numero,resultado=0;
        bool saida=false;
        for(int contador=1; contador<numero; contador++)
        {
            if (numero%contador==0)	resultado+=contador;
        }
        if (resultado==numero) saida=true;
        return saida;
    }
    bool NumerosNaturais::eCapicua()const
    {
        long numero=this->numero,digito;
        bool saida=false;
        long numeroAuxiliar = numero;

        int inverso=0;
        for (;numero!=0;numero/=10 )
        {
            digito=numero%10;
            inverso=(inverso*10)+digito;
        }
        if (inverso==numeroAuxiliar) saida = true;
        return saida;
    }
    bool NumerosNaturais::eQuadradoPerfeito()const
    {
        long numero=this->numero;
        long teste;
        bool saida=false;
        teste=sqrt(numero);
        if(sqrt(numero)==teste) saida = true;
        return saida;
    }
    bool NumerosNaturais::eNumeroPrimo()const
    {
        bool saida=false;
        long numero=this->numero,divisores=0;

        for(int contador=1;contador<=numero;contador++)
            {if(numero%contador==0) divisores++;}

        if (divisores==2)saida=true;
        return saida;
    }
    QString NumerosNaturais::mudarBase(int base)const
    {
        QString resultado="";
        QString algarismos="0123456789ABCDEF";
        for(int valor=this->numero; valor!=0 ;valor/=base) resultado=algarismos[valor%base]+resultado;
        if(resultado=="") resultado="0";            // Retornar a conversão de 0
        return resultado;
    }
    NumerosNaturais NumerosNaturais::calcularMDC(NumerosNaturais &objeto)const
    {
        long numero2=0;
        if(this->numero!=0 && objeto.numero!=0) // para não fazer o calculo com 0
        {
            long resto=1,numero=this->numero;
            numero2=objeto.numero;
            while(numero != 0)
            {
                resto = numero2 % numero;
                numero2 = numero;
                numero = resto;
            }
        }
        NumerosNaturais MDC(numero2);
        return MDC;
    }
    NumerosNaturais NumerosNaturais::calcularMMC(NumerosNaturais &objeto)const
    {
        NumerosNaturais MMC(0);
        if(this->numero!=0 && objeto.numero!=0) // para nao fazer o calculo com 0
        {
            long resto=1,numero1=this->numero,numero2=objeto.numero;
            while(resto!=0)
            {
                resto = numero1 % numero2;
                numero1 = numero2;
                numero2 = resto;
            }
            MMC.set(this->numero*objeto.numero/numero1);
        }
        return MMC;
    }
    bool NumerosNaturais::ePrimoCom(NumerosNaturais &objeto)const
    {
        NumerosNaturais MDC;
        MDC=calcularMDC(objeto);
        if(MDC.numero==1)return true;
        else return false;
    }
}
