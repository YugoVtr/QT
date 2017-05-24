#include <iostream>
#include "gerarVetor.h"
#include "Sort.h"
#include <time.h>

const int t = 10;
const bool mostrar = true;
bool comparar(int a,int b){return a<=b;}

void imprimir(float casos[],int melhor[],int pior[],int aleatorio[],int t,bool value)
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
    bool (*compare)(int,int) = &comparar;
    float casos[3];    
    int conj_Melhor[t];
    int conj_Pior[t];
    int conj_Aleatorio[t];

    std::cout<< "\n-----------------------------Insert Sort-----------------------------------";
    //Preencher
    crescente(conj_Melhor,t);
    decrescente(conj_Pior,t);
    aleatorio(conj_Aleatorio,t);

    //Ordenar e calcular os tempos
    clock_t begin_time = clock();
    ED2::Sort<int>::insert_Sort(conj_Melhor,t,(*compare));
    casos[0] = ((float)( clock() - begin_time ) /  CLOCKS_PER_SEC ) ;

    begin_time = clock();
    ED2::Sort<int>::insert_Sort(conj_Pior,t,(*compare));
    casos[1] = ((float)( clock() - begin_time ) /  CLOCKS_PER_SEC ) ;

    begin_time = clock();
    ED2::Sort<int>::insert_Sort(conj_Aleatorio,t,(*compare));
    casos[2] = ((float)( clock() - begin_time ) /  CLOCKS_PER_SEC ) ;

    //Imprimir
    imprimir(casos,conj_Melhor,conj_Pior,conj_Aleatorio,t,mostrar);

    std::cout<< "\n-----------------------------Bubble Sort-----------------------------------";

    //Preencher
    crescente(conj_Melhor,t);
    decrescente(conj_Pior,t);
    aleatorio(conj_Aleatorio,t);

    //Ordenar e calcular os tempos
    begin_time = clock();
    ED2::Sort<int>::bubble_Sort(conj_Melhor,t,(*compare));
    casos[0] = ((float)( clock() - begin_time ) /  CLOCKS_PER_SEC ) ;

    begin_time = clock();
    ED2::Sort<int>::bubble_Sort(conj_Pior,t,(*compare));
    casos[1] = ((float)( clock() - begin_time ) /  CLOCKS_PER_SEC ) ;

    begin_time = clock();
    ED2::Sort<int>::bubble_Sort(conj_Aleatorio,t,(*compare));
    casos[2] = ((float)( clock() - begin_time ) /  CLOCKS_PER_SEC ) ;

    //Imprimir
    imprimir(casos,conj_Melhor,conj_Pior,conj_Aleatorio,t,mostrar);

    std::cout<< "\n-----------------------------Merge Sort-----------------------------------";

    //Preencher
    crescente(conj_Melhor,t);
    decrescente(conj_Pior,t);
    aleatorio(conj_Aleatorio,t);

    //Ordenar e calcular os tempos
    begin_time = clock();
    ED2::Sort<int>::merge_Sort(conj_Melhor,t,(*compare));
    casos[0] = ((float)( clock() - begin_time ) /  CLOCKS_PER_SEC ) ;

    begin_time = clock();
    ED2::Sort<int>::merge_Sort(conj_Pior,t,(*compare));
    casos[1] = ((float)( clock() - begin_time ) /  CLOCKS_PER_SEC ) ;

    begin_time = clock();
    ED2::Sort<int>::merge_Sort(conj_Aleatorio,t,(*compare));
    casos[2] = ((float)( clock() - begin_time ) /  CLOCKS_PER_SEC ) ;

    //Imprimir
    imprimir(casos,conj_Melhor,conj_Pior,conj_Aleatorio,t,mostrar);

    std::cout<< "\n-----------------------------Heap Sort-----------------------------------";

    //Preencher
    crescente(conj_Melhor,t);
    decrescente(conj_Pior,t);
    aleatorio(conj_Aleatorio,t);

    //Ordenar e calcular os tempos
    begin_time = clock();
    ED2::Sort<int>::heap_Sort(conj_Melhor,t,(*compare));
    casos[0] = ((float)( clock() - begin_time ) /  CLOCKS_PER_SEC ) ;

    begin_time = clock();
    ED2::Sort<int>::heap_Sort(conj_Pior,t,(*compare));
    casos[1] = ((float)( clock() - begin_time ) /  CLOCKS_PER_SEC ) ;

    begin_time = clock();
    ED2::Sort<int>::heap_Sort(conj_Aleatorio,t,(*compare));
    casos[2] = ((float)( clock() - begin_time ) /  CLOCKS_PER_SEC ) ;


    //Imprimir
    imprimir(casos,conj_Melhor,conj_Pior,conj_Aleatorio,t,mostrar);


    std::cout<< "\n-----------------------------Quick Sort-----------------------------------";

    //Preencher
    crescente(conj_Melhor,t);
    decrescente(conj_Pior,t);
    aleatorio(conj_Aleatorio,t);

    //Ordenar e calcular os tempos
    begin_time = clock();
    ED2::Sort<int>::quick_Sort(conj_Melhor,t,(*compare));
    casos[0] = ((float)( clock() - begin_time ) /  CLOCKS_PER_SEC ) ;

    begin_time = clock();
    ED2::Sort<int>::quick_Sort(conj_Pior,t,(*compare));
    casos[1] = ((float)( clock() - begin_time ) /  CLOCKS_PER_SEC ) ;

    begin_time = clock();
    ED2::Sort<int>::quick_Sort(conj_Aleatorio,t,(*compare));
    casos[2] = ((float)( clock() - begin_time ) /  CLOCKS_PER_SEC ) ;

    //Imprimir
    imprimir(casos,conj_Melhor,conj_Pior,conj_Aleatorio,t,mostrar);

    std::cout<< "\n-----------------------------Selection Sort-----------------------------------";

    //Preencher
    crescente(conj_Melhor,t);
    decrescente(conj_Pior,t);
    aleatorio(conj_Aleatorio,t);

    //Ordenar e calcular os tempos
    begin_time = clock();
    ED2::Sort<int>::selection_Sort(conj_Melhor,t,(*compare));
    casos[0] = ((float)( clock() - begin_time ) /  CLOCKS_PER_SEC ) ;

    begin_time = clock();
    ED2::Sort<int>::selection_Sort(conj_Pior,t,(*compare));
    casos[1] = ((float)( clock() - begin_time ) /  CLOCKS_PER_SEC ) ;

    begin_time = clock();
    ED2::Sort<int>::selection_Sort(conj_Aleatorio,t,(*compare));
    casos[2] = ((float)( clock() - begin_time ) /  CLOCKS_PER_SEC ) ;

    //Imprimir
    imprimir(casos,conj_Melhor,conj_Pior,conj_Aleatorio,t,mostrar);

    std::cout<<"\n\n END \n\n";
}
