#ifndef ELEITOR_H
#define ELEITOR_H
#include <QString>
namespace PrimeiraLista {//Inicio_nameSpace

    class Eleitor
    {
    private:
       QString nome;
       int anoDeNascimento;
    public:
        Eleitor();
        inline void setNome(QString nomeP){nome=nomeP;}
        void setAnoDeNascimento(int anoDeNascimentoP);
        inline QString getNome()const{return nome;}
        inline int getAnoDeNascimento()const{return anoDeNascimento;}
        QString calcularTipoDeEleitor()const;
    };

}//Fim_nameSpace
#endif // ELEITOR_H
