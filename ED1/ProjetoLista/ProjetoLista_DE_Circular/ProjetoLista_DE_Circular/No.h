#ifndef NO_H
#define NO_H

namespace ED1
{
    class No
    {
    private:
        int informacao;
        No *anterior;
        No *proximo;
    public:
        No(): informacao(0), anterior(0),proximo(0){}
        No(int informacao,No *anterior,No *proximo): informacao(informacao),anterior(anterior),proximo(proximo){}
        inline void setInformacao(int informacao){ this->informacao = informacao ;}
        inline void setAnterior(No *anterior){ this->anterior = anterior ;}
        inline void setProximo(No *proximo){ this->proximo = proximo ;}

        inline int getInformacao() const { return this->informacao ;}
        inline No* getAnterior() const { return this->anterior;}
        inline No* getProximo() const { return this->proximo;}
    };
}

#endif // NO_H
