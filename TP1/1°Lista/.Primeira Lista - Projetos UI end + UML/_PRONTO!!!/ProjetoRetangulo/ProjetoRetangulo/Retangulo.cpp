#include "Retangulo.h"

namespace PrimeiraLista {//inicio_nameSpace
    Retangulo::Retangulo():
        comprimento(0),
        largura(0)
    {
    }
    void Retangulo::setComprimento(float comprimentoP){
        //Excecao
        if(comprimentoP<0) throw QString (" COMPRIMENTO NAO PODE ASSUMIR VALOR NEGATIVO ");
        comprimento=comprimentoP;
    }
    void Retangulo::setLargura(float larguraP){
        //Excecao
        if (larguraP<0)throw QString (" LARGURA NAO PODE ASSUMIR VALOR NEGATIVO ");
        largura=larguraP;
    }
}//fim _nameSpace
