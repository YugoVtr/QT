#include "heap_Sort.h"

void troca(int &a,int &b)
{
    int aux = a;
    a = b;
    b = aux;
}

void troca(int v[],int i,int j)
{
    int aux = v[i];
    v[i]=v[j];
    v[j]=aux;
}

int filhoEsquerda(int i){
    return i+i+1;
}

int filhoDireita(int i)
{
    return i+i+2;
}

void maxHeap(int v[], int n, int i)
{
    int p=i;
    int e=filhoEsquerda(i);
    if(e<n){
        if(v[p]<v[e])
        {
            p = e;
        }
        int d = filhoDireita(i);
        if(d<n)
        {
            if(v[p]<v[d])
            {
                p=d;
            }
        }
        if(p!=i)
        {
            troca(v,p,i);
            maxHeap(v,n,p);
        }
    }
}

void construirHeap(int v[],int n)
{
    for(int i=(n-2)/2;i>=0;i--)
    {
        maxHeap(v,n,i);
    }
}

double heap_Sort(int v[],int n)
{
    const clock_t begin_time = clock();
    construirHeap(v,n);
    for(int i=1;i<=n;i++)
    {
        troca(v,0,n-i);
        maxHeap(v,n-i,0);
    }
    return ((double)( clock () - begin_time ) /  CLOCKS_PER_SEC * 1000 );
}
