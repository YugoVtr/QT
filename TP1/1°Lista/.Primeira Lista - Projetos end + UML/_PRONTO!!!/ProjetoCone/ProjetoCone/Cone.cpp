#include "Cone.h"

namespace PrimeiraLista
{//Inicio
    Cone::Cone():
    raio(0),
    altura(0)
    {
    }
    void Cone::setRaio(float raioP){
        if(raioP<0) throw std::string (" RAIO NAO PODE ASSUMIR VALORES NEGATIVOS");
        raio=raioP;
    }
    void Cone::setAltura(float alturaP){
        if(alturaP<0) throw std::string (" ALTURA NAO PODE ASSUMIR VALORES NEGATIVOS");
        altura=alturaP;
    }
}//Fim_NameSpace
