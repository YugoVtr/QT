#ifndef LISTA_H
#define LISTA_H
#include <No.h>
#include <QString>
#include <QMessageBox>

namespace ED1
{
    template<class Tipo>
    class Lista
    {
    private:
        int quantidadeDeNos;
        No<Tipo> *inicio;
    public:
        Lista();
        ~Lista();
        void incluirInicio(Tipo informacao);
        void incluirFinal(Tipo informacao);
        void incluirNaPosicao(Tipo informacao,int posicao);
        Tipo removerInicio();
        Tipo removerFinal();
        Tipo removerNaPosicao(int posicao);
        int removerInformacao(Tipo informacao); //retornar a quantidade de elementos removidos
        int acessarInformacao(Tipo informacao)const; //retornar a posicao da informação na fila
        Tipo acessarPosicao(int posicao)const; //retornar a informaçao na posição dada
        inline int obterTamanho()const{return quantidadeDeNos;}
        inline bool eVazio()const{return(quantidadeDeNos==0);}
    };

    template<class Tipo>
    Lista<Tipo>::Lista():
        quantidadeDeNos(0),
        inicio(0)
    {
    }

    template<class Tipo>
    Lista<Tipo>::~Lista()
    {
        while(this->inicio!=0) this->removerInicio();
    }

    template<class Tipo>
    void Lista<Tipo>::incluirInicio(Tipo informacao)
    {
        try
        {
            No<Tipo> *novoInicio = new No<Tipo>(informacao,0); // Crio um novo No com a informação
            novoInicio->setProximoElemento(inicio); //O novo No aponta para o primeiro(agora 2°) elemento
            inicio = novoInicio;//E faço o inicio apontar para ele...
            quantidadeDeNos++; //Agora tenho mais um No na lista
        }
        catch (std::bad_alloc) { throw QString(" Não foi possivel incluir no inicio "); }
    }

    template<class Tipo>
    void Lista<Tipo>::incluirFinal(Tipo informacao)
    {
        try
        {
            if(this->eVazio()) this->incluirInicio(informacao); // Se a lista e vazia, o fim tambem e o inicio
            else
            {
                this->incluirNaPosicao(informacao,this->quantidadeDeNos+1);
            }
        }
        catch (QString &erro) { throw QString(erro); }
        catch (std::bad_alloc) { throw QString(" Não foi possivel incluir no final "); }
    }

    template<class Tipo>
    void Lista<Tipo>::incluirNaPosicao(Tipo informacao,int posicao)
    {
        try
        {
            if(posicao<1 || posicao>this->quantidadeDeNos+1) throw QString("posicao fora do intervalo valido");
            if(posicao==1) this->incluirInicio(informacao); // Se a posicao e 1, e para colocar no inicio
            else
            {
                No<Tipo> *novaPosicao = new No<Tipo>(informacao,0); // Crio um novo No com a informação
                No<Tipo> *correrLista = this->inicio; //No que corre a lista
                int contador = 1;//inicio no primeiro da lista
                while(contador<posicao-1) //Para na posição anterior
                {
                    correrLista = correrLista->getProximoElemento();
                    contador++;
                }
                novaPosicao->setProximoElemento(correrLista->getProximoElemento()); //aponta para o elemento que era a posiçao
                correrLista->setProximoElemento(novaPosicao); //O elemento anterior aponta para a nova posição
                quantidadeDeNos++; //Agora tenho mais um No na lista
            }
        }
        catch (std::bad_alloc) { throw QString(" Não foi possivel incluir no inicio "); }
        catch (QString &erro) { throw QString(erro); }
    }

    template<class Tipo>
    Tipo Lista<Tipo>::removerInicio()
    {
        if(this->eVazio()) throw QString(" Não há o que remover "); //Verificar se ha algo para remover
        No<Tipo> *paraRemover = inicio; //Armazeno o endereço do Nó para remover
        inicio = inicio->getProximoElemento(); //O segundo passa a ser o primeiro
        Tipo informacao = paraRemover->getInformacao(); //Armazeno a informação que vai ser deletada
        delete  paraRemover; //deleto o No
        quantidadeDeNos--; //Diminuo um elemento na lista
        return informacao; //E retorno a informaçao que estava no Nó.
    }

    template<class Tipo>
    Tipo Lista<Tipo>::removerFinal()
    {
        if(this->eVazio()) throw QString(" Não há o que remover "); //Verificar se ha algo para remover
        Tipo informacao = 0;
        if(this->quantidadeDeNos==1)informacao = this->removerInicio(); //Se haver apenas um elemento, retiro do inicio
        else
        {
            No<Tipo> *correrLista = this->inicio; //No que corre a lista
            //Corro a lista enquanto o proximo elemento não apontar para 0
            while(correrLista->getProximoElemento()->getProximoElemento()!=0){correrLista=correrLista->getProximoElemento();}
            informacao = correrLista->getProximoElemento()->getInformacao();//Armazeno a informação que vai ser deletar
            delete correrLista->getProximoElemento(); //Deleto o Nó final
            correrLista->setProximoElemento(0); //E faço o novo final apontar para 0
            quantidadeDeNos--; //Tenho um elemento a menos agora
            return informacao; //Aqui esta a informaçao deletada
        }
        return informacao;
    }

    template<class Tipo>
    Tipo Lista<Tipo>::removerNaPosicao(int posicao)
    {
        if(this->eVazio()) throw QString(" Não tem nada para remover");
        if(posicao<1 || posicao>this->quantidadeDeNos) throw QString("posicao fora do intervalo valido");
        try
        {
            Tipo informacao = 0;
            if(posicao==1) informacao = this->removerInicio(); // Se a posicao e 1, e so remover do inicio
            else
            {
                No<Tipo> *correrLista = this->inicio; //No que corre a lista
                int contador = 1;//inicio no primeiro da lista
                while(contador<posicao-1) //Para na posição anterior
                {
                    correrLista = correrLista->getProximoElemento();
                    contador++;
                }
                No<Tipo> *paraDeletar = correrLista->getProximoElemento(); //Posicao há ser deletar
                correrLista->setProximoElemento(paraDeletar->getProximoElemento());//A posicao anterior aponta para a proxima
                informacao = paraDeletar->getInformacao(); //Armazenar a informaçao que vai ser deletada
                delete paraDeletar; //Deleto o Nó
                quantidadeDeNos--; //Menos um elemento
            }
            return informacao;//Mando a informação que se foi
        } catch (QString &erro) { throw QString(erro); }
    }

    template<class Tipo>
    int Lista<Tipo>::removerInformacao(Tipo informacao)
    {
        if(this->eVazio()) throw QString(" Não tem informaçao para remover aqui");
        try
        {
            int quantidadeDeNos_Removidos = 0;
            No<Tipo> *correrLista = this->inicio;
            while(correrLista->getProximoElemento()!=0)
            {
                bool marcador = true;
                if(correrLista->getProximoElemento()->getInformacao()==informacao)
                {
                    No<Tipo> *paraDeletar = correrLista->getProximoElemento();
                    correrLista->setProximoElemento(paraDeletar->getProximoElemento());
                    delete paraDeletar; //Deleto o Nó
                    quantidadeDeNos--; //Menos um elemento
                    quantidadeDeNos_Removidos++;
                    marcador = false;
                }
                if(marcador)correrLista = correrLista->getProximoElemento();
            }
            if(inicio->getInformacao()==informacao)
            {
                this->removerInicio();
                quantidadeDeNos_Removidos++;
            }
            return quantidadeDeNos_Removidos;
        } catch (QString &erro) { throw QString(erro); }
    }

    template<class Tipo>
    int Lista<Tipo>::acessarInformacao(Tipo informacao)const
    {
        No<Tipo> *correrLista = this->inicio; //Sempre do inicio
        int posicao = 1;//A posição que começo
        while(correrLista != 0) //enquanto não chegar no fim
        {
            if(correrLista->getInformacao()==informacao) //Se a informação naquela posição for a procurada
            {
                return posicao; //Mando a posição que achei ele
            }
            correrLista = correrLista->getProximoElemento();//Vou para o proximo Nó
            posicao++;
        }
        return 0; //Se chegar no fim não achei nada
    }

    template<class Tipo>
    Tipo Lista<Tipo>::acessarPosicao(int posicao)const
    {
        if(posicao<1 || posicao>this->quantidadeDeNos) throw QString("posicao fora do intervalo valido");
        No<Tipo> *correrLista = this->inicio; //No que corre a lista
        int contador = 1;//inicio no primeiro da lista
        while(contador<posicao) //Para na posição...hehe...referencias
        {
            correrLista = correrLista->getProximoElemento();
            contador++;
        }
        return correrLista->getInformacao(); //Retorno a informação na posição
    }
}
#endif // LISTA_H
