#include <iostream>
#include <Pessoa.h>

int main(void)
{
    bool executor=true;
    int resposta=1;
    do{//inicio_laco

        //Declaração dos objetos e variaveis
        PrimeiraLista::Pessoa pessoaX;
        std::string nome=" ",sexo=" ";
        int peso;
        float altura;

        //Obtenção dos valores de entrada
        std::cout<< "\n\n Informe Nome: \n   ";
        std::cin>>nome;
        pessoaX.setNome(nome);
        std::cout<< " Informe Sexo: \n   ";
        std::cin>>sexo;
        pessoaX.setSexo(sexo);

        try
        {//Inicio do monitoramento de TRY
            std::cout<< " Informe Peso: \n   ";
            std::cin>> peso;
            pessoaX.setPeso(peso);
            std::cout<<" Informe altura: \n   ";
            std::cin>> altura;
            pessoaX.setAltura(altura);
            std::cout<< "\n IMC = "<< pessoaX.calcularIMC()<<std::endl<<std::endl;
        }//Fim do monitoramento de TRY
        catch (std::string erro)//correção da exceção
        {
            std::cout<<"\n ERRO :"<<erro<<std::endl<<std::endl;
        }

        std::cout<<" Deseja repetir (1 para SIM - 0 para NAO) ? ";
        std::cin>>resposta;
        if(resposta==0){executor=false;}
    //FIM_laco
    }while(executor);
}
