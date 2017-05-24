#include "heap_Sort.h"

void troca(int &a,int &b)
{
    int aux = a;
    a = b;
    b = aux;
}

void troca(int *array,int i,int j)
{
    int aux = array[i];
    array[i]=array[j];
    array[j]=aux;
}

int filhoEsquerda(int indice){
    return indice+indice+1;
}

int filhoDireita(int indice)
{
    return indice+indice+2;
}

void maxHeap(int *array, int size, int i)
{
    int p=i;
    int e=filhoEsquerda(i);
    if(e<size){
        if(array[p]<array[e])
        {
            p = e;
        }
        int d = filhoDireita(i);
        if(d<size)
        {
            if(array[p]<array[d])
            {
                p=d;
            }
        }
        if(p!=i)
        {
            troca(array,p,i);
            maxHeap(array,size,p);
        }
    }
}

void construirHeap(int *array, int size)
{
    for(int i=(size-2)/2;i>=0;i--)
    {
        maxHeap(array,size,i);
    }
}

clock_t heap_Sort(int *array,int size)
{
    const clock_t begin_time = clock();
    construirHeap(array,size);
    for(int i=1;i<=size;i++)
    {
        troca(array,0,size-i);
        maxHeap(array,size-i,0);
    }
    return ( clock () - begin_time );
}
