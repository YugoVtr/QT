#ifndef CONE_H
#define	CONE_H
#include<QString>
#include <cmath>

namespace PrimeiraLista{//inicio_namespace
    class Cone
    {
        //Atributos
        private:
        float raio;
        float altura;
        //Metodos
        public:
        Cone();
        void setRaio(float raioP);
        void setAltura(float alturaP);
        inline float getRaio() const{return raio;}
        inline float getAltura() const{return altura;}
        inline float calcularGeratriz()const{return(std::sqrt((altura*altura)+(raio*raio)));}
        inline float calcularVolume()const{return ((1.0/3.0)*3.1415*(raio*raio)*altura);}
        inline float calcularAreaLateral()const{return (3.1415*raio*calcularGeratriz());}
        inline float calcularAreaTotal()const{return (3.1415*raio*(calcularGeratriz()+raio));}
    };
}//fim_nameSpace

#endif //CONE_H
