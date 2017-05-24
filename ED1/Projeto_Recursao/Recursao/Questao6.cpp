#include "Questao6.h"

namespace Recursao
{
    QString Questao6::lista_Par(int N)
    {
        if(N%2 == 1) return "ERRO";
        if(N==0) return QString("0");
        else return QString::number(N)+"  "+lista_Par(N-2);
    }
}
