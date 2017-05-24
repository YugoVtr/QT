#include "Cilindro.h"
namespace PrimeiraLista
{//inicio_nameSpace
    Cilindro::Cilindro():
    raio (0),
    altura (0)
    {
    }
    void Cilindro::setRaio(float raioP){
        if(raioP<0) throw QString (" RAIO NAO PODE ASSUMIR VALORES NEGATIVOS ");
        raio=raioP;
    }
    void Cilindro::setAltura(float alturaP){
        if(alturaP<0) throw QString (" ALTURA NAO PODE ASSUMIR VALORES NEGATIVOS ");
        altura=alturaP;
    }
}//fim_nameSpace
