#ifndef NO_H
#define NO_H

namespace ED1
{
    template<class Tipo>
    class No
    {
    private:
        Tipo informacao;
        No *proximoElemento;
    public:
        No() : informacao(0), proximoElemento(0){}
        No(Tipo informacao, No *proximoElemento){this->informacao = informacao; this->proximoElemento = proximoElemento;}
        inline void setInformacao(Tipo informacao){ this->informacao = informacao ;}
        inline void setProximoElemento(No *proximoElemento){ this->proximoElemento = proximoElemento ;}
        inline Tipo getInformacao() const { return this->informacao ;}
        inline No* getProximoElemento() const { return this->proximoElemento ;}
    };
}

#endif // NO_H
