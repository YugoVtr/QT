#ifndef PESSOA_H
#define PESSOA_H
#include <QString>

namespace PrimeiraLista
{//Inicio_nameSpace
    class Pessoa
    {
    private:
        //Declarando os atributos
        QString nome;
        int peso;
        float altura;
        QString  sexo;
    public:
        Pessoa(); //Construtor
        //Declarando Metodos
        inline void setNome(QString nomeP){nome = nomeP;}
        inline QString  getNome()const {return nome;}
        inline void setSexo(QString sexoP){sexo=sexoP;}
        inline QString getSexo()const {return sexo;}
        void setPeso(int pesoP);
        inline int getPeso()const{return peso;}
        void setAltura(float alturaP);
        inline float getAltura()const{return altura;}
        inline float calcularIMC()const{return (peso/(altura*altura));}
    };
}//Fim_nameSpace
#endif // PESSOA_H
