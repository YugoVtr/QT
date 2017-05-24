#include <iostream>
#include<ArvoreBinaria.h>
#include<QString>

int main()
{
    try {
        ED1::ArvoreBinaria teste;

        teste.inserir(50);
        teste.inserir(40);
        teste.inserir(60);
        teste.inserir(35);
       // teste.inserir(60);
        teste.inserir(45);
        teste.inserir(70);
        //teste.inserir(56);

        std::cout<<std::endl<<"Mostrando os dados da árvore criada"<<std::endl;
        teste.imprimir();

        teste.remover(60);
        std::cout<<std::endl<<"Mostrando os dados da árvore removido"<<std::endl;
        teste.imprimir();

        std::cout<<std::endl;
        std::cout<<std::endl<<"Mostrando a árvore sendo destruida"<<std::endl;

    } catch (std::string &erro) {
        std::cout<<std::endl<<"Erro: "<<erro<<std::endl;
    }
}
