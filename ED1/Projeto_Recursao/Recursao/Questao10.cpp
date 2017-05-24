#include "Questao10.h"

namespace Recursao
{
    int Questao10::multiplicar(int N1, int N2)
    {
        if(N1==1) return N2;
        else return N2+multiplicar(N1-1,N2);
    }
}
