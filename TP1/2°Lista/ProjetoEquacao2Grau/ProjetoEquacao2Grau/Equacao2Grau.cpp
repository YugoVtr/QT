#include "Equacao2Grau.h"

namespace SegundaLista {//Inicio_namespace

    Equacao2Grau::Equacao2Grau()
    {
    }
    void Equacao2Grau::setCoeficienteA(int coeficienteA)
    {
        if(coeficienteA==0) throw QString (" COEFICIENTE 'a' NÃO PODE SER 0 ");
        this->coeficienteA=coeficienteA;
    }
    QString Equacao2Grau::calcularTipoDeRaiz()const
    {
        QString tipoDeRaiz;
        if (calcularDelta()<0)tipoDeRaiz=" NAO A RAIZES REAIS ";
        if (calcularDelta()==0)tipoDeRaiz=QString::number(calcularRaiz1());
        if (calcularDelta()>0){tipoDeRaiz=QString::number(calcularRaiz1())+" e "+QString::number(calcularRaiz2());}
        return tipoDeRaiz;
    }
}//Fim_namespace
