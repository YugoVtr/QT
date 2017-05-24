#include "Questao4.h"

namespace Recursao
{
    QString Questao4::listar(int N)
    {
        if(N==0) return QString("0");
        else return QString::number(N)+"  "+listar(N-1);
    }
}
