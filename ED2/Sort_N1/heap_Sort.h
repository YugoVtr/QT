#ifndef HEAP_SORT_H
#define HEAP_SORT_H
#include <time.h>
void troca(int &a,int &b);
void troca(int *array,int i,int j);
int filhoEsquerda(int indice);
int filhoDireita(int indice);
void maxHeap(int *array, int size, int i);
void construirHeap(int *array,int size);
clock_t heap_Sort(int *array,int size);
#endif // HEAP_SORT_H
