#include "Eleitor.h"
namespace PrimeiraLista {//inicio_nameSpace

    Eleitor::Eleitor():
          nome(""),
          anoDeNascimento(0)
    {
    }
    void Eleitor::setAnoDeNascimento(int anoDeNascimentoP){
        if(anoDeNascimentoP<0) throw QString (" ANO DE NASCIMENTO NAO PODE SER NEGATIVO ");
        anoDeNascimento=anoDeNascimentoP;
    }
    QString Eleitor::calcularTipoDeEleitor()const{
        QString tipoDeEleitor=" ELEITOR FACULTATIVO ";
        int const anoAtual = 2016;
        int idade = anoAtual - getAnoDeNascimento();
        if (idade < 16 ){tipoDeEleitor=" NAO ELEITOR ";}
        if (idade>=18 && idade<65){tipoDeEleitor=" ELEITOR OBRIGATORIO ";}
        return tipoDeEleitor;
    }
}//Fim_nameSpace
