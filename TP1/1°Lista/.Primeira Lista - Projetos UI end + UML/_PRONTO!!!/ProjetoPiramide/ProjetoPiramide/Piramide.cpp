#include "Piramide.h"

namespace PrimeiraLista {//Inicio_nameSpace
    Piramide::Piramide()://Inicialização dos atributos
        base(0),
        altura(0)
    {
    }
    void  Piramide::setBase(float baseP){
        //Tratamento de exceção - alerta de exceçao
        if(baseP<0)throw QString(" Base nao pode assumir valore negativos ");
        base=baseP;
    }
    void  Piramide::setAltura(float alturaP){

        //Tratamento de exceção - alerta de exceçao
        if (alturaP<0) throw QString(" Altura nao pode assumir valore negativos ");
        altura=alturaP;
    }
}//Fim_nameSpace
