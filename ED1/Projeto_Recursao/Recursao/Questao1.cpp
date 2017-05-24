#include "Questao1.h"

namespace Recursao
{
    int Questao1::calcularSomatorio(int N) const
    {
        if (N==1) return 1;
        else return N + calcularSomatorio(N-1);
    }
}
