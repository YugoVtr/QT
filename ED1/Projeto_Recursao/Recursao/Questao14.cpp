#include "Questao14.h"

namespace Recursao
{
    float Questao14::calcularS(float i)
    {
        if(i==10) return (pow(-1,i+1)*(i/pow(i,2)));
        else{return pow(-1,i+1)*(i/pow(i,2)) + calcularS(i+1);}
    }

    float Questao14::iterativo()
    {
        float saida=0;
        float i = 1;
        for(;i<=10;i++)
        {
            saida =  saida + (pow(-1,i+1)*(i/(pow(i,2))));
        }
        return saida;
    }
}
