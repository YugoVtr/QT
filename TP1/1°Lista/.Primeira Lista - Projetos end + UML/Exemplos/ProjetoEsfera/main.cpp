#include <iostream>
#include<Esfera.h>

int main(void)
{

    TP1::Esfera bola;
    bool executar = true;
    int resposta = 1;
    do{
        try {

            float raio;
            system("clear");// comando para limpar a tela.
            std::cout<<std::endl;
            std::cout<<"Digite o raio da Bola: ";
            std::cin>>raio;

            bola.setRaio(raio);
            std::cout<<"Volume da Bola: "<<bola.calcularVolume()<<std::endl;
            std::cout<<"Area da Bola: "<<bola.calcularArea()<<std::endl;
            std::cout<<std::endl;

        } catch (std::string &erro) {
            std::cout<<std::endl<<"Erro: "<<erro<<std::endl;
        }
        std::cout<<std::endl;
        std::cout<<"Deseja continuar[1-sim 0-nao]:";
        std::cin>>resposta;
        if(resposta == 0) executar = false;
    }
    while(executar);

}
