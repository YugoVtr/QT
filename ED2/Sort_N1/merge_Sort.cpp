#include "merge_Sort.h"

//Funções da Struct Merge
void MergeSort::merge(int *array, int inicio, int meio, int fim)
{
    int size_1 = meio-inicio;
    int size_2 = fim-meio;
    int *left = new int[size_1+1];
    int *right = new int[size_2+1];
    for(int i = 0; i<size_1;i++)
    {
        left[i] = array[inicio+i];
    }

    for(int j = 0; j<size_2;j++)
    {
        right[j] = array[meio+j];
    }

    left[size_1] = INT32_MAX;
    right[size_2] = INT32_MAX;
    int i = 0;
    int j = 0;
    for(int k = inicio; k<fim ; k++)
    {
        if(left[i] < right[j])
        {
            array[k] = left[i++];
        }
        else
        {
            array[k] = right[j++];
        }
    }
    if(left) delete[] left;
    if(right) delete[] right;
}

void MergeSort::merge_Sort(int *array, int inicio , int fim)
{
    try
    {
        if(inicio<fim)
        {
            int meio =((inicio+fim)/2);
            merge_Sort(array,inicio,meio);
            merge_Sort(array,meio+1,fim);
            merge(array,inicio,meio,fim);
        }
    } catch (std::bad_alloc&) { throw std::string("ERRO - SEM MEMORIA");  }
}

//Função Livre
clock_t merge_Sort(int *array,int length)
{
    try
    {
        const clock_t begin_time = clock();
        MergeSort sort;
        sort.merge_Sort(array,0,length);
        return ( clock () - begin_time );
    } catch (std::string& erro) { throw erro;}
}
