#ifndef PILOTO_H
#define PILOTO_H
#include "QString"
#include "Interface_Piloto.h"
#include "QStringList"

namespace TP2
{
    class Piloto : public Interface_Piloto
    {
        private:
            int codigo;
            QString nome;
            QString pais;
            int idade;
            QString equipe;
            QString motor;
            int quantidadeDePontos;

        public:
            Piloto(): codigo(0),nome(""),pais(""),idade(0),equipe(""),motor(""),quantidadeDePontos(0){}
            virtual ~Piloto(){}

            inline void setCodigo(int codigo){this->codigo=codigo;}
            inline void setNome(const QString &nome){this->nome=nome;}
            inline void setPais(const QString &pais){this->pais=pais;}
            inline void setIdade(int idade){this->idade=idade;}
            inline void setEquipe(const QString &equipe){this->equipe=equipe;}
            inline void setMotor(const QString &motor){this->motor=motor;}
            inline void setQuantidadeDePontos(int quantidadeDePontos){this->quantidadeDePontos=quantidadeDePontos;}
            inline int getCodigo() const{return codigo;}
            inline QString getNome() const{return nome;}
            inline QString getPais() const{return pais;}
            inline int getIdade() const{return idade;}
            inline QString getEquipe() const{return equipe;}
            inline QString getMotor() const{return motor;}
            inline int getQuantidadeDePontos() const{return quantidadeDePontos;}
            void carregarDados(QString dados);                                                                          //Metodo Herdado
    };
}


#endif // PILOTO_H
