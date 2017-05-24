#include "insert_Sort.h"
double insert_Sort(int vet[], int t)
{
    const clock_t begin_time = clock();
    for(int i = 1; i < t; i++)
    {
        int aux,j;
        aux = vet[i];
        for(j=i-1 ; (j >= 0) && (vet[j] > aux) ; j--)
        {
            vet[j + 1] = vet[j];
        }
        vet[j + 1] = aux;
    }
    return ((double)( clock() - begin_time ) /  CLOCKS_PER_SEC * 1000 );
}
