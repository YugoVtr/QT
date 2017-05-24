#ifndef ESFERA_H
#define ESFERA_H
#include<string>
namespace TP1{//inicio

class Esfera
{
    //Atributos
private:
    float raio;

public:
    Esfera();
    float getRaio()const{return raio;}
    void setRaio(float raioP);
    float calcularVolume()const{return ( (4.0/3.0) * 3.1415 * raio * raio * raio );}
    inline float calcularArea()const{return (4.0 * 3.1415 * raio * raio);}
};

}//fim

#endif // ESFERA_H
