#ifndef PACIENTE_H
#define PACIENTE_H
#include <QString>

namespace PrimeiraLista
{//Inicio
    class Paciente
    {
    private:
    QString nome;
    int peso;
    float altura;

    public:
    Paciente();
    inline void setNome(QString nomeP){nome=nomeP;}
    void setPeso(int pesoP);
    void setAltura(float alturaP);
    QString calcularFaixaDePeso()const;
    inline QString getNome()const{return nome;}
    inline int getPeso()const{return peso;}
    inline float getAltura()const{return altura;}
    inline float calcularIMC()const{return(peso/(altura*altura));}
    };
}//Fim
#endif // PACIENTE_H
