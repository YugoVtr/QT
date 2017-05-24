#include "Esfera.h"
namespace PrimeiraLista
{//inicio_nameSpace
    Esfera::Esfera():
        raio(0)
    {
    }
    void Esfera::setRaio(float raioP){
        if(raioP<0) throw std::string("Raio nao pode ser negativo");
        raio = raioP;
    }
}//fim_nameSpace
