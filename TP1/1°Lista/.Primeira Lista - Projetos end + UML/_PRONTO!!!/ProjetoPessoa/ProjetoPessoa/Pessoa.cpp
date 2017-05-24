#include "Pessoa.h"

namespace PrimeiraLista {//Inicio_nameSpace
    Pessoa::Pessoa():
        nome(" "),
        peso(0),
        altura(0),
        sexo(" ")
    {
    }
    void  Pessoa::setPeso(int pesoP){
        //Tratamento de exceção para peso negativo
        if(pesoP<0)throw std::string (" Peso nao pode possuir valores negativos ");
        peso=pesoP;
    }
    void  Pessoa::setAltura(float alturaP){
        //Tratamento de exceção para altura negativo
        if (alturaP<0) throw std::string (" Altura nao pode assumir valores nagativos");
        altura=alturaP;
    }
}//Fim_nameSpace
