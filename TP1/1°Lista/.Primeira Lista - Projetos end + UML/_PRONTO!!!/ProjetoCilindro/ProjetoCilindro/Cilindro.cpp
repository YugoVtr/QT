#include "Cilindro.h"
namespace PrimeiraLista
{//inicio_nameSpace
    Cilindro::Cilindro():
    raio (0),
    altura (0)
    {
    }
    void Cilindro::setRaio(float raioP){
        if(raioP<0) throw std::string (" RAIO NAO PODE ASSUMIR VALORES NEGATIVOS ");
        raio=raioP;
    }
    void Cilindro::setAltura(float alturaP){
        if(alturaP<0) throw std::string (" ALTURA NAO PODE ASSUMIR VALORES NEGATIVOS ");
        altura=alturaP;
    }
}//fim_nameSpace
