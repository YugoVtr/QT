#include "Questao11.h"

namespace Recursao
{
    float Questao11::calcularS(float n, float d)
    {
        if(n==99) return 1;
        else return n/d + calcularS(n+2,d+1);
    }
}
