#include <iostream>
#include <QTime>
#include <fstream>
#include <cmath>
#include "heap_Sort.h"
#include "merge_Sort.h"

const std::string HEAP_FILE_WAY = "../Sort_N1/Arquivos/heapSort.txt";   //Caminho para criar o arquivo
const std::string MERGE_FILE_WAY = "../Sort_N1/Arquivos/heapSort.txt";  //Caminho para criar o arquivo                                            //Tempo maximo, em segundos, para Execução do laço - equivalente a 3 horas

//----Funções para gerar os vetores----
int* crescente (int length)
{
    int *array = new int[length];
    for(int i=0;i<length;i++)
    {
        array[i]=i+1;
    }
    return array;
}

int* decrescente (int length)
{
    int *array = new int[length];
    for(int i=0;i<length;i++)
    {
        array[i]=length-i;
    }
    return array;
}

int* aleatorio (int length)
{
    int *array = new int[length];
    const int l = 100;
    qsrand(QTime::currentTime().msec());
    for(int i=0;i<length;i++)
    {
        array[i] = qrand() % l;
    }
    return array;
}
//-----Função para imprimir---------
void imprimir(int *array,int length)
{
    for(int i=0;i<length;i++)
    {
        std::cout << array[i] << "\t";
    }
    std::cout<< "\n\n" ;
}
//---Função para salvar no arquivo--
void saveToFile(QString text,std::string caminho)
{
    std::fstream file;
    file.open(caminho.c_str(),std::ios::out|std::ios::app);
    if(!file.is_open()){throw std::string("ERRO em Criar arquivo");}
    file << text.toStdString().c_str()<<std::endl;
    file.close();
}

//----------Função Main------------
int main()
{
    const int t = 3;
    int* array = decrescente(t);

    imprimir(array,t);
    merge_Sort(array,t);
    imprimir(array,t);
}
