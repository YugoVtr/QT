#include "Questao8.h"

namespace Recursao
{
    QString Questao8::converter(int N) const
    {
        if(N/2==0) return QString::number(N%2);
        else return converter(N/2) + QString::number(N%2);
    }
}
