#include "CPF.h"

namespace SegundaLista
{

    CPF::CPF():
        numero(0)
    {
    }

    CPF::~CPF()
    {
    }
    void CPF::setCPF(long long numero)
    {
        if(numero<=0) throw QString (" CPF NAO PODE SER <= 0 ");
        if (validar(numero)==false) throw QString (" CPF invalido ");
        this->numero=numero;
    }
    bool CPF::validar(long long numero)
    {
        //valores que segue a regra matematica mas são invalidos
        if (numero==11111111111)return true;
        if (numero==22222222222)return true;
        if (numero==33333333333)return true;
        if (numero==44444444444)return true;
        if (numero==55555555555)return true;
        if (numero==66666666666)return true;
        if (numero==77777777777)return true;
        if (numero==88888888888)return true;
        if (numero>=99999999999)return true;

        //definir os digitos verificadores
        int digitoVerificador1=(numero%100)/10;
        int digitoVerificador2=(numero%10);
        int resultado1=0,resultado2=0;

         //Operação que valida o CPF - validando da DIREITA para a ESQUERDA
        long long pegarDigito=10000000000;
        for (int contador=11 ; contador>=2 ; contador--)
        {
            resultado2+=(numero/pegarDigito)*contador;
            if (contador>=3)resultado1+=(numero/pegarDigito)*(contador-1);
            numero=numero%pegarDigito;
            pegarDigito/=10;
        }
        resultado1=(resultado1*10)%11;
        if (resultado1==10) resultado1=0;

        resultado2=(resultado2*10)%11;
        if (resultado2==10) resultado2=0;

        //comparação entre o resultado e os digitos verificadores
        if(digitoVerificador1==resultado1&&digitoVerificador2==resultado2) return true;
        else return false;
    }
}

