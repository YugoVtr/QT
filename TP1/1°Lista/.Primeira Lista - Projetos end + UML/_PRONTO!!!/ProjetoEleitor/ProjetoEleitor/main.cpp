#include <iostream>
#include <Eleitor.h>

int main( )
{
    bool executor=true;
    int resposta=1;
    do{//inicio_laco
        try{//inicio_try

            PrimeiraLista::Eleitor eleitorX;
            //Declaração das variaveis em MAIN
            std::string nome="";
            int anoDeNascimento=0;
            //Obtenção dos valores de Nome e Ano de Nascimento
            std::cout<<"\n\n Informe o nome do eleitor :\n   ";
            std::cin>> nome;
            eleitorX.setNome(nome);
            std::cout<< "\n Insira o ano de nascimento de "<< eleitorX.getNome()<<"\n   ";
            std::cin>> anoDeNascimento;
            eleitorX.setAnoDeNascimento(anoDeNascimento);
            //Status do eleitor
            std::cout<< "\n\n   "<< eleitorX.getNome()<< " e "<< eleitorX.calcularTipoDeEleitor()<<".\n\n  ";
        }//fim_try
        catch(std::string erro){//inicio_catch
            std::cout<<" ERRO: "<< erro << "\n\n";
        }//fim_catch

        std::cout<<" Continuar? 1-SIM/0-NAO ";
        std::cin>>resposta;
        if(resposta==0){executor=false;}
    }while(executor); //fim_laco
}
