#ifndef NO_H
#define NO_H

namespace ED1
{
    template <class Tipo>
    class No
    {
    private:
        Tipo informacao;
        No *anterior;
        No *proximo;
    public:
        No(Tipo informacao): informacao(informacao), anterior(0),proximo(0){}
        No(Tipo informacao,No *anterior, No *proximo){this->informacao=informacao; this->anterior=anterior; this->proximo=proximo;}
        inline void setInformacao(Tipo informacao){ this->informacao = informacao ;}
        inline void setAnterior(No *anterior){ this->anterior = anterior ;}
        inline void setProximo(No *proximo){ this->proximo = proximo ;}

        inline Tipo getInformacao() const { return this->informacao ;}
        inline No* getAnterior() const { return this->anterior;}
        inline No* getProximo() const { return this->proximo;}
    };
}

#endif // NO_H
