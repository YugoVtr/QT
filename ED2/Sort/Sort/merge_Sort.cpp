#include "merge_Sort.h"
void merge(int vet[], int inicio, int meio, int fim,int *w)
{
    int i = inicio, m = meio+1, cont = 0;
    while(i <= meio && m<=fim)
    {
        if(vet[i]<vet[m])
        {
            w[cont++]=vet[i++];
        }else
        {
            w[cont++]=vet[m++];
        }
    }
    while(i<=meio)
    {
        w[cont++]=vet[i++];
    }
    while(m<=fim)
    {
        w[cont++]=vet[m++];
    }
    for(i=0;i<cont;i++)
    {
        vet[inicio+i] = w[i];
    }
}

void merge_Sort(int vet[], int i ,int t, int *w)
{
    if(i<t)
    {
        int meio = (i+t)/2;
        merge_Sort(vet,i,meio);
        merge_Sort(vet,meio+1,t);
        merge(vet,i,meio,t,w);
    }
}

double merge_Sort(int vet[],int i, int t)
{
    const clock_t begin_time = clock();
    int *w = new int [t-i+1];
    merge_Sort(vet,i,t,w);
    delete []w;
    return ((double)( clock () - begin_time ) /  CLOCKS_PER_SEC * 1000 );
}
