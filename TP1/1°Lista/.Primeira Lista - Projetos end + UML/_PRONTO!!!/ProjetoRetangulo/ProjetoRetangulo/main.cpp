#include <iostream>
#include<Retangulo.h>

int main(void)
{
    bool executor=true;
    int resposta;
    do{//inicio_laco

        try{//inicio_try

            //Declaracoes - variaveis e objetos
            PrimeiraLista::Retangulo retanguloX;
            float comprimento,largura;
            //Entrada dos valores
            std::cout<< " Informe COMPRIMENTO: \n   ";
            std::cin>>comprimento;
            retanguloX.setComprimento(comprimento);
            std::cout<< " Informe LARGURA: \n   ";
            std::cin>>largura;
            retanguloX.setLargura(largura);
            std::cout<<"\n\n PERIMETRO: "<<retanguloX.calcularPerimetro();
            std::cout<<"\n VOLUME: "<<retanguloX.calcularArea()<<"\n\n";

        }//fim_try
        catch(std::string erro){
            std::cout<<"\n\n ERRO: "<<erro<<"\n\n";
        }
        std::cout<< " Continuar? 1-SIM / 0-NAO ";
        std::cin>>resposta;
        if(resposta==0){executor=false;}
    }while(executor);//fim_laco
}
