#include "Questao15.h"

namespace Recursao
{
    float Questao15::calcularS(float n, float d, int t)
    {
        if(d==t) return (pow(-1,d+1)*(n/d));
        else{return pow(-1,d+1)*(n/d) + calcularS(n-3,d+1,t);}
    }
}
