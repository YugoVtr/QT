#include "bubble_Sort.h"
double bubble_Sort(int vet[], int t)
{
    const clock_t begin_time = clock();
    for(int i=0; i<t-1 ; i++ )
    {
        for(int j=i+1; j<t ; j++ )
        {
            if(vet[j]<vet[i])
            {
                int aux = vet[j];
                vet[j] = vet[i];
                vet[i] = aux;
            }
        }
    }
    return ((double)( clock () - begin_time ) /  CLOCKS_PER_SEC * 1000 );
}
