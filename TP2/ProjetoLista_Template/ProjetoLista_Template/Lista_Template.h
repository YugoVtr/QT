#ifndef LISTA_TEMPLATE_H
#define LISTA_TEMPLATE_H
#include<QString>

namespace TP2
{
    template<class Tipo>
    class Lista_Template
    {
        private:
            int tamanho;
            int fim;
            Tipo *array;

        public:
            Lista_Template();
            Lista_Template(int tamanho);
            inline ~Lista_Template(){delete[] array; }
            inline void incluirElemento_Final(Tipo elemento){this->incluirElemento_Posicao(this->fim+1,elemento);}
            void incluirElemento_Posicao(int posicao, Tipo elemento);
            inline void incluirElemento_Inicio(Tipo elemento){this->incluirElemento_Posicao(0,elemento);}
            inline void removerElementos(){this->fim=-1;}
            int buscarElemento(Tipo elemento_Busca)const; //Retorna a posição do elemento           
            Tipo operator [](int posicao)const; //Tipo obterElemento_Posicao(int posicao)const;
            inline bool eVazia()const { return (fim==-1);}
            void removerElemento_Posicao(int posicao);
            void removerElemento_Especifico(Tipo elemento);
            void substituirElemento_Posicao(int posicao,Tipo elemento)const;
            inline int verificar_Quantidade_Elementos()const {return fim+1;}

            QString getFila()const;
    };

    template<class Tipo>
    Lista_Template<Tipo>::Lista_Template():
        tamanho(10),
        fim(-1),
        array(0)
    {
        try
        {
            array = new Tipo[this->tamanho];
        } catch (std::bad_alloc) { throw QString("Sem memoria");   }
    }

    template<class Tipo>
    Lista_Template<Tipo>::Lista_Template(int tamanho):
        tamanho(10),
        fim(-1),
        array(0)
    {
        if(tamanho==0) throw QString(" Tamanho não pode ser 0");
        try
        {
            array = new Tipo[tamanho];
            this->tamanho = tamanho;
        } catch (std::bad_alloc) { throw QString("Sem memoria");   }
    }

    template<class Tipo>
    void  Lista_Template<Tipo>::incluirElemento_Posicao(int posicao, Tipo elemento)
    {
        if(posicao< 0 || posicao>this->fim+1) throw QString(" Posicao fora do intervalo valido ");
        try
        {
            if(fim == tamanho-1) //se o vetor estiver cheio
            {
                Tipo *auxiliar = this->array; //crio um vetor auxliar para reseber o vetor antigo
                this->tamanho *= 1.5;
                if(this->tamanho==1) this->tamanho = 2;
                this->array = new Tipo[this->tamanho];
                for(int contador=0 ; contador<=fim ; contador++)
                {
                    this->array[contador]=auxiliar[contador];
                }
                delete auxiliar;
            }
            for(int contador = fim ; contador >= posicao ; contador--)
            {
                this->array[contador+1] = this->array[contador]; //Desloca o vetor uma posicao para frente
            }
            fim++;
            this->array[posicao]= elemento; //coloco o elemento na posicao pedida
        } catch (std::bad_alloc&) { throw QString("Sem espaço para incluir"); }
    }

    template<class Tipo>
    int Lista_Template<Tipo>::buscarElemento(Tipo elemento_Busca) const
    {
        int contador;
        for(contador = 0; contador <= this->fim; contador++)
        {
            if(this->array[contador] == elemento_Busca)
            {
                return contador;
            }
        }
        return -1;
    }

    template<class Tipo>
    Tipo Lista_Template<Tipo>:: operator[](int posicao) const
    {
        if(posicao > this->fim || posicao < 0 ) throw QString ("POSIÇÃO FORA DE SEU VETOR");
        return this->array[posicao];
    }

    template<class Tipo>
    void Lista_Template<Tipo>::removerElemento_Posicao(int posicao)
    {
        if(posicao > this->fim || posicao < 0 ) throw QString ("POSIÇÃO FORA DE SEU VETOR");
        for( int contador = posicao; contador < this->fim; contador++ )
        {
            this->array[contador] =  this->array[contador +1];
        }
        fim--;
    }

    template<class Tipo>
    void Lista_Template<Tipo>::removerElemento_Especifico(Tipo elemento)
    {
        try
        {
            while(this->buscarElemento(elemento)!=-1)
            {
                int posicao = this->buscarElemento(elemento);
                this->removerElemento_Posicao(posicao);
            }
        } catch (QString &erro) { throw QString(erro);  }
    }

    template<class Tipo>
    void Lista_Template<Tipo>::substituirElemento_Posicao(int posicao, Tipo elemento) const
    {
        if(posicao< 0 || posicao>this->fim+1) throw QString(" Posicao fora do intervalo valido ");
        this->array[posicao] = elemento;
    }

    template<class Tipo>
    QString Lista_Template<Tipo>::getFila()const
    {
        QString fila="  ";
        for(int contador=0;contador<this->tamanho;contador++)
        {
            QString concatenar = "E";
            if(contador<=fim) concatenar = QString::number(this->array[contador]); //AQUI
            fila+= concatenar + "  |  ";
        }
        return fila;
    }
}


#endif // LISTA_TEMPLATE_H
