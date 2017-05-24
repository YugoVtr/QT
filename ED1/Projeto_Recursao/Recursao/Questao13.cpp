#include "Questao13.h"

namespace Recursao
{
    long double Questao13::calcularS(int n1, int n2, int d)
    {
        if(d==37) return (n1*n2)/d;
        else return (n1*n2)/d + calcularS(n1-1,n2-1,d+1);
    }
}

