#include "Calculadora.h"

namespace SegundaLista {

    Calculadora::Calculadora():
        numero1(0),
        numero2(0)
    {

    }

    Calculadora::~Calculadora()
    {

    }

    float Calculadora::dividir()const
    {
        if (numero2==0) throw QString (" DIVISAO NAO E POSSIVEL POR 0 ");
        return (numero1/numero2);
    }
    float Calculadora::calcularPotencia()const
    {
        if(numero1==0&&numero2==0)throw QString (" NAO E POSSIVEL POTENCIA DE 0 a 0 ");
        return (std::pow(numero1,numero2));
    }
    float Calculadora::calcularRaiz()const
    {
        if (numero1<0) throw QString (" NAO E POSSIVEL REALIZAR RAIZ DE VALOR NEGATIVO ");
        if (numero2==0) throw QString (" INDICE NÃO PODE SER 0 ");

        return (std::pow(numero1,(1/numero2)));
    }
}
