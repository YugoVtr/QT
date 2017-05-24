#ifndef ARVOREBINARIA_H
#define ARVOREBINARIA_H
#include<No.h>
#include<string>
#include<iostream>
#include<iarvorebinaria.h>
namespace ED1{
class ArvoreBinaria : public IArvoreBinaria
{
    //atributos
private:
    No* raiz;

    //Metodos
private:
    void inserirRecursivo(No **raiz, int elemento);
    void removerRecursivo(No **raiz, int elemento);
    void emOrdem(No* raiz)const;
    int retornar_Maior(No **raiz);
public:
    ArvoreBinaria();
    ~ArvoreBinaria();
    void inserir(int elemento){this->inserirRecursivo(&raiz,elemento);}
    void remover(int elemento){this->removerRecursivo(&raiz, elemento);}
    void imprimir(){emOrdem(raiz);}

};
}
#endif // ARVOREBINARIA_H
