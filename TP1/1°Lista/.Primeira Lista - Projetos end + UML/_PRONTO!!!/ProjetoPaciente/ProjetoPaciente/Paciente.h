#ifndef PACIENTE_H
#define PACIENTE_H
#include <string>

namespace PrimeiraLista
{//Inicio
    class Paciente
    {
    private:
    std::string nome;
    int peso;
    float altura;

    public:
    Paciente();
    inline void setNome(std::string nomeP){nome=nomeP;}
    void setPeso(int pesoP);
    void setAltura(float alturaP);
    std::string calcularFaixaDePeso()const;
    inline std::string getNome()const{return nome;}
    inline int getPeso()const{return peso;}
    inline float getAltura()const{return altura;}
    inline float calcularIMC()const{return(peso/(altura*altura));}
    };
}//Fim
#endif // PACIENTE_H
