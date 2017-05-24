#ifndef LISTA_LDE_CIRCULAR_H
#define LISTA_LDE_CIRCULAR_H
#include <Interface_Lista.h>
#include <No.h>


namespace ED1
{
    template <class Tipo>
    class Lista_LDE_Circular : public Interface_Lista<Tipo>
    {
    private:
        int quantidadeDeNos;
        No<Tipo> *inicio;

    public:
        Lista_LDE_Circular(): quantidadeDeNos(0),inicio(0){}
        virtual ~Lista_LDE_Circular();

        inline void incluirInicio(Tipo informacao){this->incluirNaPosicao(informacao,1);}
        inline void incluirFinal(Tipo informacao){this->incluirNaPosicao(informacao,this->quantidadeDeNos+1);}
        void incluirNaPosicao(Tipo informacao,int posicao);
        inline Tipo removerInicio(){return this->removerNaPosicao(1);}
        inline Tipo removerFinal(){return this->removerNaPosicao(this->quantidadeDeNos);}
        Tipo removerNaPosicao(int posicao);
        int removerInformacao(Tipo informacao);
        int acessarInformacao(Tipo informacao)const;
        Tipo acessarPosicao(int posicao)const;
        inline int obterTamanho()const {return quantidadeDeNos;}
        inline bool eVazio()const {return(quantidadeDeNos==0);}
    };


    template <class Tipo>
    Lista_LDE_Circular<Tipo>::~Lista_LDE_Circular()
    {
        while(quantidadeDeNos>1)
            {inicio=inicio->getProximo();delete inicio->getAnterior();quantidadeDeNos--;}
        delete inicio;
        inicio = 0;
    }


    template <class Tipo>
    void Lista_LDE_Circular<Tipo>::incluirNaPosicao(Tipo informacao,int posicao)
    {
        if(posicao<1 || posicao>this->quantidadeDeNos+1)
            throw QString("posicao fora do intervalo valido");                                  //Verifica a posicao fornecida
        try
        {
            No<Tipo> *novaPosicao = new No<Tipo>(informacao,0,0);                               //Crie o novo No
            if(this->eVazio())
            {
                novaPosicao->setAnterior(novaPosicao);                                          //Aponte para si
                novaPosicao->setProximo(novaPosicao);                                           //Aponte para si
                inicio = novaPosicao;                                                           //Se tiver vazio, so tem ele
            }
            else
            {
                No<Tipo> *correrLista = this->inicio;                                           //No que corre na lista
                for(int contador=posicao;contador != 1 ;contador--)
                    {correrLista=correrLista->getProximo();}                                    //Corre ate a posicao
                novaPosicao->setAnterior(correrLista->getAnterior());                           //Define o anterior a nova posicao
                novaPosicao->setProximo(correrLista);                                           //Define o posterior a nova posicao
                correrLista->getAnterior()->setProximo(novaPosicao);                            //O anterior aponta para a nova posicao
                correrLista->setAnterior(novaPosicao);                                          //O proximo aponta para a nova posicao
                if(posicao==1) inicio = novaPosicao;                                            //Se colocar no inicio, mude o inicio
            }
            quantidadeDeNos++;                                                                  //Mais um No
        }
        catch (QString &erro) { throw QString(erro); }
    }

    template <class Tipo>
    Tipo Lista_LDE_Circular<Tipo>::removerNaPosicao(int posicao)
    {
        if(this->eVazio()) throw QString(" Não tem nada para remover");                         //Se esta vazio, não há oque fazer
        if(posicao<1 || posicao>this->quantidadeDeNos)
            throw QString("posicao fora do intervalo valido");                                  //Verifica se a posicao e valida

        No<Tipo> *correrLista = this->inicio;                                                   //No que corre na lista
        for(int contador=posicao;contador!=1;contador--)
            {correrLista=correrLista->getProximo();}                                            //Corre até a posicao
        correrLista->getAnterior()->setProximo(correrLista->getProximo());                      //O anterior aponta para o proximo
        correrLista->getProximo()->setAnterior(correrLista->getAnterior());                     //O proximo aponta para o anterior
        if(posicao==1) inicio = correrLista->getProximo();                                      //Se retirar no inicio, mude o inicio
        Tipo informacao_Retorno = correrLista->getInformacao();                                 //Salvo o valor para retornar
        delete correrLista;                                                                     //Delete a posicao
        quantidadeDeNos--;                                                                      //Menos um No
        if(eVazio()) inicio = 0;                                                                //Se tiver vazio, o inicio aponta para 0
        return informacao_Retorno;                                                              //Retorne a informacao deletada
    }

    template <class Tipo>
    int Lista_LDE_Circular<Tipo>::removerInformacao(Tipo informacao)
    {
        if(this->eVazio()) throw
            QString(" Não tem informaçao para remover aqui");                                   //Verifica se está vazio

        int quantidadeDeletada = 0;                                                             //Marca a quantidade removida
        No<Tipo> *correrLista = this->inicio;                                                   //No que corre a lista começa do inicio

        for(int contador=quantidadeDeNos;contador>0;)                                           //Enquanto não verificar todas as posicoes
        {
            if(correrLista->getInformacao()==informacao)                                        //Se encontrar a informacao
            {
                No<Tipo> *paraDeletar = correrLista;                                            //Armazene ela para deletar
                correrLista->getAnterior()->setProximo(correrLista->getProximo());              //Anterior aponta para o proximo
                correrLista->getProximo()->setAnterior(correrLista->getAnterior());             //Proximo aponta para o anterior
                correrLista=correrLista->getAnterior();                                         //Volta uma posicao
                if(paraDeletar==inicio) inicio=correrLista->getProximo();                       //Se retirar no inicio, atualiza o inicio
                delete paraDeletar;                                                             //Deleto a posicao com a informacao
                quantidadeDeNos--;                                                              //Menos um No na lista
                quantidadeDeletada++;                                                           //Mais um No deletaro
                if(eVazio()) inicio = 0;                                                        //Se ficar vazio, inicio aponte para 0
            }
            else {correrLista= correrLista->getProximo();contador--;}                           //Se não encontrar vá para a proxima posicao
        }
        return quantidadeDeletada;                                                              //Retorne a quantidade deletada
    }

    template <class Tipo>
    int Lista_LDE_Circular<Tipo>::acessarInformacao(Tipo informacao)const
    {
        if(eVazio()) throw QString ("Não há informacao");                                       //Não ha informacao
        No<Tipo> *correrLista = this->inicio;                                                   //Sempre do inicio
        for(int posicao=1;posicao<=quantidadeDeNos;posicao++)                                   //enquanto não chegar no fim
        {
            if(correrLista->getInformacao()==informacao) {return posicao;}                      //Se achar a informaçao retorno ela
            correrLista = correrLista->getProximo();                                            //Vou para o proximo Nó
        }
        return 0;                                                                               //Se chegar no fim não achei nada
    }

    template <class Tipo>
    Tipo Lista_LDE_Circular<Tipo>::acessarPosicao(int posicao)const
    {
        if(posicao<1 || posicao>this->quantidadeDeNos)
            throw QString("posicao fora do intervalo valido");
        No<Tipo> *correrLista = this->inicio;                                                   //No que corre a lista                                                                      //inicio no primeiro da lista
        while(posicao!= 1){ correrLista = correrLista->getProximo(); posicao--; }               //Para na posição...hehe...
        return correrLista->getInformacao();                                                    //Retorno a informação na posição
    }
}
#endif // LISTA_LDE_CIRCULAR_H
