#include "selection_Sort.h"

double selection_Sort(int vet[],int n)
{
    const clock_t begin_time = clock();
    int indice = 0;
    for(int i=0; i<n-1;i++)
    {
        indice = i ;
        for(int j=i+1; j<n;j++)
        {
            if(vet[indice] > vet[j]){indice = j;}
        }
        troca(vet,i,indice);
    }
    return ((double)( clock () - begin_time ) /  CLOCKS_PER_SEC * 1000 );
}
