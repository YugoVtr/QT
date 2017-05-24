#ifndef INTERFACE_LISTA_H
#define INTERFACE_LISTA_H
#include <QString>

namespace ED1
{
    template <class Tipo>
    class Interface_Lista
    {
        public:
            virtual ~Interface_Lista(){}
            virtual void incluirInicio(Tipo informacao)=0 ;
            virtual void incluirFinal(Tipo informacao)=0;
            virtual void incluirNaPosicao(Tipo informacao,int posicao)=0 ;
            virtual Tipo removerInicio()=0 ;
            virtual Tipo removerFinal()=0 ;
            virtual Tipo removerNaPosicao(int posicao)=0 ;
            virtual int removerInformacao(Tipo informacao)=0 ;
            virtual int acessarInformacao(Tipo informacao)const=0 ;
            virtual Tipo acessarPosicao(int posicao)const=0 ;
            virtual int obterTamanho()const =0 ;
            virtual bool eVazio()const = 0 ;
    } ;
}

#endif // INTERFACE_LISTA_H
