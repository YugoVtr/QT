#ifndef FUNCIONARIO_H
#define FUNCIONARIO_H
#include<string>

namespace PrimeiraLista
{//Inicio_namespace
    class Funcionario
    {
        private:
        std::string nomeCompleto;
        float salarioDoMes;
        int numeroDeFilhos;

        public:
        Funcionario();
        inline void setNomeCompleto(std::string nomeCompletoP){nomeCompleto=nomeCompletoP;}
        void setSalarioDoMes(float salarioDoMesP);
        void setNumeroDeFilhos(int numeroDeFilhosP);

        inline std::string getNomeCompleto()const{return nomeCompleto;}
        inline float getSalarioDoMes()const{return salarioDoMes;}
        inline int getNumeroDeFilhos()const{return numeroDeFilhos;}
        inline void calcularAumentoSalarial(float porcentagemP){salarioDoMes=salarioDoMes*(1+(porcentagemP/100));}

        float calcularINSS() const;
        float calcularParcelaImpostoDeRenda()const;
        float calcularValorMensalIRPF()const;
    };
}//Fim_namespace
#endif //FUNCIONARIO_H
