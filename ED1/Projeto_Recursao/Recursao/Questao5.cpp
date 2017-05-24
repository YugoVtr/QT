#include "Questao5.h"

namespace Recursao
{
    QString Questao5::lista_Par(int N)
    {
        if(N%2 == 1) return "ERRO";
        if(N==0) return QString("0");
        else return lista_Par(N-2)+"  "+QString::number(N);
    }
}

