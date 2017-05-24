#include "Questao17.h"

namespace Recursao
{

    float Questao17::pi(int i, int k, int sinal)
    {
        if(k==10000) return sinal*(4.0/i);
        else return sinal*(4.0/i) + pi(i+2,k+1,sinal*(-1));
    }

}
