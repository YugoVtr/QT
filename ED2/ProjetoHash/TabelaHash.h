#ifndef TABELAHASH_H
#define TABELAHASH_H
#include "QString"
#include <queue>
#define TEMPLATE template<class Tipo>

namespace ED2
{
    TEMPLATE
    class TabelaHash
    {
    private:
        int size;
        int used;
        std::queue<Tipo> *elemento;

        //FUNÇÕES PRIVADAS.H
        bool isPrimo(int value);
        int getNumeroPrimo(int value);
    public:
        TabelaHash(int size);
        ~TabelaHash(){if(elemento) delete[] elemento;}
        inline int getSize()const{return size;}
        inline bool isFull()const{return size==used;}
        int hash(Tipo obj,int(*hash_Especifica)(Tipo obj));
        void insert(const Tipo& value, int(*funcao_Hash)(Tipo obj));
    };


    //FUNÇÕES PRIVADAS.CPP
    TEMPLATE
    bool TabelaHash<Tipo>::isPrimo(int value) //Verifica se o numero e primo
    {
        for(int i=2;i<value;i++)
            if(value%i==0)
                return false;
        return true;
    }
    TEMPLATE
    int TabelaHash<Tipo>::getNumeroPrimo(int value) //Encontra qual o menor numero >= 2*valor
    {
        int i=2*value;
        while(!isPrimo(i))
            i++;
        return i;
    }
    TEMPLATE
    int TabelaHash<Tipo>::hash(Tipo obj, int(*funcao_Hash)(Tipo obj))
    {
        return (*funcao_Hash)(obj);
    }

    //FUNÇÕES PUBLICAS.CPP
    TEMPLATE
    TabelaHash<Tipo>::TabelaHash(int size): //Construtor da tabela
        size(getNumeroPrimo(size)),
        used(0),
        elemento(0)
    {
        try
        {
            elemento = new std::queue<Tipo>[size];
        } catch (std::bad_alloc&) { throw std::string("ERRO na criação da tabela");}
    }

    TEMPLATE
    void TabelaHash<Tipo>::insert(const Tipo& value, int(*funcao_Hash)(Tipo obj))
    {
        int hash = (*funcao_Hash)(value); //Calcula a posiçao
        elemento[hash].push(value);       //Insere na posição calculada pela função hash
        used++;                           //Incrementa a quantidade de elementos na tabela hash
    }
}

#endif // TABELAHASH_H
