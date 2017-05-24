//Programa para demonstrar a execução da mesma tarefa com ou sem recursividade
//Fibonacci.cpp
#include <iostream>
#include <iomanip>
#include<Fibonacci.h>

int main(void)
{
    int numero;
    ED1::Fibonacci objeto;

    std::cout << "Digite um numero: ";
    std::cin >> numero;
    std::cout<<std::endl;
    std::cout<<"O "<<numero<<" termo da Serie de Fibonacci Recursivo e: ";
    std::cout<<objeto.fibonacciRecursive(numero)<<std::endl;
    std::cout<<std::endl;
    std::cout<<"O "<<numero<<" termo da Serie de Fibonacci Iterativo e: ";
    std::cout<<objeto.fibonacciIterative(numero)<<std::endl;
    std::cout<<std::endl;

}
