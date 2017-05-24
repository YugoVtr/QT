#ifndef PARALELEPIPEDO_H
#define PARALELEPIPEDO_H
#include<string>

namespace PrimeiraLista {//inicio_nameSpace
    class Paralelepipedo
    {
        //Atributos
    private:
        float altura;
        float largura;
        float comprimento;
        //Metodos
    public:
        Paralelepipedo();
        void setAltura(float alturaP);
        void setLargura(float larguraP);
        void setComprimento(float comprimentoP);
        inline float getAltura()const{return altura;}
        inline float getLargura()const{return largura;}
        inline float getComprimento()const{return comprimento;}
        inline float calcularVolume()const{return (altura*largura*comprimento);}
        inline float calcularArea()const{return (2*(altura*largura+altura*comprimento+largura*comprimento));}
    };
}//fim_nameSpace

#endif // PARALELEPIPEDO_H
