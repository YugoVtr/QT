#ifndef LISTA_LSE_H
#define LISTA_LSE_H
#include <No.h>
#include <QString>

namespace ED1
{
    template<class Tipo>
    class Lista_LSE
    {
    private:
        int quantidadeDeNos;
        No<Tipo> *inicio;
    public:
        Lista_LSE();
        ~Lista_LSE();
        void incluirInicio(Tipo informacao);
        void incluirFinal(Tipo informacao);
        void incluirNaPosicao(Tipo informacao,int posicao);
        Tipo removerInicio();
        Tipo removerFinal();
        Tipo removerNaPosicao(int posicao);
        int removerInformacao(Tipo informacao);
        int acessarInformacao(Tipo informacao)const;
        Tipo acessarPosicao(int posicao)const;
        inline int obterTamanho()const{return quantidadeDeNos;}
        inline bool eVazio()const{return(quantidadeDeNos==0);}
    };

    template<class Tipo>
    Lista_LSE<Tipo>::Lista_LSE():
        quantidadeDeNos(0),
        inicio(0)
    {
    }

    template<class Tipo>
    Lista_LSE<Tipo>::~Lista_LSE()
    {
        while(this->inicio!=0) this->removerInicio();
    }

    template<class Tipo>
    void Lista_LSE<Tipo>::incluirInicio(Tipo informacao)
    {
        try
        {
            No<Tipo> *novoInicio = new No<Tipo>(informacao,0);                                      // Crio um novo No com a informação
            novoInicio->setProximoElemento(inicio);                                                 //O novo No aponta para o inicio
            inicio = novoInicio;                                                                    //Atualize o inicio
            quantidadeDeNos++;                                                                      //Agora tenho mais um No na lista
        }
        catch (std::bad_alloc) { throw QString(" Não foi possivel incluir no inicio "); }
    }

    template<class Tipo>
    void Lista_LSE<Tipo>::incluirFinal(Tipo informacao)
    {
        try
        {
            if(this->eVazio()) this->incluirInicio(informacao);                                     // Se a lista e vazia, inclua no inicio
            else this->incluirNaPosicao(informacao,this->quantidadeDeNos+1);                        // Inclua na ultima posicao
        }
        catch (QString &erro) { throw QString(erro); }
        catch (std::bad_alloc) { throw QString(" Não foi possivel incluir no final "); }
    }

    template<class Tipo>
    void Lista_LSE<Tipo>::incluirNaPosicao(Tipo informacao,int posicao)
    {
        try
        {
            if(posicao<1 || posicao>this->quantidadeDeNos+1)
                throw QString("posicao fora do intervalo valido");                                  //Valide a posicao
            if(posicao==1) this->incluirInicio(informacao);                                         // Se a posicao 1, coloque no inicio
            else
            {
                No<Tipo> *novaPosicao = new No<Tipo>(informacao,0);                                 // Crio um novo No com a informação
                No<Tipo> *correrLista = this->inicio;                                               //No que corre a lista
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

    template<class Tipo>
    Tipo Lista_LSE<Tipo>::removerInicio()
    {
        if(this->eVazio()) throw QString(" Não há o que remover ");                                 //Verificar se ha algo para remover
        No<Tipo> *paraRemover = inicio;                                                             //Armazeno o endereço do Nó para remover
        inicio = inicio->getProximoElemento();                                                      //O segundo passa a ser o primeiro
        Tipo informacao = paraRemover->getInformacao();                                             //Armazeno a informação que vai ser deletada
        delete  paraRemover;                                                                        //deleto o No
        quantidadeDeNos--;                                                                          //Diminuo um elemento na lista
        return informacao;                                                                          //E retorno a informaçao que estava no Nó.
    }

    template<class Tipo>
    Tipo Lista_LSE<Tipo>::removerFinal()
    {
        if(this->eVazio()) throw QString(" Não há o que remover ");                                 //Verificar se ha algo para remover
        Tipo informacao = 0;
        if(this->quantidadeDeNos==1)informacao = this->removerInicio();                             //Se haver apenas um elemento, retiro do inicio
        else
        {
            No<Tipo> *correrLista = this->inicio;                                                   //No que corre a lista
            while(correrLista->getProximoElemento()->getProximoElemento()!=0)                       //Corre ate chegar na penultima posicao
                {correrLista=correrLista->getProximoElemento();}
            informacao = correrLista->getProximoElemento()->getInformacao();                        //Armazeno a informação que vai ser deletar
            delete correrLista->getProximoElemento();                                               //Deleto o Nó final
            correrLista->setProximoElemento(0);                                                     //E faço o novo final apontar para 0
            quantidadeDeNos--;                                                                      //Tenho um elemento a menos agora
            return informacao;                                                                      //Aqui esta a informaçao deletada
        }
        return informacao;
    }

    template<class Tipo>
    Tipo Lista_LSE<Tipo>::removerNaPosicao(int posicao)
    {
        if(this->eVazio()) throw QString(" Não tem nada para remover");
        if(posicao<1 || posicao>this->quantidadeDeNos)                                              //Valida a posicao
            throw QString("posicao fora do intervalo valido");
        try
        {
            Tipo informacao = 0;
            if(posicao==1) informacao = this->removerInicio();                                      // Se a posicao e 1, e so remover do inicio
            else
            {
                No<Tipo> *correrLista = this->inicio;                                               //No que corre a lista
                int contador = 1;                                                                   //inicio no primeiro da lista
                while(contador<posicao-1)                                                           //Para na posição anterior
                {
                    correrLista = correrLista->getProximoElemento();
                    contador++;
                }
                No<Tipo> *paraDeletar = correrLista->getProximoElemento();                          //Posicao há ser deletar
                correrLista->setProximoElemento(paraDeletar->getProximoElemento());                 //A posicao anterior aponta para a proxima
                informacao = paraDeletar->getInformacao();                                          //Armazenar a informaçao que vai ser deletada
                delete paraDeletar;                                                                 //Deleto o Nó
                quantidadeDeNos--;                                                                  //Menos um elemento
            }
            return informacao;                                                                      //Mando a informação que se foi
        } catch (QString &erro) { throw QString(erro); }
    }

    template<class Tipo>
    int Lista_LSE<Tipo>::removerInformacao(Tipo informacao)
    {
        if(this->eVazio()) throw QString(" Não tem informaçao para remover aqui");                  //Verifica se há algo para remover
        try
        {
            int quantidadeDeNos_Removidos = 0;                                                      //Armazena a quantidade de nos deletada
            No<Tipo> *correrLista = this->inicio;                                                   //Corre a lista do inicio
            while(correrLista->getProximoElemento()!=0)                                             //Enquanto não chegar no fim
            {
                if(correrLista->getProximoElemento()->getInformacao()==informacao)                  //Se a informacao for a procurada
                {
                    No<Tipo> *paraDeletar = correrLista->getProximoElemento();                      //Salve o endereco para deletar
                    correrLista->setProximoElemento(paraDeletar->getProximoElemento());             //O anterior aponta para o proximo
                    delete paraDeletar;                                                             //Deleto o Nó
                    quantidadeDeNos--;                                                              //Menos um elemento
                    quantidadeDeNos_Removidos++;                                                    //Atualize a quantidade removida
                }
                else correrLista = correrLista->getProximoElemento();                               //Se não remover, va para a proxima posicao
            }
            if(inicio->getInformacao()==informacao)                                                 //Verifique o inicio tambem
            {
                this->removerInicio();
                quantidadeDeNos_Removidos++;
            }
            return quantidadeDeNos_Removidos;                                                       //Retorne quantos Nos foram removidos
        } catch (QString &erro) { throw QString(erro); }
    }

    template<class Tipo>
    int Lista_LSE<Tipo>::acessarInformacao(Tipo informacao)const
    {
        No<Tipo> *correrLista = this->inicio;                                                       //Sempre do inicio
        int posicao = 1;                                                                            //A posição que começo
        while(correrLista != 0)                                                                     //enquanto não chegar no fim
        {
            if(correrLista->getInformacao()==informacao)                                            //Se a informação naquela posição for a procurada
            {
                return posicao;                                                                     //Mando a posição que achei ele
            }
            correrLista = correrLista->getProximoElemento();                                        //Vou para o proximo Nó
            posicao++;
        }
        return 0;                                                                                   //Se chegar no fim não achei nada
    }

    template<class Tipo>
    Tipo Lista_LSE<Tipo>::acessarPosicao(int posicao)const
    {
        if(posicao<1 || posicao>this->quantidadeDeNos)
            throw QString("posicao fora do intervalo valido");                                      //Valide a posicao
        No<Tipo> *correrLista = this->inicio;                                                       //No que corre a lista
        int contador = 1;                                                                           //inicio no primeiro da lista
        while(contador<posicao)                                                                     //Para na posição...hehe...referencias
        {
            correrLista = correrLista->getProximoElemento();
            contador++;
        }
        return correrLista->getInformacao();                                                        //Retorno a informação na posição
    }
}
#endif // LISTA_LSE_H
