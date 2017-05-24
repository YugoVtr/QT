#ifndef CALCULADORA_H
#define CALCULADORA_H
#include <QString>
#include <cmath>

namespace SegundaLista {


class Calculadora
{
private:
    float numero1;
    float numero2;
public:
    Calculadora();
    ~Calculadora();
    inline float getNumero1()const{return numero1;}
    inline float getNumero2()const {return numero2;}
    inline void setNumero1(float numero1){this->numero1=numero1;}
    inline void setNumero2 (float numero2){this->numero2=numero2;}
    inline float adicionar()const {return (numero1+numero2);}
    inline float subtrair()const { return (numero1-numero2);}
    inline float multiplicar()const { return (numero1*numero2);}
    float dividir()const;
    float calcularRaiz()const;
    float calcularPotencia()const;
};

}
#endif // CALCULADORA_H
