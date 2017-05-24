#ifndef CILINDRO_H
#define CILINDRO_H
#include<QString>

namespace PrimeiraLista
{
        class Cilindro
    {
        private:
        float raio;
        float altura;

        public:
        Cilindro();
        void setRaio(float raioP);
        void setAltura(float alturaP);
        inline float getRaio()const{return raio;}
        inline float getAltura()const{return altura;}
        inline float calcularAreaTotal() const{return (2*3.1415*raio*(altura+raio));}
        inline float calcularVolume() const{return (3.1415*raio*raio*altura);}
        inline float calcularAreaLateral() const{return (2*3.1415*raio*altura);}
    };

}
#endif //CILINDRO_H
