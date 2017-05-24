#ifndef ARRAYLIST_H
#define ARRAYLIST_H
#include<QString>

namespace TP2
{
    template<class Tipo>
    class arrayList
    {
        private:
            int tamanho;
            int fim;
            Tipo *array;

        public:
            arrayList();
            arrayList(int tamanho);
            inline ~arrayList(){if(array) delete[] array; }

            inline void incluir_Final(Tipo elemento){this->incluir_Posicao(this->fim+1,elemento);}
            void incluir_Posicao(int posicao, Tipo elemento);
            inline void incluir_Inicio(Tipo elemento){this->incluirElemento_Posicao(0,elemento);}
            inline void removerElementos(){this->fim=-1;}
            int buscar(Tipo elemento_Busca)const;
            Tipo operator [](int posicao)const;
            inline bool eVazia()const { return (fim==-1);}
            void remover_Posicao(int posicao);
            void remover_Especifico(Tipo elemento);
            void substituir_Posicao(int posicao,Tipo elemento)const;
            inline int size()const {return fim+1;}
    };

    template<class Tipo>
    arrayList<Tipo>::arrayList():                                                                       //Construtor default
        tamanho(10),
        fim(-1),
        array(0)
    {
        try { array = new Tipo[this->tamanho];}
        catch (std::bad_alloc) { throw QString("#ERRO_CLASS_ARRAYLIST_CONSTRUTOR_MEMORY_FULL");}
    }

    template<class Tipo>
    arrayList<Tipo>::arrayList(int tamanho):                                                            //Construtor com parametro
        tamanho(10),
        fim(-1),
        array(0)
    {
        if(tamanho==0)
            throw QString("#ERRO_CLASS_ARRAYLIST_CONSTRUTOR_TAMANHO_INVALIDO");
        try
        {
            array = new Tipo[tamanho];
            this->tamanho = tamanho;
        }
        catch (std::bad_alloc) { throw QString("#ERRO_CLASS_ARRAYLIST_CONSTRUTOR_MEMORY_FULL");   }
    }

    template<class Tipo>
    void  arrayList<Tipo>::incluir_Posicao(int posicao, Tipo elemento)
    {
        if(posicao< 0 || posicao>this->fim+1)
            throw QString("#ERRO_CLASS_ARRAYLIST_INCLUIR_POSICAO_INVALIDA");                            //Valida a posicao
        try
        {
            if(fim == tamanho-1)                                                                        //Se vetor cheio
            {
                Tipo *auxiliar = this->array;                                                           //Atribua o vetor antigo a um auxiliar
                this->tamanho *= 1.5;                                                                   //Redimenciona o tamanho em +50%
                if(this->tamanho==1) this->tamanho = 2;                                                 //Garante o redimencionamento correto
                this->array = new Tipo[this->tamanho];                                                  //Cria o novo vetor redimencionado
                for(int contador=0 ; contador<=fim ; contador++)                                        //Copia os valores do antigo para o novo
                {
                    this->array[contador]=auxiliar[contador];
                }
                delete[] auxiliar;                                                                      //Deleta o vetor
            }
            for(int contador = fim ; contador >= posicao ; contador--)
            {
                this->array[contador+1] = this->array[contador];                                        //Desloca o vetor uma posicao para frente
            }
            fim++;
            this->array[posicao]= elemento;                                                             //coloca o elemento na posicao pedida
        }
        catch (std::bad_alloc&) { throw QString("#ERRO_CLASS_ARRAYLIST_INCLUIR_MEMORY_FULL"); }
    }

    template<class Tipo>
    int arrayList<Tipo>::buscar(Tipo elemento_Busca) const
    {
        int posicao;                                                                                    //Quarda a posicao do elemento
        for(posicao = 0; posicao <= this->fim; posicao++)                                               //Procura o elemento no vetor
        {
            if(this->array[posicao] == elemento_Busca)
            {
                return posicao;                                                                         //Quando encontrar retorna a posicao
            }
        }
        return -1;                                                                                      //Se não encontrar retorna -1
    }

    template<class Tipo>
    Tipo arrayList<Tipo>:: operator[](int posicao) const
    {
        if(posicao > this->fim || posicao < 0 )
            throw QString ("#ERRO_CLASS_ARRAYLIST_OPERATOR[]_POSICAO_INVALIDA");                        //Valida a posicao
        return this->array[posicao];                                                                    //Retorna o elemento na posicao
    }

    template<class Tipo>
    void arrayList<Tipo>::remover_Posicao(int posicao)
    {
        if(posicao > this->fim || posicao < 0 )
            throw QString ("#ERRO_CLASS_ARRAYLIST_REMOVER_POSICAO_INVALIDA");                           //Valida a posicao
        for( int contador = posicao; contador < this->fim; contador++ )                                 //Corre o vetor
        {
            this->array[contador] =  this->array[contador +1];                                          //Desloca o vetor uma posicao para tras
        }
        fim--;                                                                                          //Atualiza o fim
    }

    template<class Tipo>
    void arrayList<Tipo>::remover_Especifico(Tipo elemento)
    {
        try
        {
            while(this->buscarElemento(elemento)!=-1)                                                   //Enquanto encontrar o elemento
            {
                int posicao = this->buscarElemento(elemento);                                           //Remove o elemento na posicao encontrada
                this->removerElemento_Posicao(posicao);
            }
        } catch (QString &erro) { throw QString(erro);  }
    }

    template<class Tipo>
    void arrayList<Tipo>::substituir_Posicao(int posicao, Tipo elemento) const
    {
        if(posicao< 0 || posicao>this->fim+1)
            throw QString("#ERRO_CLASS_ARRAYLIST_SUBSTITUIR_POSICAO_INVALIDA");                         //Valide a posicao
        this->array[posicao] = elemento;                                                                //Substitua o elemento na posicao
    }
}


#endif // ARRAYLIST_H
