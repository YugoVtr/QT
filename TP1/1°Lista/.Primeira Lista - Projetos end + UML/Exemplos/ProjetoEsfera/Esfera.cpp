#include "Esfera.h"
namespace TP1{//inicio
Esfera::Esfera():
    raio(0)
{
}

void Esfera::setRaio(float raioP){
    if(raioP<0) throw std::string("Raio nao pode ser negativo");
    raio = raioP;
}

}//fim
