#include "Lista_LDE_Circular.h"

namespace ED1
{
    void Lista_LDE_Circular::incluirNaPosicao(int informacao,int posicao)
    {
        if(posicao<1 || posicao>this->quantidadeDeNos+1)
            throw QString("posicao fora do intervalo valido");                                  //Verifica a posicao fornecida
        try
        {
            No *novaPosicao = new No(informacao,0,0);                                           //Crie o novo No
            if(this->eVazio())
            {
                novaPosicao->setAnterior(novaPosicao);                                          //Aponte para si
                novaPosicao->setProximo(novaPosicao);                                           //Aponte para si
                inicio = novaPosicao;                                                           //Se tiver vazio, so tem ele
            }
            else
            {
                No *correrLista = this->inicio;                                                 //No que corre na lista
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

    int Lista_LDE_Circular::removerNaPosicao(int posicao)
    {
        if(this->eVazio()) throw QString(" Não tem nada para remover");                         //Se esta vazio, não há oque fazer
        if(posicao<1 || posicao>this->quantidadeDeNos)
            throw QString("posicao fora do intervalo valido");                                  //Verifica se a posicao e valida

        No *correrLista = this->inicio;                                                         //No que corre na lista
        for(int contador=posicao;contador!=1;contador--)
        {correrLista=correrLista->getProximo();}                                                //Corre até a posicao
        correrLista->getAnterior()->setProximo(correrLista->getProximo());                      //O anterior aponta para o proximo
        correrLista->getProximo()->setAnterior(correrLista->getAnterior());                     //O proximo aponta para o anterior
        if(posicao==1) inicio = correrLista->getProximo();                                      //Se retirar no inicio, mude o inicio
        int retorno = correrLista->getInformacao();                                             //Salvo o valor para retornar
        delete correrLista;                                                                     //Delete a posicao
        quantidadeDeNos--;                                                                      //Menos um No
        if(eVazio()) inicio = 0;                                                                //Se tiver vazio, o inicio aponta para 0
        return retorno;                                                                         //Retorne a informacao deletada
    }

    int Lista_LDE_Circular::removerInformacao(int informacao)
    {
        if(this->eVazio()) throw
            QString(" Não tem informaçao para remover aqui");                                   //Verifica se está vazio

        int quantidadeDeletada = 0;                                                             //Marca a quantidade removida
        No *correrLista = this->inicio;                                                         //No que corre a lista começa do inicio

        for(int contador=quantidadeDeNos;contador>0;)                                           //Enquanto não verificar todas as posicoes
        {
            if(correrLista->getInformacao()==informacao)                                        //Se encontrar a informacao
            {
                No *paraDeletar = correrLista;                                                  //Armazene ela para deletar
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

    int Lista_LDE_Circular::acessarInformacao(int informacao)const
    {
        if(eVazio()) throw QString ("Não há informacao");                                       //Não ha informacao
        No *correrLista = this->inicio;                                                         //Sempre do inicio
        int posicao = 1;                                                                        //A posição que começo
        for(posicao=1;posicao<=quantidadeDeNos;posicao++)                                       //enquanto não chegar no fim
        {
            if(correrLista->getInformacao()==informacao) {return posicao;}                      //Se achar a informaçao retorno ela
            correrLista = correrLista->getProximo();                                            //Vou para o proximo Nó
        }
        return 0;                                                                               //Se chegar no fim não achei nada
    }

    int Lista_LDE_Circular::acessarPosicao(int posicao)const
    {
        if(posicao<1 || posicao>this->quantidadeDeNos)
            throw QString("posicao fora do intervalo valido");
        No *correrLista = this->inicio;                                                         //No que corre a lista                                                                      //inicio no primeiro da lista
        while(posicao!= 1){ correrLista = correrLista->getProximo(); posicao--; }               //Para na posição...hehe...
        return correrLista->getInformacao();                                                    //Retorno a informação na posição
    }
}

