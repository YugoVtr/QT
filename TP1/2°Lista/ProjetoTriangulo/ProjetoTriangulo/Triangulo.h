#ifndef TRIANGULO_H
#define TRIANGULO_H
#include <QString>
#include <cmath>

namespace SegundaLista {//fimNameSpace

    class Triangulo
    {
    private:
        float ladoA;
        float ladoB;
        float ladoC;

    public:
        Triangulo();

        void setLados (float ladoA , float ladoB , float ladoC);
        inline float getLadoA()const{return ladoA;}
        inline float getLadoB()const{return ladoB;}
        inline float getLadoC()const{return ladoC;}
        float calcularArea()const;
        QString encontrarTipoPorLado()const;
        QString encontrarTipoPorAngulo()const;
    };
}//fimNameSpace

#endif // TRIANGULO_H
