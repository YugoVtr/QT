#include <iostream>
#include <piramide.h>

int main(void)
{
    bool executor=true;
    int resposta=1;
    do{//inicio_laco

        //Declaração do objeto e variaveis
        PrimeiraLista::Piramide piramideX;

        try{//inicio_try
            float base,altura;
            //Obtencao dos valores
            std::cout<< "\n\n Informe BASE: \n   ";
            std::cin>>base;
            piramideX.setBase(base);
            std::cout<< " Informe ALTURA: \n   ";
            std::cin>>altura;
            piramideX.setAltura(altura);

            //Exibicao da saida
            std::cout<< " VOLUME = "<< piramideX.calcularVolume()<<"\n\n";

        }//fim_try

        catch (std::string erro){//inicio_catch
            std::cout<<erro<<"\n\n";
        }//fim_catch

        std::cout<< " Deseja Continuar? 1-SIM / 0-NAO ";
        std::cin>>resposta;
        if (resposta==0){executor=false;}
    }while(executor);//fim_laco
}
