#ifndef No_Simples_SIMPLES_H
#define No_Simples_SIMPLES_H

namespace ED1
{
    template<class Tipo>
    class No_Simples
    {
    private:
        Tipo informacao;
        No_Simples *proximoElemento;
    public:
        No_Simples(Tipo informacao) : informacao(informacao), proximoElemento(0){}
        No_Simples(Tipo informacao, No_Simples *proximoElemento){this->informacao = informacao; this->proximoElemento = proximoElemento;}
        No_Simples(const No_Simples& copia): informacao(copia.informacao),proximoElemento(copia.proximoElemento){}
        No_Simples& operator=(const No_Simples& copia){informacao=copia.informacao; proximoElemento=copia.proximoElemento;}

        inline void setInformacao(Tipo informacao){ this->informacao = informacao ;}
        inline void setProximoElemento(No_Simples *proximoElemento){ this->proximoElemento = proximoElemento ;}
        inline Tipo getInformacao() const { return this->informacao ;}
        inline No_Simples* getProximoElemento() const { return this->proximoElemento ;}
    };
}

#endif // No_Simples_SIMPLES_H
