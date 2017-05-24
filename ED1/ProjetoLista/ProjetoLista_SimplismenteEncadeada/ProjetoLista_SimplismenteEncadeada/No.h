#ifndef NO_H
#define NO_H

namespace ED1
{
    class No
    {
    private:
        int informacao;
        No *proximoElemento;
    public:
        No();
        No(int informacao, No *proximoElemento);
        inline void setInformacao(int informacao){ this->informacao = informacao ;}
        inline void setProximoElemento(No *proximoElemento){ this->proximoElemento = proximoElemento ;}
        inline int getInformacao() const { return this->informacao ;}
        inline No* getProximoElemento() const { return this->proximoElemento ;}
    };
}

#endif // NO_H
