#include <iostream>
#include <Paciente.h>

int main(void)
{//inicio
    bool executor=true;
    int resposta=1;
    do{//inicio_laco
        try{//inicio_try

            PrimeiraLista::Paciente pacienteX;
            //Declaração das variaveis em Main
            std::string nome;
            int peso;
            float altura;
            //Obtenção dos valores de entrada
            std::cout<< "\n\n Insira Nome: \n   "; //nome
            std::cin>>nome;
            pacienteX.setNome(nome);
            std::cout<< " Insira peso: \n   ";   //peso
            std::cin>>peso;
            pacienteX.setPeso(peso);
            std::cout<< " Insira altura: \n   ";  //altura
            std::cin>>altura;
            pacienteX.setAltura(altura);

            //Saida da faixa de risco do paciente
            std::cout<< "\n O paciente " << pacienteX.getNome()<< " de acordo com o IMC ";
            std::cout<<pacienteX.calcularIMC()<<"\n esta classificado como "<< pacienteX.calcularFaixaDePeso()<<"\n\n";

        }//fim_try
        catch(std::string erro){//inicio_catch
            std::cout<< "\n\n ERRO: "<<erro<<" \n\n";
        }//fim_catch

        std::cout<< "\n\n Continuar? 1-SIM/0-NAO ";
        std::cin>>resposta;
        if(resposta==0){executor=false;}
    }while(executor);//fim_laco
}//fim
