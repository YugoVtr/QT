#include <iostream>
#include <Funcionario.h>

int main(void)
{
    bool executor=true;
    int resposta=1;
    do{//inicio_laco
        try{//inicio_try
            PrimeiraLista::Funcionario fulano;
            std::string nomeCompleto=" ";
            int numeroDeFilhos=0;
            float salarioDoMes=0.0,porcentagem;

            std::cout<<  " Informe o nome "  <<std::endl;
            std::cin>>nomeCompleto;
            fulano.setNomeCompleto(nomeCompleto);

            std::cout<<  " Informe o numero de filhos"  <<std::endl;
            std::cin>>numeroDeFilhos;
            fulano.setNumeroDeFilhos(numeroDeFilhos);

            std::cout<<  " Informe o valor do salario "  <<std::endl;
            std::cin>>salarioDoMes;
            fulano.setSalarioDoMes(salarioDoMes);

            std::cout<<  " Informe o valor da porcentagem (em %)"  <<std::endl;
            std::cin>>porcentagem;
            fulano.calcularAumentoSalarial(porcentagem);

            std::cout<< "\n\n Nome "<<fulano.getNomeCompleto()<< std::endl;
            std::cout<< " N. filhos "<<fulano.getNumeroDeFilhos()<< std::endl;
            std::cout<< " Salario com aumento "<< fulano.getSalarioDoMes()<< std::endl;
            std::cout<< " INSS "<< fulano.calcularINSS()<< std::endl;
            std::cout<< " Parcela IR "<< fulano.calcularParcelaImpostoDeRenda()<< std::endl;
            if(fulano.calcularValorMensalIRPF()>0.0)
                std::cout<< " IRPF :" << fulano.calcularValorMensalIRPF()<< std::endl;
            else
                std::cout<< " IRPF : ISENTO " << std::endl;
        }//fim_try
        catch(std::string erro){//inicio_catch
            std::cout<< erro <<" \n\n ";
        }//fim_catch

        std::cout<< "\n\n Continuar? 1-SIM/0-NAO ";
        std::cin>>resposta;
        if(resposta==0){executor=false;}
    }while(executor); //fim_laco
}
