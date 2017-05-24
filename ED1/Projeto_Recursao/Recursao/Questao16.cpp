#include "Questao16.h"

namespace Recursao
{
    long long Questao16::fatorial(int n)
    {
        if(n==1) return 1;
        else return n * fatorial(n-1);
    }

    float Questao16::sen(int x, int y, int t, int l)
    {
        if(t==l) return pow(-1,t+1)*(pow(x,y)/fatorial(y));
        else return sen(x,y+2,t+1,l) + pow(-1,t+1)*(pow(x,y)/fatorial(y));
    }
}
