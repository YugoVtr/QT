#ifndef ELEITOR_H
#define ELEITOR_H
#include <string>
namespace PrimeiraLista {//Inicio_nameSpace

    class Eleitor
    {
    private:
       std::string nome;
       int anoDeNascimento;
    public:
        Eleitor();
        inline void setNome(std::string nomeP){nome=nomeP;}
        void setAnoDeNascimento(int anoDeNascimentoP);
        inline std::string getNome()const{return nome;}
        inline int getAnoDeNascimento()const{return anoDeNascimento;}
        std::string calcularTipoDeEleitor()const;
    };

}//Fim_nameSpace
#endif // ELEITOR_H
