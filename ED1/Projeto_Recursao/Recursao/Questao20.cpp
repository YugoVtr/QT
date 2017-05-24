#include "Questao20.h"

namespace Recursao
{
    int Questao20::mdc(int x, int y)
    {
        if(x%y==0) return  y;
        else
            if(x<y) mdc(y,x);
            else return mdc(y,x%y);
    }
}
