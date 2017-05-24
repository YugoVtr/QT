#include "Fibonacci.h"
namespace ED1{
long unsigned int Fibonacci::fibonacciRecursive(unsigned int x)
//Retorna o numero na posição da sequencia usando recursividade
{
    if(x == 1 || x == 2)
        return 1;
    else
        return (fibonacciRecursive(x-1) + fibonacciRecursive(x-2));
}

long unsigned int Fibonacci::fibonacciIterative(unsigned int x)
//Retorna o numero na posição da sequencia usando o laço for
{
    long unsigned int a = 1,b = 1;

    for (unsigned int counter = 1; counter < x; counter++)
    {
        unsigned int proximo = a+b;
        a = b;
        b = proximo;
    }
    return a;
}

}
