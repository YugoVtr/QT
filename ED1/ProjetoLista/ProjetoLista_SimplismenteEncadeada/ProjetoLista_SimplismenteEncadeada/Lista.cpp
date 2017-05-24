#include "Lista.h"

namespace ED1
{
    Lista::Lista():
        quantidadeDeNos(0),
        inicio(0)
    {
    }

    Lista::~Lista()
    {
        while(this->inicio!=0) this->removerInicio();
    }

    void Lista::incluirInicio(int informacao)
    {
        try
        {
            No *novoInicio = new No(informacao,0);                                                  // Crio um novo No com a informação
            novoInicio->setProximoElemento(inicio);                                                 //O novo No aponta para o primeiro elemento
            inicio = novoInicio;                                                                    //E faço o inicio apontar para ele...
            quantidadeDeNos++;                                                                      //Agora tenho mais um No na lista
        }
        catch (std::bad_alloc) { throw QString(" Não foi possivel incluir no inicio "); }
    }

    void Lista::incluirFinal(int informacao)
    {
        try
        {
            if(this->eVazio()) this->incluirInicio(informacao);                                     //Se a lista e vazia, o fim tambem e o inicio
            else
            {
                this->incluirNaPosicao(informacao,this->quantidadeDeNos+1);
            }
        }
        catch (QString &erro) { throw QString(erro); }
        catch (std::bad_alloc) { throw QString(" Não foi possivel incluir no final "); }
    }

    void Lista::incluirNaPosicao(int informacao,int posicao)
    {
        try
        {
            if(posicao<1 || posicao>this->quantidadeDeNos+1)
                throw QString("posicao fora do intervalo valido");
            if(posicao==1) this->incluirInicio(informacao);                                         //Se a posicao e 1, e para colocar no inicio
            else
            {
                No *novaPosicao = new No(informacao,0);                                             // Crio um novo No com a informação
                No *correrLista = this->inicio;                                                     //No que corre a lista
                int contador = 1;                                                                   //inicio no primeiro da lista
                while(contador<posicao-1)                                                           //Para na posição anterior
                {
                    correrLista = correrLista->getProximoElemento();
                    contador++;
                }
                novaPosicao->setProximoElemento(correrLista->getProximoElemento());                 //aponta para o elemento que era a posiçao
                correrLista->setProximoElemento(novaPosicao);                                       //O elemento anterior aponta para a nova posição
                quantidadeDeNos++;                                                                  //Agora tenho mais um No na lista
            }
        }
        catch (std::bad_alloc) { throw QString(" Não foi possivel incluir no inicio "); }
        catch (QString &erro) { throw QString(erro); }
    }

    int Lista::removerInicio()
    {
        if(this->eVazio()) throw QString(" Não há o que remover ");                                 //Verificar se ha algo para remover
        No *paraRemover = inicio;                                                                   //Armazeno o endereço do Nó para remover
        inicio = inicio->getProximoElemento();                                                      //O segundo passa a ser o primeiro
        int informacao = paraRemover->getInformacao();                                              //Armazeno a informação que vai ser deletada
        delete  paraRemover;                                                                        //deleto o No
        quantidadeDeNos--;                                                                          //Diminuo um elemento na lista
        return informacao;                                                                          //E retorno a informaçao que estava no Nó.
    }

    int Lista::removerFinal()
    {
        if(this->eVazio()) throw QString(" Não há o que remover ");                                 //Verificar se ha algo para remover
        int informacao = 0;
        if(this->quantidadeDeNos==1)informacao=this->removerInicio();                               //Se haver apenas um elemento, retiro do inicio
        else
        {
            No *correrLista = this->inicio;                                                         //No que corre a lista
            while(correrLista->getProximoElemento()->getProximoElemento()!=0)                       //Corro enquanto o proximo não for 0
                {correrLista=correrLista->getProximoElemento();}
            informacao = correrLista->getProximoElemento()->getInformacao();                        //Armazeno a informação que vai ser deletar
            delete correrLista->getProximoElemento();                                               //Deleto o Nó final
            correrLista->setProximoElemento(0);                                                     //E faço o novo final apontar para 0
            quantidadeDeNos--;                                                                      //Tenho um elemento a menos agora
            return informacao;                                                                      //Aqui esta a informaçao deletada
        }
        return informacao;
    }

    int Lista::removerNaPosicao(int posicao)
    {
        if(this->eVazio()) throw QString(" Não tem nada para remover");
        if(posicao<1 || posicao>this->quantidadeDeNos)
            throw QString("posicao fora do intervalo valido");
        try
        {
            int informacao = 0;
            if(posicao==1) informacao = this->removerInicio();                                      // Se a posicao e 1, e so remover do inicio
            else
            {
                No *correrLista = this->inicio;                                                     //No que corre a lista
                int contador = 1;                                                                   //inicio no primeiro da lista
                while(contador<posicao-1)                                                           //Para na posição anterior
                {
                    correrLista = correrLista->getProximoElemento();
                    contador++;
                }
                No *paraDeletar = correrLista->getProximoElemento();                                //Posicao há ser deletar
                correrLista->setProximoElemento(paraDeletar->getProximoElemento());                 //A posicao anterior aponta para a proxima
                informacao = paraDeletar->getInformacao();                                          //Armazenar a informaçao que vai ser deletada
                delete paraDeletar;                                                                 //Deleto o Nó
                quantidadeDeNos--;                                                                  //Menos um elemento
            }
            return informacao;                                                                      //Mando a informação que se foi
        } catch (QString &erro) { throw QString(erro); }
    }

    int Lista::removerInformacao(int informacao)
    {
        if(this->eVazio()) throw QString(" Não tem informaçao para remover aqui");
        try
        {
            int quantidadeDeNos_Removidos = 0;
            No *correrLista = this->inicio;
            while(correrLista->getProximoElemento()!=0)
            {
                if(correrLista->getProximoElemento()->getInformacao()==informacao)                  //Se a informacao for a procurada
                {
                    No *paraDeletar = correrLista->getProximoElemento();                            //Armazeno o No para deletar
                    correrLista->setProximoElemento(paraDeletar->getProximoElemento());
                    delete paraDeletar;                                                             //Deleto o Nó
                    quantidadeDeNos--;                                                              //Menos um elemento
                    quantidadeDeNos_Removidos++;                                                    //Mais um No removido
                }
                else correrLista = correrLista->getProximoElemento();                               //Se não retirar nada, va para a proxima
            }
            if(inicio->getInformacao()==informacao)                                                 //Depois testa o inicio
            {
                this->removerInicio();
                quantidadeDeNos_Removidos++;
            }
            return quantidadeDeNos_Removidos;
        } catch (QString &erro) { throw QString(erro); }
    }

    int Lista::acessarInformacao(int informacao)const
    {
        No *correrLista = this->inicio;                                                             //Sempre do inicio
        int posicao = 1;                                                                            //A posição que começo
        while(correrLista != 0)                                                                     //enquanto não chegar no fim
        {
            if(correrLista->getInformacao()==informacao)                                            //Se a informação for a procurada
            {
                return posicao;                                                                     //Mando a posição que achei ele
            }
            correrLista = correrLista->getProximoElemento();                                        //Vou para o proximo Nó
            posicao++;
        }
        return 0;                                                                                   //Se chegar no fim não achei nada
    }

    int Lista::acessarPosicao(int posicao)const
    {
        if(posicao<1 || posicao>this->quantidadeDeNos)
            throw QString("posicao fora do intervalo valido");
        No *correrLista = this->inicio;                                                             //No que corre a lista
        int contador = 1;                                                                           //inicio no primeiro da lista
        while(contador<posicao)                                                                     //Para na posição...hehe...referencias
        {
            correrLista = correrLista->getProximoElemento();
            contador++;
        }
        return correrLista->getInformacao();                                                        //Retorno a informação na posição
    }
}

