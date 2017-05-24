#include <iostream>
#include "gerarVetor.h"
#include "insert_Sort.h"
#include "bubble_Sort.h"
#include "merge_Sort.h"
#include "heap_Sort.h"
#include "quick_Sort.h"
#include "selection_Sort.h"
const int t = 1000;
const bool mostrar = false;

void imprimir(double casos[],int melhor[],int pior[],int aleatorio[],int t,bool value)
{
    //Tempos
    std::cout << "\nTempo melhor caso:  " << casos[0] << std::endl;
    std::cout << "Tempo pior caso:  " << casos[1] <<std::endl;
    std::cout << "Tempo aleatorio caso:  " << casos[2] <<std::endl;

    if(value)
    {
        //Imprimir o melhor caso
        std::cout << "\n\n Melhor caso do Insert Sort : \n";
        for(int i=0; i<t ; i++) std::cout << melhor[i]<< "\t";

        //Imprimir o pior caso
        std::cout << "\n\n Pior caso do Insert Sort : \n";
        for(int i=0; i<t ; i++) std::cout << pior[i]<< "\t";

        //Imprimir o aleatorio caso
        std::cout << "\n\n Aleatorio caso do Insert Sort : \n";
        for(int i=0; i<t ; i++) std::cout << aleatorio[i]<< "\t";
    }
}

int main()
{
    double casos[3];
    int conj_Melhor[t];
    int conj_Pior[t];
    int conj_Aleatorio[t];

    std::cout<< "\n-----------------------------Insert Sort-----------------------------------";
    //Preencher
    crescente(conj_Melhor,t);
    decrescente(conj_Pior,t);
    aleatorio(conj_Aleatorio,t);

    //Ordenar e calcular os tempos
    casos[0] = insert_Sort(conj_Melhor,t);
    casos[1] = insert_Sort(conj_Pior,t);
    casos[2] = insert_Sort(conj_Aleatorio,t);

    //Imprimir
    imprimir(casos,conj_Melhor,conj_Pior,conj_Aleatorio,t,mostrar);

    std::cout<< "\n-----------------------------Bubble Sort-----------------------------------";

    //Preencher
    crescente(conj_Melhor,t);
    decrescente(conj_Pior,t);
    aleatorio(conj_Aleatorio,t);

    //Ordenar e calcular os tempos
    casos[0] = bubble_Sort(conj_Melhor,t);
    casos[1] = bubble_Sort(conj_Pior,t);
    casos[2] = bubble_Sort(conj_Aleatorio,t);

    //Imprimir
    imprimir(casos,conj_Melhor,conj_Pior,conj_Aleatorio,t,mostrar);

    std::cout<< "\n-----------------------------Merge Sort-----------------------------------";

    //Preencher
    crescente(conj_Melhor,t);
    decrescente(conj_Pior,t);
    aleatorio(conj_Aleatorio,t);

    //Ordenar e calcular os tempos
    casos[0] = merge_Sort(conj_Melhor,0,t);
    casos[1] = merge_Sort(conj_Pior,0,t);
    casos[2] = merge_Sort(conj_Aleatorio,0,t);

    //Imprimir
    imprimir(casos,conj_Melhor,conj_Pior,conj_Aleatorio,t,mostrar);

    std::cout<< "\n-----------------------------Heap Sort-----------------------------------";

    //Preencher
    crescente(conj_Melhor,t);
    decrescente(conj_Pior,t);
    aleatorio(conj_Aleatorio,t);

    //Ordenar e calcular os tempos
    casos[0] = heap_Sort(conj_Melhor,t);
    casos[1] = heap_Sort(conj_Pior,t);
    casos[2] = heap_Sort(conj_Aleatorio,t);

    //Imprimir
    imprimir(casos,conj_Melhor,conj_Pior,conj_Aleatorio,t,mostrar);


    std::cout<< "\n-----------------------------Quick Sort-----------------------------------";

    //Preencher
    crescente(conj_Melhor,t);
    decrescente(conj_Pior,t);
    aleatorio(conj_Aleatorio,t);

    //Ordenar e calcular os tempos
    casos[0] = quick_Sort(conj_Melhor,0,t);
    casos[1] = quick_Sort(conj_Pior,0,t);
    casos[2] = quick_Sort(conj_Aleatorio,0,t);

    //Imprimir
    imprimir(casos,conj_Melhor,conj_Pior,conj_Aleatorio,t,mostrar);

    std::cout<< "\n-----------------------------Selection Sort-----------------------------------";

    //Preencher
    crescente(conj_Melhor,t);
    decrescente(conj_Pior,t);
    aleatorio(conj_Aleatorio,t);

    //Ordenar e calcular os tempos
    casos[0] = selection_Sort(conj_Melhor,t);
    casos[1] = selection_Sort(conj_Pior,t);
    casos[2] = selection_Sort(conj_Aleatorio,t);

    //Imprimir
    imprimir(casos,conj_Melhor,conj_Pior,conj_Aleatorio,t,mostrar);


    std::cout<<"\n\n END \n\n";
}
