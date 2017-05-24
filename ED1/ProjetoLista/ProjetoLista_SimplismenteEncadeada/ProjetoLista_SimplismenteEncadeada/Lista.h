#ifndef LISTA_H
#define LISTA_H
#include <No.h>
#include <QString>
#include <QMessageBox>

namespace ED1
{
    class Lista
    {
    private:
        int quantidadeDeNos;
        No *inicio;
    public:
        Lista();
        ~Lista();
        void incluirInicio(int informacao);
        void incluirFinal(int informacao);
        void incluirNaPosicao(int informacao,int posicao);
        int removerInicio();
        int removerFinal();
        int removerNaPosicao(int posicao);
        int removerInformacao(int informacao); //retornar a quantidade de elementos removidos
        int acessarInformacao(int informacao)const; //retornar a posicao da informação na fila
        int acessarPosicao(int posicao)const; //retornar a informaçao na posição dada
        inline int obterTamanho()const {return quantidadeDeNos;}
        inline bool eVazio()const {return(quantidadeDeNos==0);}
    };
}
#endif // LISTA_H
