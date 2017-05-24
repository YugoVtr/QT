#include "Questao12.h"

namespace Recursao
{
    long double Questao12::calcularS(int n, int d)
    {
        if(d==1) return pow(2.0,50);
        else return (pow(2,n)/d) + calcularS(n+1,d-1);
    }
}
