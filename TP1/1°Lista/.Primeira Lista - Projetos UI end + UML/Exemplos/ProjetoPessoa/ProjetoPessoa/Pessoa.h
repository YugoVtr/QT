#ifndef PESSOA_H
#define PESSOA_H
#include<QString>

namespace TP1{//inicio
class Pessoa{
    //Atributos
private:
    QString nomeCompleto;
    int peso;
    float altura;
    QString sexo;

public:
    Pessoa();
    QString getNomeCompleto()const{return nomeCompleto;}
    int getPeso()const{return peso;}
    float getAltura()const{return altura;}
    QString getSexo()const{return sexo;}
    void setNomeCompleto(QString nome){nomeCompleto = nome;}

    void setPeso(int pesoP);
    void setAltura(float alturaP);

    void setSexo(QString sexoP){sexo = sexoP;}
    float calcularIMC()const{return (peso/(altura*altura));}
};

}//fim

#endif // PESSOA_H
