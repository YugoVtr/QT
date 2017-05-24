#include "gerarVetor.h"

void crescente (int vet[], int t)
{
    for(int i=0;i<t;i++)
    {
        vet[i]=i+1;
    }
}

void decrescente (int vet[], int t)
{
    for(int i=0;i<t;i++)
    {
        vet[i]=t-i;
    }
}

void aleatorio (int vet[],int t )
{
    const int l = 100;
    qsrand(QTime::currentTime().msec());
    for(int i=0;i<t;i++)
    {
        vet[i] = qrand() % l;
    }
}
