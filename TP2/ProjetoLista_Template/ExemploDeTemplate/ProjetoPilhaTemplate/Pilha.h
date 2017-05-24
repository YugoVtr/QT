#ifndef PILHA_H
#define PILHA_H
#include<QString>

namespace TP2{
template <class tipo>
class Pilha
{
private:
    int tamanho;
    tipo *array;
    int topo;
public:
    Pilha(int tamanho);
    ~Pilha(){if(array) delete[] array;}
    bool empty() const{return topo==-1;}
    void push(tipo elemento);
    void pop();
    tipo top()const;
    int size()const{return topo+1;}
};

template <class tipo>
Pilha<tipo>::Pilha(int tamanho):
    tamanho(0),
    array(0),
    topo(-1)
{
    if(tamanho <= 0) throw QString("tamanho fora do intervalo válido");
    try{
        array = new tipo[tamanho];
        this->tamanho = tamanho;
    }catch(std::bad_alloc&){
        throw QString("falta espaço na memória");
    }
}

template <class tipo>
void Pilha<tipo>::push(tipo elemento){
    if(topo == tamanho-1) throw QString("Pilha cheia");
    topo++;
    array[topo] = elemento;
}

template <class tipo>
void Pilha<tipo>::pop(){
    if(this->empty()) throw QString("Pilha vazia");
    topo--;
}

template <class tipo>
tipo Pilha<tipo>::top()const{
    if(this->empty()) throw QString("Pilha vazia");
    return this->array[topo];
}

}


#endif // PILHA_H
