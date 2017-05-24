#include "Funcionario.h"

namespace PrimeiraLista
{//Inicio_namespace
    Funcionario::Funcionario():
        nomeCompleto(""),
        salarioDoMes(0),
        numeroDeFilhos(0)
    {
    }
     void Funcionario::setSalarioDoMes(float salarioDoMesP){
        if(salarioDoMesP<0) throw QString (" SALARIO NAO PODE ASSUMIR VALOR NEGATIVO ");
        salarioDoMes=salarioDoMesP;
    }
     void Funcionario::setNumeroDeFilhos(int numeroDeFilhosP){
        if(numeroDeFilhosP<0) throw QString (" NUMERO DE FILHOS NAO PODE ASSUMIR VALOR NEGATIVO ");
        numeroDeFilhos=numeroDeFilhosP;
    }
     float Funcionario::calcularINSS() const{
         float INSS=salarioDoMes*0.1;
         if(salarioDoMes<=2545.00){INSS=salarioDoMes*0.06;}
         return INSS;
    }
     float Funcionario::calcularParcelaImpostoDeRenda()const{
        float aliquotaImposto=0.0, parcelaImpostoRenda=0.0;
        if(salarioDoMes>1903.98 && salarioDoMes<2826,66){aliquotaImposto=7.5;}
        if(salarioDoMes>2826.65 && salarioDoMes<3751.06){aliquotaImposto=15.0;}
        if(salarioDoMes>3751.05 && salarioDoMes<4664.69){aliquotaImposto=22.5;}
        if(salarioDoMes>4664.68 ){aliquotaImposto=27.5;}
        return (parcelaImpostoRenda=salarioDoMes*(aliquotaImposto/100));
    }
     float Funcionario::calcularValorMensalIRPF()const{
        float valorMensalIRPF = calcularParcelaImpostoDeRenda() - (545.00 * numeroDeFilhos);
        if(valorMensalIRPF < 0.0)
               valorMensalIRPF=0.0;
        return valorMensalIRPF;
    }
}//Fim_namespace
