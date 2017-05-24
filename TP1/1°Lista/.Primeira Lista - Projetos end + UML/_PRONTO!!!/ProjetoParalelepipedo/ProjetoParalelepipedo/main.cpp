#include <iostream>
#include <Paralelepipedo.h>

int main( )
{
    bool executor=true;
    int resposta=1;
    do{
        try{//inicio_try
            //Declaracao variaveis
            PrimeiraLista::Paralelepipedo paralelepipedoX;
            float altura,largura,comprimento;
            std::cout<< "\n\n Informe altura: \n   ";
            std::cin>>altura;
            paralelepipedoX.setAltura(altura);

            std::cout<< "\n Informe largura: \n   ";
            std::cin>>largura;
            paralelepipedoX.setLargura(largura);

            std::cout<< "\n Informe comprimento: \n   ";
            std::cin>>comprimento;
            paralelepipedoX.setComprimento(comprimento);

            std::cout<< "\n\n VOLUME: "<< paralelepipedoX.calcularVolume();
            std::cout<< "\n AREA: "<< paralelepipedoX.calcularArea();
        }//fim_try

        catch(std::string erro){//inicio_catch
            std::cout<<"\n\n ERRO: "<<erro<<"\n\n";
        }//fim_catch

        std::cout<< "\n\n Continuar? 1-SIM/0-NAO ";
        std::cin>>resposta;
        if(resposta==0){executor=false;}
    }while(executor);//fim laco
}
