#include <iostream>
#include <Cilindro.h>

int main( )
{
    bool executor=true;
    int resposta=1;

    do{//inicio_laco

        try{//inicio_try
            PrimeiraLista::Cilindro cilindroX;
            float raio,altura;
            std::cout<< "\n\n Insira RAIO: \n   ";
            std::cin>>raio;
            cilindroX.setRaio(raio);
            std::cout<< " Insira ALTURA: \n   ";
            std::cin>>altura;
            cilindroX.setAltura(altura);

            std::cout<<"\n AREA LATERAL : "<< cilindroX.calcularAreaLateral();
            std::cout<<"\n AREA TOTAL : "<< cilindroX.calcularAreaTotal();
            std::cout<<"\n VOLUME : "<< cilindroX.calcularVolume()<<"\n";

            }//fim_try
        catch (std::string erro){//inico_catch
            std::cout<< "ERRO: "<<erro<<"\n\n";
        }//fim_catch

        std::cout<<"\n\n Continuar 1-SIM/0-NAO  ";
        std::cin>>resposta;
        if(resposta==0){executor=false;}
    }while(executor);//fim_laco
}
