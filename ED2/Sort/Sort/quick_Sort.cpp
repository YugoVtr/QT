#include "quick_Sort.h"

int selecionaPivo (int v[], int inicio, int final)
{
   int i,j;
   int x=v[final];
   i = inicio-1;
   for(j=inicio;j<final;j++)
   {
        if(v[j]<=x)
        {
            i++;
            troca(v,i,j);
        }
   }
   troca(v,++i,final);
   return i;
}

double quick_Sort(int v[],int inicio,int fim)
{
    const clock_t begin_time = clock();
    if(inicio < fim)
    {
        int p = selecionaPivo(v,inicio,fim);
        quick_Sort(v, inicio, p-1);
        quick_Sort(v, p+1, fim);
    }
    return ((double)( clock () - begin_time ) /  CLOCKS_PER_SEC * 1000 );
}
