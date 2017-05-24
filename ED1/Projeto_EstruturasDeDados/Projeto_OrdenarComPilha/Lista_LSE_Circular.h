#ifndef LISTA_LSE_CIRCULAR_H
#define LISTA_LSE_CIRCULAR_H
#include <Interface_Lista.h>
#include <No_Simples.h>

namespace ED1
{
    template<class Tipo>
    class Lista_LSE_Circular : public Interface_Lista<Tipo>
    {
    private:
        int quantidadeDeNos;
        No_Simples<Tipo> *inicio;
        No_Simples<Tipo> *fim;

    public:
        Lista_LSE_Circular();
        virtual ~Lista_LSE_Circular(){while(this->quantidadeDeNos!=0) this->removerInicio();}
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
    Lista_LSE_Circular<Tipo>::Lista_LSE_Circular():
        quantidadeDeNos(0),
        inicio(0),
        fim(0)
    {
    }

    template<class Tipo>
    void Lista_LSE_Circular<Tipo>::incluirInicio(Tipo informacao)
    {
        try
        {
            No_Simples<Tipo> *novoInicio = new No_Simples<Tipo>(informacao,this->inicio);       //Crie o No
            novoInicio->setProximoElemento(inicio);                                             //O proximo ao No e o inicio
            inicio = novoInicio;                                                                //Atualize o inicio
            if(this->eVazio()) {fim=inicio;inicio->setProximoElemento(fim);}                    //Se tiver vazio fim==inicio
            fim->setProximoElemento(inicio);                                                    //O proximo ao Fim e o novo inicio
            quantidadeDeNos++;                                                                  //Atualize a quantidade de nos
        }
        catch (std::bad_alloc) { throw QString(" Não foi possivel incluir no inicio "); }
    }

    template<class Tipo>
    void Lista_LSE_Circular<Tipo>::incluirFinal(Tipo informacao)
    {
        try
        {
            if(this->eVazio()) this->incluirInicio(informacao);                                 //Se tiver vazio inclua no inicio
            else
            {
                No_Simples<Tipo> *novoFinal = new No_Simples<Tipo>(informacao,this->inicio);    //Cria o novo No final
                this->fim->setProximoElemento(novoFinal);                                       //O fim indica onde sera o novo fim
                fim = novoFinal;                                                                //Atualize o fim
                this->quantidadeDeNos++;                                                        //Atualize a quantidade de nos
            }
        }
        catch (QString &erro) { throw QString(erro); }
        catch (std::bad_alloc) { throw QString(" Não foi possivel incluir no final "); }
    }

    template<class Tipo>
    void Lista_LSE_Circular<Tipo>::incluirNaPosicao(Tipo informacao,int posicao)
    {
        try
        {
            if(posicao<1 || posicao>this->quantidadeDeNos+1)
                throw QString("posicao fora do intervalo valido");                              //Valide a posicao
            if(posicao==1) this->incluirInicio(informacao);                                     //Se a posicao e 1, inclua no inicio
            else
            {
                if(posicao==this->quantidadeDeNos+1) this->incluirFinal(informacao);            //Se for no final...manda pra lá
                else
                {
                    No_Simples<Tipo> *novaPosicao = new No_Simples<Tipo>(informacao,this->inicio); //Crio um novo No com a informação
                    No_Simples<Tipo> *correrLista = this->inicio;                               //No que corre a lista

                    while(posicao!=2)                                                           //Para na posição anterior
                    {
                        correrLista = correrLista->getProximoElemento();
                        posicao--;
                    }
                    novaPosicao->setProximoElemento(correrLista->getProximoElemento());         //A novaPosicao aponta para o proximo
                    correrLista->setProximoElemento(novaPosicao);                               //posicao-1 --> novaPosicao
                    quantidadeDeNos++;                                                          //Atualize a quantidade de nos
                }
            }
        }
        catch (std::bad_alloc) { throw QString(" Não foi possivel incluir no inicio "); }
        catch (QString &erro) { throw QString(erro); }
    }

    template<class Tipo>
    Tipo Lista_LSE_Circular<Tipo>::removerInicio()
    {
        if(this->eVazio()) throw QString(" Não há o que remover ");                             //Verificar se ha algo para remover
        No_Simples<Tipo> *paraRemover = inicio;                                                 //Armazeno o endereço do Nó para remover
        inicio = inicio->getProximoElemento();                                                  //O segundo passa a ser o primeiro
        fim->setProximoElemento(inicio);                                                        //O fim aponta para o novo inicio
        Tipo informacao = paraRemover->getInformacao();                                         //Armazena a informacao
        delete  paraRemover;                                                                    //deleto o No
        quantidadeDeNos--;                                                                      //Diminuo um elemento na lista
        if(this->eVazio()) { inicio=0 ; fim=0; }                                                //Se vazio, atualizo inicio e fim
        return informacao;                                                                      //E retorno a informaçao
    }

    template<class Tipo>
    Tipo Lista_LSE_Circular<Tipo>::removerFinal()
    {
        if(this->eVazio()) throw QString(" Não há o que remover ");                             //Verificar se ha algo para remover
        Tipo informacao;
        if(this->quantidadeDeNos==1)informacao = this->removerInicio();                         //Com 1 elemento, remova no inicio
        else
        {
            No_Simples<Tipo> *correrLista = this->inicio;                                       //No que corre a lista
            while(correrLista->getProximoElemento()->getProximoElemento()!=this->inicio)        //Corro enquanto o proximo!=0
                {correrLista=correrLista->getProximoElemento();}
            informacao = correrLista->getProximoElemento()->getInformacao();                    //Armazene a informacao
            delete correrLista->getProximoElemento();                                           //Deleto o Nó final
            correrLista->setProximoElemento(this->inicio);                                      //novo Final --> inicio
            fim = correrLista;                                                                  //Atualize o fim
            quantidadeDeNos--;                                                                  //Tenho um elemento a menos agora
            return informacao;                                                                  //Aqui esta a informaçao deletada
        }
        return informacao;
    }

    template<class Tipo>
    Tipo Lista_LSE_Circular<Tipo>::removerNaPosicao(int posicao)
    {
        if(this->eVazio()) throw QString(" Não tem nada para remover");                         //Verifique se há algo
        if(posicao<1 || posicao>this->quantidadeDeNos)
            throw QString("posicao fora do intervalo valido");                                  //Valida a posicao
        try
        {

            if(posicao==1) return this->removerInicio();                                        //Se posicao 1, remova no inicio
            else
            {
                if(posicao == this->quantidadeDeNos) return this->removerFinal();               //Se posicao ultima,remova no fim
                else
                {
                    No_Simples<Tipo> *correrLista = this->inicio;                               //No que corre a lista

                    while(posicao!=2)                                                           //Para na posição anterior
                    {
                        correrLista = correrLista->getProximoElemento();
                        posicao--;
                    }
                    No_Simples<Tipo> *paraDeletar = correrLista->getProximoElemento();          //Posicao há ser deletar
                    correrLista->setProximoElemento(paraDeletar->getProximoElemento());         //A posicao anterior aponta para a proxima
                    Tipo informacao = paraDeletar->getInformacao();                             //Armazenar a informaçao
                    delete paraDeletar;                                                         //Deleto o Nó
                    quantidadeDeNos--;                                                          //Menos um elemento
                    return informacao;
                }
            }
        } catch (QString &erro) { throw QString(erro); }
    }

    template<class Tipo>
    int Lista_LSE_Circular<Tipo>::removerInformacao(Tipo informacao)
    {
        if(this->eVazio()) throw QString(" Não tem informaçao para remover aqui");              //Verifique se esta vazio
        try
        {
            int quantidadeDeNos_Removidos = 0;                                                  //Armazena a quantidade removida
            No_Simples<Tipo> *correrLista = this->inicio;                                       //Comece a verificar do inicio
            int quantidade_Nos = this->quantidadeDeNos;
            for(int contador = 1 ; contador <= quantidade_Nos ; contador++)                     //Verifique todas as posicoes
            {
                if(correrLista->getProximoElemento()->getInformacao()==informacao)              //Se encontrar a informacao
                {
                    No_Simples<Tipo> *paraDeletar = correrLista->getProximoElemento();          //Salve o endereco do Nó
                    if(inicio==paraDeletar) inicio = inicio->getProximoElemento();              //Atualize o inicio
                    if(fim==paraDeletar) fim = correrLista;                                     //Atualize o fim
                    correrLista->setProximoElemento(paraDeletar->getProximoElemento());         //O anterior aponta para o proximo
                    delete paraDeletar;                                                         //Deleto o Nó
                    quantidadeDeNos--;                                                          //Atualize a quantidade de Nos
                    quantidadeDeNos_Removidos++;                                                //Atualize a quantidade removida
                }
                else correrLista = correrLista->getProximoElemento();                           //Se não encontrar vá para o proximo
            }
            if(this->eVazio()){this->inicio=0;this->fim=0;}                                     //Se ficar vazio, atualize fim e inicio
            return quantidadeDeNos_Removidos;                                                   //Retorna quantos foram removidos
        } catch (QString &erro) { throw QString(erro); }
    }

    template<class Tipo>
    int Lista_LSE_Circular<Tipo>::acessarInformacao(Tipo informacao)const
    {
        No_Simples<Tipo> *correrLista = this->inicio;                                           //Sempre do inicio
        for(int posicao = 1;correrLista != this->inicio || posicao == 1;posicao++)              //enquanto não chegar no fim
        {
            if(correrLista->getInformacao()==informacao)                                        //Se achar a informacao
            {
                return posicao;                                                                 //Mando a posição que achei ele
            }
            correrLista = correrLista->getProximoElemento();                                    //Vou para o proximo Nó
        }
        return 0;                                                                               //Se chegar no fim não achei nada
    }

    template<class Tipo>
    Tipo Lista_LSE_Circular<Tipo>::acessarPosicao(int posicao)const
    {
        if(posicao<1 || posicao>this->quantidadeDeNos)
            throw QString("posicao fora do intervalo valido");                                  //Valida a posicao
        No_Simples<Tipo> *correrLista = this->inicio;                                           //No que corre a lista

        while(posicao!=1)                                                                       //Para na posição...hehe...referencias
        {
            correrLista = correrLista->getProximoElemento();
            posicao--;
        }
        return correrLista->getInformacao();                                                    //Retorno a informação na posição
    }
}
#endif // LISTA_LSE_CIRCULAR_H
