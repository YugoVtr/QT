#ifndef EQUACAO2GRAU_H
#define EQUACAO2GRAU_H
#include <QString>
#include <cmath>

namespace SegundaLista {//Inicio_namespace

    class Equacao2Grau
    {
    private:
        int coeficienteA;
        int coeficienteB;
        int coeficienteC;

    public:
        Equacao2Grau();
        inline int getCoeficienteA()const{return coeficienteA;}
        inline int getCoeficienteB()const{return coeficienteB;}
        inline int getCoeficienteC()const{return coeficienteC;}
        void setCoeficienteA(int coeficienteA);
        inline void setCoeficienteB (int coeficienteB){this->coeficienteB=coeficienteB;}
        inline void setCoeficienteC (int coeficienteC){this->coeficienteC=coeficienteC;}
        inline int calcularDelta()const{return ((coeficienteB*coeficienteB)-(4*coeficienteA*coeficienteC));}
        float calcularRaiz1()const{return((-1)*coeficienteB + sqrt(calcularDelta()));}
        float calcularRaiz2()const{return((-1)*coeficienteB - sqrt(calcularDelta()));}
        QString calcularTipoDeRaiz()const;
    };

}//fim_namespace

#endif // EQUACAO2GRAU_H
