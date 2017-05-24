#include "Questao9.h"

namespace Recursao
{
    int Questao9::calcularK(int x, int y)
    {
        if(y==1) return x;
        else return x*calcularK(x,y-1);
    }
}
