#ifndef PESSOA_H
#define PESSOA_H
#include <string>

namespace PrimeiraLista
{//Inicio_nameSpace
    class Pessoa
    {
    private:
        //Declarando os atributos
        std::string nome;
        int peso;
        float altura;
        std::string sexo;
    public:
        Pessoa(); //Construtor
        //Declarando Metodos
        inline void setNome(std::string nomeP){nome = nomeP;}
        inline std::string getNome()const {return nome;}
        inline void setSexo(std::string sexoP){sexo=sexoP;}
        inline std::string getSexo()const {return sexo;}
        void setPeso(int pesoP);
        inline int getPeso()const{return peso;}
        void setAltura(float alturaP);
        inline float getAltura()const{return altura;}
        inline float calcularIMC()const{return (peso/(altura*altura));}
    };
}//Fim_nameSpace
#endif // PESSOA_H
