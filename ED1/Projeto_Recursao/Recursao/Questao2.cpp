#include "Questao2.h"
namespace Recursao
{
    int Questao2::calcularSomatorio(int N) const
    {
        if (N==1) return 1;
        else return pow(N,3)+calcularSomatorio(N-1);
    }
}
