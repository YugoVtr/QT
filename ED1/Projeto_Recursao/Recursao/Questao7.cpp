#include "Questao7.h"

namespace Recursao
{
    int Questao7::menor(int tamanho)
    {
        if (tamanho == 1)
           return array[0];
        else {
           int minimo = menor(tamanho-1);
           if (minimo < array[tamanho-1])
              return minimo;
           else
              return array[tamanho-1];
        }
    }
}
