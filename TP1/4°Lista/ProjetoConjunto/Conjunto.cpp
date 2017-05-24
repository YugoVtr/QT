#include "Conjunto.h"

namespace QuartaLista
{
    Conjunto::Conjunto(int tamanho):
        tamanho(0),
        indiceDeUso(0),
        array(0)
    {
        if(tamanho <= 0) throw QString("Tamanho do Conjunto nao pode ser <= 0 ");
        try
        {
          array = new int[tamanho];
          this->tamanho = tamanho;
        } catch (std::bad_alloc&)
        {
            throw QString("Sua maquina esta sem memoria");
        }
    }

    int Conjunto::getElemento(int posicao)const
    {
        if(posicao < 0 || posicao >= indiceDeUso)
            throw QString("Posicao fora do intervalo valido");
        return array[posicao];
    }

    void Conjunto::setElemento(int elemento)
    {
        if(indiceDeUso==tamanho) throw QString("Conjunto Cheio");
        if(buscar(elemento)) throw QString("Elemento ja Existe");
        array[indiceDeUso]=elemento;
        indiceDeUso++;
    }

    bool Conjunto::buscar(int elemento)const
    {
        for(int pos = 0; pos < indiceDeUso; pos++){if(array[pos]==elemento) return true;}
        return false;
    }

    QString Conjunto::getConjunto()const
    {
        QString saida = "{ ";
        for(int pos=0; pos<indiceDeUso; pos++)
        {
            saida += QString::number(array[pos]);
            if(pos<indiceDeUso-1) saida += ", ";
        }
        saida += " }";
        if(saida=="{  }") saida = " ᴓ "; //So pra falar que o conjunto e vazio de forma grafica.
        return saida;
    }

    Conjunto* Conjunto::uniao(Conjunto const * const objeto)const
    {
        try
        {
            int tamanho = this->indiceDeUso + objeto->indiceDeUso; //Cria o conjunto com o tamanhos somados
            Conjunto *uniao = new Conjunto(tamanho);
            for(int pos = 0; pos < this->indiceDeUso; pos++)        //Copia o primeiro conjunto pro uniao
            {
                uniao->array[pos] = this->array[pos];
            }
            uniao->indiceDeUso = this->indiceDeUso;                 //Copia o segundo conjunto pro uniao...
            for(int pos = 0; pos < objeto->indiceDeUso; pos++)
            {
                try
                {
                    uniao->setElemento(objeto->array[pos]);         //...usando um metodo que ja fala se tem repetido.
                } catch (...) // Captura a excessao mas ignora.
                {

                }
            }
            return uniao;
        } catch(std::bad_alloc&)
        {
            throw QString("Sua maquina esta sem Memoria");
        }
    }

    Conjunto* Conjunto::intersecao(Conjunto const * const objeto)const
    {
        try
        {   //Cria o intersecao com o menor indice de uso...
            int tamanho = this->indiceDeUso;
            if(tamanho> objeto->indiceDeUso) tamanho = objeto->indiceDeUso;
            Conjunto *intersecao = new Conjunto(tamanho);
            for(int pos = 0; pos < this->indiceDeUso; pos++)//e vai copiando as posições que existirem nos dois conjuntos.
            {
                if(objeto->buscar(this->array[pos]))
                {
                    intersecao->array[intersecao->indiceDeUso] = this->array[pos];
                    intersecao->indiceDeUso++;
                }
            }
            return intersecao;
        } catch(std::bad_alloc&)
        {
            throw QString("Sua maquina esta sem Memoria");
        }catch(QString &erro)
        {
            throw erro;
        }
    }

    Conjunto* Conjunto::diferenca(Conjunto const * const objeto)const
    {
        try
        {
            int tamanho = this->indiceDeUso;
            Conjunto *diferenca = new Conjunto(tamanho);
            for(int pos = 0; pos < this->indiceDeUso; pos++)
            {
                if(!objeto->buscar(this->array[pos]))
                {
                    diferenca->array[diferenca->indiceDeUso] = this->array[pos];
                    diferenca->indiceDeUso++;
                }
            }
            return diferenca;
        } catch(std::bad_alloc&)
        {
            throw QString("Sua maquina sem Memoria");
        }catch(QString &erro)
        {
            throw erro;
        }
    }
    bool Conjunto::eVazio()const
    {
        if(!this->indiceDeUso) return true;
        return false;
    }
    bool Conjunto::eSubConjuntoDe(Conjunto const * const objeto)const
    {
        try
        {
            //Se a diferença de A e B e vazio e subConjunto
            Conjunto *diferenca = this->diferenca(objeto);
            bool saida=false;
            if (diferenca->eVazio()) saida=true;
            delete diferenca;
            return saida;
        } catch (QString &erro)
        {
            throw erro;
        }
    }
    bool Conjunto::eIdenticoHa(Conjunto const * const objeto)const
    {
        try
        {
            //Se a diferença de A e B (e vice-versa) e vazio, sá porra e igual
            Conjunto *diferenca_AB = this->diferenca(objeto);
            Conjunto *diferenca_BA = objeto->diferenca(this);
            bool saida = false;
            if(diferenca_AB->eConjuntoVazio() && diferenca_BA->eConjuntoVazio()) saida = true;
            delete diferenca_AB;
            delete diferenca_BA;
            return saida;
        }  catch (QString &erro)
        {
            throw erro;
        }
    }
    bool Conjunto::eDisjuntoHa(Conjunto const * const objeto)const
    {
        try
        {
           //Se a interseçao e vazia então e disjunto
           Conjunto *intersecao = this->intersecao(objeto);
           bool saida = false;
           if (intersecao->eConjuntoVazio()) saida = true;
           delete intersecao;
           return saida;
        }  catch (QString &erro)
        {
            throw erro;
        }
    }
    void Conjunto::ordenarCrescente()
    {
        for(int contador=0 ; contador<this->indiceDeUso-1 ; contador++)
        {
            for (int variador=contador+1 ; variador<this->indiceDeUso ; variador++)
            {
                if(this->array[contador]>this->array[variador])
                {
                    this->array[contador] = this->array[contador] + this->array[variador];
                    this->array[variador] = this->array[contador] - this->array[variador];
                    this->array[contador] = this->array[contador] - this->array[variador];
                }
            }
        }
    }
    int Conjunto::calcularAmplitude()const
    {
        int maior = this->array[0];
        int menor = this->array[0];
        for (int contador=0 ; contador<this->indiceDeUso ; contador++)      //Corro o vetor...
        {
            if(this->array[contador]>maior) maior = this->array[contador];  //...Procurando o maior elemento...
            if(this->array[contador]<menor) menor = this->array[contador];  //...e o menor.
        }
        return (maior-menor); //Depois subTraio o maior do menor, e voilá...
    }
    int Conjunto::calcularProdutoEscalar(Conjunto const * const objeto)const
    {
        //verifico se os conjuntos tem tamanhos iguas
        if(this->indiceDeUso!=objeto->indiceDeUso) throw QString (" Quantidade de elementos diferente ");
        int resultado = 0;
        for(int contador=0 ; contador<this->indiceDeUso ; contador++) //multiplico cada possição por sua correspondente..
        {
            resultado = resultado + (this->array[contador]*objeto->array[contador]);//e faço a soma de tudo...hehe
        }
        return resultado;
    }
    Conjunto* Conjunto::obterMaiorSubCadeiaCrescente()const
    {
        try
        {
            int  tamanho_SubCadeia=1;           // Tamanho da subCadeia
            int  Fim_SubCadeia=1;               // Posição do fim da subCadeia
            int  contador=1;                    // Contador do array do conjunto original
            int  inicio_Contador_SubCadeia=0;   // Posição inicial e que varia até a posição final na hora de preencher a subCadeia
            int inicio = 0;                     //Estabelece o inicio da subCadeia


            while(contador < this->indiceDeUso) //Laço que corre o conjunto todo
            {
                //Laço para identificar as subCadeias crescentes
                while(this->array[contador] > this->array[contador-1] && contador < this->indiceDeUso) contador++;

                int guardar_Tamanho = contador - inicio;    //Quarda o tamanho da subCadeia identificada
                if(guardar_Tamanho > tamanho_SubCadeia)     //Verifica qual e a maior subCadeia e guarda:
                {
                    inicio_Contador_SubCadeia = inicio;     //...O inicio dela
                    Fim_SubCadeia = contador;               //...O onde ela termina
                    tamanho_SubCadeia = guardar_Tamanho;    //...E o tamanho dela
                }
                inicio = contador;                          //Estabelece o inicio da subCadeia
                contador++;     //incrementa para começar a proxima subCadeia
            }

            //Cria o conjuto para a maior subCadeia Crescente...
            Conjunto *maiorSubCadeia_Crescente = new Conjunto(tamanho_SubCadeia);
            for(;inicio_Contador_SubCadeia<Fim_SubCadeia;inicio_Contador_SubCadeia++) //...E preenche ele
            {
                maiorSubCadeia_Crescente->array[maiorSubCadeia_Crescente->indiceDeUso] = this->array[inicio_Contador_SubCadeia];
                maiorSubCadeia_Crescente->indiceDeUso++;
            }
            return maiorSubCadeia_Crescente;

        } catch (QString &erro)
        {
            throw erro;
        } catch(std::bad_alloc&)
        {
            throw QString("Sua maquina esta sem Memoria");
        }
    }

    Conjunto* Conjunto::obterMaiorSubCadeiaDecrescente()const
    {
        try
        {
            int  tamanho_SubCadeia=1;           // Tamanho da subCadeia
            int  Fim_SubCadeia=1;               // Posição do fim da subCadeia
            int  contador=1;                    // Contador do array do conjunto original
            int  inicio_Contador_SubCadeia=0;   // Posição inicial e que varia até a posição final na hora de preencher a subCadeia
            int  inicio = 0;                    //Estabelece o inicio da subCadeia

            while(contador < this->indiceDeUso) //Laço que corre o conjunto todo
            {
                //Laço para identificar as subCadeias crescentes
                while(this->array[contador] < this->array[contador-1] && contador < this->indiceDeUso) contador++;

                int guardar_Tamanho = contador - inicio;    //Quarda o tamanho da subCadeia identificada
                if(guardar_Tamanho > tamanho_SubCadeia)     //Verifica qual e a maior subCadeia e guarda:
                {
                    inicio_Contador_SubCadeia = inicio;     //...O inicio dela
                    Fim_SubCadeia = contador;               //...O onde ela termina
                    tamanho_SubCadeia = guardar_Tamanho;    //...E o tamanho dela
                }
                inicio = contador;                          //Estabelece o inicio da subCadeia
                contador++;     //incrementa para começar a proxima subCadeia
            }

            //Cria o conjuto para a maior subCadeia Decrescente ...
            Conjunto *maiorSubCadeia_Decrescente = new Conjunto(tamanho_SubCadeia);
            for(;inicio_Contador_SubCadeia<Fim_SubCadeia;inicio_Contador_SubCadeia++) //...E preenche ele.
            {
                maiorSubCadeia_Decrescente->array[maiorSubCadeia_Decrescente->indiceDeUso] = this->array[inicio_Contador_SubCadeia];
                maiorSubCadeia_Decrescente->indiceDeUso++;
            }
            return maiorSubCadeia_Decrescente;
        } catch (QString &erro)
        {
            throw erro;
        } catch(std::bad_alloc&)
        {
            throw QString("Sua maquina esta sem Memoria");
        }
    }
    Conjunto* Conjunto::uniaoOrdenada(Conjunto const * const objeto)
    {
        Conjunto *uniao_Ordenada = this->uniao(objeto);
        uniao_Ordenada->ordenarCrescente();
        return uniao_Ordenada;
    }
    float Conjunto::calcularMediaAritmetica()const
    {
        //Essa e so somar tudo e dividir pelo numero de elementos do conjunto...heheDouble
        float somatorio = 0;
        for (int contador = 0; contador<this->indiceDeUso;contador++) somatorio = somatorio + this->array[contador];
        float resultado = somatorio / this->indiceDeUso;
        return resultado;
    }
}//Fim NameSpace
