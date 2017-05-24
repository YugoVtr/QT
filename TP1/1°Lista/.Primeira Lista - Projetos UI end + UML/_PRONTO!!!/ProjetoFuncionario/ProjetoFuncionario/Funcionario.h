#ifndef FUNCIONARIO_H
#define FUNCIONARIO_H
#include<QString>

namespace PrimeiraLista
{//Inicio_namespace
    class Funcionario
    {
        private:
        QString nomeCompleto;
        float salarioDoMes;
        int numeroDeFilhos;

        public:
        Funcionario();
        inline void setNomeCompleto(QString nomeCompletoP){nomeCompleto=nomeCompletoP;}
        void setSalarioDoMes(float salarioDoMesP);
        void setNumeroDeFilhos(int numeroDeFilhosP);

        inline QString getNomeCompleto()const{return nomeCompleto;}
        inline float getSalarioDoMes()const{return salarioDoMes;}
        inline int getNumeroDeFilhos()const{return numeroDeFilhos;}
        inline void calcularAumentoSalarial(float porcentagemP){salarioDoMes=salarioDoMes*(1+(porcentagemP/100));}

        float calcularINSS() const;
        float calcularParcelaImpostoDeRenda()const;
        float calcularValorMensalIRPF()const;
    };
}//Fim_namespace
#endif //FUNCIONARIO_H
