#include <iostream>
#include<Cone.h>
int main(void)
{
    bool executor=true;
    int resposta=1;
    do{//inicio_laco
        try{//inicio_try
            PrimeiraLista::Cone coneX;
            float raio,altura;
            std::cout<< "\n\n Insira RAIO: \n   ";
            std::cin>>raio;
            coneX.setRaio(raio);
            std::cout<< " Insira ALTURA: \n   ";
            std::cin>>altura;
            coneX.setAltura(altura);

            std::cout<<"\n\n AREA LATERAL: "<< coneX.calcularAreaLateral();
            std::cout<<"\n AREA TOTAL: "<< coneX.calcularAreaTotal();
            std::cout<<"\n VOLUME: "<< coneX.calcularVolume()<<"\n\n";
        }//fim_try
        catch(std::string erro){//inicio_catch
            std::cout<<" ERRO: "<<erro<<" \n\n ";
        }//fim_catch

        std::cout<<"\n\n Continuar 1-SIM/0-NAO  ";
        std::cin>>resposta;
        if(resposta==0){executor=false;}
    }while(executor); //fim_laco
}
