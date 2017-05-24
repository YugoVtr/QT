#include "Questao3.h"

namespace Recursao
{
    QString Questao3::listar(int N)
    {
        if(N==0) return QString("0");
        else return listar(N-1)+"  "+QString::number(N);
    }
}

