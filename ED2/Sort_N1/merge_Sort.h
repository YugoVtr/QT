#ifndef MERGE_SORT_H
#define MERGE_SORT_H
#include <time.h>
#include <iostream>

//Fiz como struct so para manter o metodo merge como privado.
struct MergeSort
{
    private:
        void merge(int *array, int inicio, int meio, int fim);
    public:
        void merge_Sort(int *array,int inicio, int fim);
};

clock_t merge_Sort(int *array,int length);
#endif // MERGE_SORT_H
