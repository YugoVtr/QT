#ifndef LISTA_LDE_H
#define LISTA_LDE_H
#include <Interface_Lista.h>
#include <No.h>

namespace ED1
{
    template <class Tipo>
    class Lista_LDE : public Interface_Lista<Tipo>
    {
    private:
        int quantidadeDeNos;
        No<Tipo> *inicio;
        No<Tipo> *fim;
    public:
        Lista_LDE(): quantidadeDeNos(0),inicio(0),fim(0){}
        virtual ~Lista_LDE();

        void incluirInicio(Tipo informacao);
        void incluirFinal(Tipo informacao);
        void incluirNaPosicao(Tipo informacao,int posicao);
        Tipo removerInicio();
        Tipo removerFinal();
        Tipo removerNaPosicao(int posicao);
        int removerInformacao(Tipo informacao);
        int acessarInformacao(Tipo informacao)const;
        Tipo acessarPosicao(int posicao)const;
        inline int obterTamanho()const {return quantidadeDeNos;}
        inline bool eVazio()const {return(quantidadeDeNos==0);}
    };

    template <class Tipo>
    Lista_LDE<Tipo>::~Lista_LDE()
    {
        while(inicio->getProximo()!=0)
            {inicio=inicio->getProximo();delete inicio->getAnterior();quantidadeDeNos--;}
        delete inicio;
        inicio = 0;
    }

    template <class Tipo>
    void Lista_LDE<Tipo>::incluirInicio(Tipo informacao)
    {
        try
        {
            No<Tipo> *novoInicio = new No<Tipo>(informacao,0,inicio);                                   // Crie o No com a informacao
            if(inicio!=0) inicio->setAnterior(novoInicio);                                              // Inicio aponte para novoInicio
            inicio = novoInicio;                                                                        //Atualize o inicio
            if(this->eVazio()) fim = inicio;                                                            //Se tiver vazio, o inicio==final
            quantidadeDeNos++;                                                                          //Atualize a quantidade de Nos
        }
        catch (std::bad_alloc) { throw QString(" Não foi possivel incluir no inicio "); }
    }

    template <class Tipo>
    void Lista_LDE<Tipo>::incluirFinal(Tipo informacao)
    {
        try
        {
            if(this->eVazio()) this->incluirInicio(informacao);                                         //Se vazia, inclua no Inicio
            else
            {
                No<Tipo> *novoFim = new No<Tipo>(informacao,fim,0);                                     //Crie o No que será o novo fim
                fim->setProximo(novoFim);                                                               //O que era o Fim aponta para o novo Fim
                fim = novoFim;                                                                          //O que guarda o fim vai para o novo Fim
                quantidadeDeNos++;                                                                      //Atualize a quantidade de Nos
            }
        }
        catch (QString &erro) { throw QString(erro); }
    }

    template <class Tipo>
    void Lista_LDE<Tipo>::incluirNaPosicao(Tipo informacao,int posicao)
    {
        if(posicao<1 || posicao>this->quantidadeDeNos+1)
            throw QString("posicao fora do intervalo valido");                                          //Valide a posicao
        try
        {
            if(posicao==1) this->incluirInicio(informacao);                                             //Se posicao 1, inclua no inicio
            else
            {
                if(posicao==quantidadeDeNos+1) this->incluirFinal(informacao);                          //Se a posicao for a ultima, inclua no fim
                else
                {
                    No<Tipo> *correrLista = this->inicio->getProximo();                                 //No que corre a lista
                    int contador = 2;                                                                   //inicio no primeiro da lista
                    while(contador<posicao) {correrLista = correrLista->getProximo(); contador++;}      //Para na posição...hehe...Funk
                    No<Tipo> *novaPosicao = new No<Tipo>(informacao,correrLista->getAnterior(),correrLista);  // <-- No -->
                    correrLista->getAnterior()->setProximo(novaPosicao);                                // Posicao-1 --> No
                    correrLista->setAnterior(novaPosicao);                                              // No <-- Posicao Antiga
                    quantidadeDeNos++;                                                                  //Agora tenho mais um No na lista
                }
            }
        }
        catch (std::bad_alloc) { throw QString(" Não foi possivel incluir "); }
        catch (QString &erro) { throw QString(erro); }
    }

    template <class Tipo>
    Tipo Lista_LDE<Tipo>::removerInicio()
    {
        if(this->eVazio()) throw QString(" Não há o que remover ");                                     //Verificar se ha algo para remover
        No<Tipo> *paraRemover = inicio;                                                                 //Armazeno o endereço do Nó para remover
        inicio = inicio->getProximo();                                                                  //O segundo passa a ser o primeiro
        Tipo informacao = paraRemover->getInformacao();                                                  //Armazeno a informação que vai ser deletada
        delete  paraRemover;                                                                            //deleto o No
        paraRemover = 0;                                                                                //O inicio(anterior) aponta para 0
        quantidadeDeNos--;                                                                              //Diminuo um elemento na lista
        return informacao;                                                                              //E retorno a informaçao que estava no Nó.
    }

    template <class Tipo>
    Tipo Lista_LDE<Tipo>::removerFinal()
    {
        if(this->eVazio()) throw QString(" Não há o que remover ");                                     //Verificar se ha algo para remover
        No<Tipo> *paraRemover = fim;                                                                    //Armazeno o endereço do Nó para remover
        fim = fim->getAnterior();                                                                       //O penultimo passa a ser o ultimo
        Tipo informacao = paraRemover->getInformacao();                                                 //Armazeno a informação que vai ser deletada
        delete  paraRemover;                                                                            //deleto o No
        paraRemover = 0;                                                                                //O fim(anterior) aponta para 0
        quantidadeDeNos--;                                                                              //Diminuo um elemento na lista
        return informacao;                                                                              //E retorno a informaçao que estava no Nó
    }

    template <class Tipo>
    Tipo Lista_LDE<Tipo>::removerNaPosicao(int posicao)
    {
        if(this->eVazio()) throw QString(" Não tem nada para remover");                                 //Verifique se há oque remover
        if(posicao<1 || posicao>this->quantidadeDeNos)
            throw QString("posicao fora do intervalo valido");                                          //Verifique  a posicao para remover
        try
        {
            if(posicao==1) return this->removerInicio();                                                //Se posicao 1, remova no inicio
            else
            {
                if(posicao==quantidadeDeNos) return this->removerFinal();                               //Se posicao ultima, remova no final
                else
                {
                    No<Tipo> *correrLista = this->inicio->getProximo();                                 //No que corre a lista
                    int contador = 2;                                                                   //inicio no primeiro da lista
                    while(contador<posicao){correrLista = correrLista->getProximo(); contador++;}       //Para na posição...hehe...Funk
                    correrLista->getAnterior()->setProximo(correrLista->getProximo());                  //O anterior aponta para o proximo
                    correrLista->getProximo()->setAnterior(correrLista->getAnterior());                 //O proximo aponta para o anterior
                    Tipo informacao = correrLista->getInformacao();                                     //Salvo a informacao
                    delete correrLista;                                                                 //Deleto a posicao
                    quantidadeDeNos--;                                                                  //Atualizo a quantidade de Nos
                    return informacao;                                                                  //Retorne a informacao
                }
            }
        } catch (QString &erro) { throw QString(erro); }
        return 0 ;                                                                                      //retorno de controle
    }

    template <class Tipo>
    int Lista_LDE<Tipo>::removerInformacao(Tipo informacao)
    {
        if(this->eVazio()) throw QString(" Não tem informaçao para remover aqui");                      //Verifica se há informacao
        try
        {
            int quantidadeDeNos_Removidos = 0;                                                          //Quarda a quantidade removida
            No<Tipo> *correrLista = this->inicio;                                                       //No que corre a lista
            while(correrLista->getProximo()!=0)                                                         //Enquanto não verificar todas posicoes
            {
                if(correrLista->getProximo()->getInformacao()==informacao)                              //Verifique se a informacao e a correta
                {
                    No<Tipo> *paraDeletar = correrLista->getProximo();                                  //Salvo a posicao para deletar
                    correrLista->setProximo(paraDeletar->getProximo());                                 //Anterior aponta para o proximo
                    if(paraDeletar->getProximo()!=0)                                                    //Se o proximo não e zero...
                        {paraDeletar->getProximo()->setAnterior(correrLista);}                          //...Proximo aponta para anterior
                    delete paraDeletar;                                                                 //Deleto o Nó
                    quantidadeDeNos--;                                                                  //Menos um elemento
                    quantidadeDeNos_Removidos++;                                                        //Mais um removido
                }
                else correrLista = correrLista->getProximo();                                           //Se nao remover, va para a proxima
            }
            if(inicio->getInformacao()==informacao)
                {this->removerInicio(); quantidadeDeNos_Removidos++;}                                   //No fim, verifique a informacao do inicio
            return quantidadeDeNos_Removidos;                                                           //Retorne quantos foram removidos
        } catch (QString &erro) { throw QString(erro); }
    }

    template <class Tipo>
    int Lista_LDE<Tipo>::acessarInformacao(Tipo informacao)const
    {
        No<Tipo> *correrLista = this->inicio;                                                           //Sempre do inicio
        int posicao = 1;                                                                                //A posição que começo
        while(correrLista != 0)                                                                         //enquanto não chegar no fim
        {
            if(correrLista->getInformacao()==informacao) {return posicao;}                              //Se achar a informaçao retorno ela
            correrLista = correrLista->getProximo();                                                    //Vou para o proximo Nó
            posicao++;
        }
        return 0;                                                                                       //Se chegar no fim não achei nada
    }

    template <class Tipo>
    Tipo Lista_LDE<Tipo>::acessarPosicao(int posicao)const
    {
        if(posicao<1 || posicao>this->quantidadeDeNos)
            throw QString("posicao fora do intervalo valido");
        No<Tipo> *correrLista = this->inicio;                                                           //No que corre a lista
        int contador = 1;                                                                               //inicio no primeiro da lista
        while(contador<posicao){ correrLista = correrLista->getProximo(); contador++; }                 //Para na posição...hehe...
        return correrLista->getInformacao();                                                            //Retorno a informação na posição
    }
}
#endif // LISTA_LDE_H
