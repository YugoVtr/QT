#include <iostream>
#include<Esfera.h>

int main(void)
{

    PrimeiraLista::Esfera esferaX;
    bool executar = true;
    int resposta = 1;
    do{
        try {
            float raio;
            std::cout<<std::endl;
            std::cout<<"Digite o raio da Bola: ";
            std::cin>>raio;
            esferaX.setRaio(raio);
            std::cout<<"Volume da Bola: "<<esferaX.calcularVolume()<<std::endl;
            std::cout<<"Area da Bola: "<<esferaX.calcularArea()<<std::endl;
            std::cout<<std::endl;
        } catch (std::string erro) {
            std::cout<<"\n\n Erro: "<<erro<<std::endl;
        }
        std::cout<<std::endl;
        std::cout<<"Deseja continuar[1-sim 0-nao]:";
        std::cin>>resposta;
        if(resposta == 0) executar = false;
    }
    while(executar);
}
