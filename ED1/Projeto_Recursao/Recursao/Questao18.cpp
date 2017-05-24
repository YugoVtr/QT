#include "Questao18.h"

namespace Recursao
{
    int Questao18::fatorial(int n)
    {
        if(n==1||n==0) return 1;
        else return n * fatorial(n-1);
    }

    float Questao18::calcularE(int x, int i)
    {
        if(i==25) return pow(x,i)/fatorial(i);
        else return pow(x,i)/fatorial(i) + calcularE(x,i+1);
    }
}
