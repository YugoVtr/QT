#include "Pessoa_Fisica.h"

float Pessoa_Fisica::calcularImposto(float valor) const
{
    if(valor < 1400.01) return 0;
    else
    {
        if(valor > 3600.00) return valor*0.30;
        else
        {
            if(valor < 2100.01) return valor*0.10;
            else
            {
                if(valor > 2800.00) return valor*0.25;
                else return valor*0.15;
            }
        }
    }
}
