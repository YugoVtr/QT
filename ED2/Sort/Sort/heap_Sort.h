#ifndef HEAP_SORT_H
#define HEAP_SORT_H
#include <time.h>
void troca(int &a,int &b);
void troca(int v[],int i,int j);
int filhoEsquerda(int i);
int filhoDireita(int i);
void maxHeap(int v[], int n, int i);
void construirHeap(int v[],int n);
double heap_Sort(int v[],int n);
#endif // HEAP_SORT_H
