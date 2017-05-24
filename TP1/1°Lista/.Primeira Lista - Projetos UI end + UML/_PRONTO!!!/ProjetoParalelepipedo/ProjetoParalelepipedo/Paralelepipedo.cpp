#include "Paralelepipedo.h"

namespace PrimeiraLista {//inicio_nameSpace
    Paralelepipedo::Paralelepipedo():
        altura(0),
        largura(0),
        comprimento(0)
    {
    }
    void Paralelepipedo::setAltura(float alturaP){
        if(alturaP<0)throw QString (" ALTURA NAO PODE ASSUMIR VALOR NEGATIVO ");
        altura=alturaP;
    }
    void Paralelepipedo::setLargura(float larguraP){
        if (larguraP<0) throw QString(" LARGURA NAO PODE ASSUMIR VALOR NEGATIVO ");
        largura=larguraP;
    }
    void Paralelepipedo::setComprimento(float comprimentoP){
        if (comprimentoP<0) throw QString(" COMPRIMENTO NAO PODE ASSUMIR VALOR NEGATIVO ");
        comprimento=comprimentoP;
    }
}//fim_nameSpace
