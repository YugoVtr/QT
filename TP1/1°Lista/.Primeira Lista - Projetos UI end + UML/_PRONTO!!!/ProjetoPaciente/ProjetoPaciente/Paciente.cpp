#include "Paciente.h"
namespace PrimeiraLista{//inicio_nameSpace
    Paciente::Paciente():
         nome(""),
         peso(0),
         altura(0)
    {
    }
    void Paciente::setPeso(int pesoP){
        if(pesoP<0)throw QString(" PESO NAO PODE ASSUMIR VALOR NEGATIVO ");
        peso=pesoP;
    }
    void Paciente::setAltura(float alturaP){
        if(alturaP<0)throw QString(" ALTURA NAO PODE ASSUMIR VALOR NEGATIVO ");
        altura=alturaP;
    }
    QString Paciente::calcularFaixaDePeso()const{
        QString faixaDePeso = " PESO NORMAL ";
         if (calcularIMC()< 20.0){faixaDePeso = " ABAIXO DO PESO IDEAL ";}
         if (calcularIMC()> 25.0 && calcularIMC()<= 30.0){faixaDePeso = " EXCESSO DE PESO ";}
         if (calcularIMC()> 30.0 && calcularIMC()<= 35.0){faixaDePeso = " OBESIDADE ";}
         if (calcularIMC()> 35.0){faixaDePeso = " OBESIDADE MORBIDA ";}
         return faixaDePeso;
    }
}//fim_nameSpace
