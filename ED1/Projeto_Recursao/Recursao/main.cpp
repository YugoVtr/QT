#include <iostream>
#include "Questao1.h"
#include "Questao2.h"
#include "Questao3.h"
#include "Questao4.h"
#include "Questao5.h"
#include "Questao6.h"
#include "Questao7.h"
#include "Questao8.h"
#include "Questao9.h"
#include "Questao10.h"
#include "Questao11.h"
#include "Questao12.h"
#include "Questao13.h"
#include "Questao14.h"
#include "Questao15.h"
#include "Questao16.h"
#include "Questao17.h"
#include "Questao18.h"
#include "Questao19.h"
#include "Questao20.h"
int main(void)
{
    Recursao::Questao1 q1;
    Recursao::Questao2 q2;
    Recursao::Questao3 q3;
    Recursao::Questao4 q4;
    Recursao::Questao5 q5;
    Recursao::Questao6 q6;
    Recursao::Questao7 q7;
    Recursao::Questao8 q8;
    Recursao::Questao9 q9;
    Recursao::Questao10 q10;
    Recursao::Questao11 q11;
    Recursao::Questao12 q12;
    Recursao::Questao13 q13;
    Recursao::Questao14 q14;
    Recursao::Questao15 q15;
    Recursao::Questao16 q16;
    Recursao::Questao17 q17;
    Recursao::Questao18 q18;
    Recursao::Questao19 q19;
    Recursao::Questao20 q20;

    std::cout<< "Questao  1: "<< q1.calcularSomatorio(10)<<std::endl<<std::endl;
    std::cout<< "Questao  2: "<< q2.calcularSomatorio(2)<<std::endl<<std::endl;
    std::cout<< "Questao  3: "<< q3.listar(4).toStdString() <<std::endl<<std::endl;
    std::cout<< "Questao  4: "<< q4.listar(4).toStdString() <<std::endl<<std::endl;
    std::cout<< "Questao  5: "<< q5.lista_Par(2).toStdString() <<std::endl<<std::endl;
    std::cout<< "Questao  6: "<< q6.lista_Par(8).toStdString()<<std::endl<<std::endl;
    std::cout<< "Questao  7: "<< q7.menor(10)<<std::endl<<std::endl;
    std::cout<< "Questao  8: "<< q8.converter(5).toStdString()<<std::endl<<std::endl;
    std::cout<< "Questao  9: "<< q9.calcularK(2,10)<<std::endl<<std::endl;
    std::cout<< "Questao  10: "<< q10.multiplicar(30,5)<<std::endl<<std::endl;
    std::cout<< "Questao  11: "<< q11.calcularS(1,1) <<std::endl<<std::endl;
    std::cout<< "Questao  12: "<< q12.calcularS(1,50) <<std::endl<<std::endl;
    std::cout<< "Questao  13: "<< q13.calcularS(37,38,1) <<std::endl<<std::endl;
    std::cout<< "Questao  14: "<< q14.calcularS(1) <<std::endl<<std::endl;
    std::cout<< "Questao  15: "<< q15.calcularS(1000,1,3) <<std::endl<<std::endl;
    std::cout<< "Questao  16: "<< q16.sen(1,1,1,2)<<std::endl<<std::endl;
    std::cout<< "Questao  17: "<< q17.pi(1,1,1)<<std::endl<<std::endl;
    std::cout<< "Questao  18: "<< q18.calcularE(1,0)<<std::endl<<std::endl;
    std::cout<< "Questao  19: "<< q19.fibonacci(20)<<std::endl<<std::endl;
    std::cout<< "Questao  20: "<< q20.mdc(20,24)<<std::endl<<std::endl;

}
