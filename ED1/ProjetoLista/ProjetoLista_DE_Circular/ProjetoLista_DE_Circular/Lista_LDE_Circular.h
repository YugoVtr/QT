#ifndef Lista_LDE_Circular_H
#define Lista_LDE_Circular_H
#include <No.h>
#include <QString>
#include <QMessageBox>

namespace ED1
{
    class Lista_LDE_Circular
    {
    private:
        int quantidadeDeNos;
        No *inicio;

    public:
        Lista_LDE_Circular(): quantidadeDeNos(0),inicio(0){}
        ~Lista_LDE_Circular(){while(!this->eVazio()) this->removerInicio();}
        inline void incluirInicio(int informacao){this->incluirNaPosicao(informacao,1);}
        inline void incluirFinal(int informacao){this->incluirNaPosicao(informacao,this->quantidadeDeNos+1);}
        void incluirNaPosicao(int informacao,int posicao);
        inline int removerInicio(){return this->removerNaPosicao(1);}
        inline int removerFinal(){return this->removerNaPosicao(this->quantidadeDeNos);}
        int removerNaPosicao(int posicao);
        int removerInformacao(int informacao);                      //retornar a quantidade de elementos removidos
        int acessarInformacao(int informacao)const;                 //retornar a posicao da informação na fila
        int acessarPosicao(int posicao)const;                       //retornar a informaçao na posição dada
        inline int obterTamanho()const {return quantidadeDeNos;}
        inline bool eVazio()const {return(quantidadeDeNos==0);}
    };
}
#endif // Lista_LDE_Circular_H
