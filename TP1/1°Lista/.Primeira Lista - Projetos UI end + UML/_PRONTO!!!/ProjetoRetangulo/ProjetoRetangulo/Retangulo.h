#ifndef RETANGULO_H
#define RETANGULO_H
#include<QString>

namespace PrimeiraLista {//inicio_nameSpace

    class Retangulo
    {
        // Atributos
    private:
        float comprimento;
        float largura;
        // Metodos
    public:
        Retangulo();
        void setComprimento(float comprimentoP);
        void setLargura(float larguraP);
        inline float getComprimento()const{ return comprimento; }
        inline float getLargura()const { return largura; }
        inline float calcularPerimetro()const { return (largura+largura+comprimento+comprimento);}
        inline float calcularArea()const { return (largura*comprimento);}
    };
}//fim_nameSpace
#endif // RETANGULO_H
