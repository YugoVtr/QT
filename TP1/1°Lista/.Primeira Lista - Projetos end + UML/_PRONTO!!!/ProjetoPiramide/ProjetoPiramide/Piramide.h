#ifndef PIRAMIDE_H
#define PIRAMIDE_H
#include <string>

namespace PrimeiraLista
{//Inicio_nameSpace
    class Piramide
    {//Declaração dos atributos
    private:
        float base;
        float altura;
    public:
        Piramide();//Construtor
        inline float getBase()const{return base;}
        inline float getAltura()const{return altura;}
        void setBase(float baseP);
        void setAltura(float alturaP);
        inline float calcularVolume()const{return((1.0/3.0)*base*altura);}
    };
}//Fim_nameSpace

#endif // PIRAMIDE_H
