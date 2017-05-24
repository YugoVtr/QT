#include "Matriz.h"

namespace Ferias
{
    Matriz::Matriz(int quantidadeDeLinhas, int quantidadeDeColunas):
        quantidadeDeColunas(0),
        quantidadeDeLinhas(0),
        ponteiro_Matriz(0)
    {
        if(quantidadeDeLinhas<=0) throw QString("Quantidade de Linhas deve ser > 0");
        if(quantidadeDeColunas<=0) throw QString("Quantidade de Colunas deve ser > 0 ");
        try {ponteiro_Matriz = new int[quantidadeDeLinhas*quantidadeDeColunas];}
        catch(std::bad_alloc&){throw QString("Sem memoria para criar matriz");}
        this->quantidadeDeLinhas = quantidadeDeLinhas;
        this->quantidadeDeColunas = quantidadeDeColunas;
    }
    void Matriz::setElemento(int elemento, int linha, int coluna)const
    {
        if(linha<0 || linha >= quantidadeDeLinhas) throw QString("Linha fora do intervalo valido");
        if(coluna<0 || coluna >= quantidadeDeColunas) throw QString("Coluna fora do intervalo valido");
        int posicao = (linha*quantidadeDeColunas) + coluna;  //Achar a posição para setar o item com...
        *(ponteiro_Matriz+posicao) = elemento;   //...Aritmetica de ponteiro
        // Posso acessar a posição da matriz assim ? -> ponteiro_Matriz[posicao] = elemento;
    }
    int Matriz::getElemento(int linha, int coluna)const
    {
        if(linha<0 || linha >= quantidadeDeLinhas) throw QString("Linha fora do intervalo valido");
        if(coluna<0 || coluna >= quantidadeDeColunas) throw QString("Coluna fora do intervalo valido");
        int posicao = (linha*quantidadeDeColunas) + coluna;     //Ever aritmetica de ponteiros
        return *(ponteiro_Matriz + posicao);        //retorna o valor apontado na posição
    }
    QString Matriz::getMatriz()const
    {
        QString saida = "";     // vai concatenando os valores na SAIDA...
        for(int linha = 0; linha < this->getQuantidadeDeLinhas(); linha++)
        {
            for(int coluna = 0; coluna < this->getQuantidadeDeColunas(); coluna++)
            {
                saida += QString::number(this->getElemento(linha,coluna));
                saida += "      ";
            }
            saida += "\n";
        }
        return saida; //...depois retorna
    }
    Matriz* Matriz::operator + (Matriz const * const matriz)const
    {
        if( quantidadeDeLinhas!=matriz->getQuantidadeDeLinhas() || quantidadeDeColunas!=matriz->getQuantidadeDeColunas())
            throw QString("Nao pode ser adicionadas matriz de tamanhos diferentes");

        try
        {
            Matriz *soma = new Matriz(quantidadeDeLinhas,quantidadeDeColunas); // cria a matriz resultante
            for(int linha = 0 ; linha < quantidadeDeLinhas ; linha++)
            {
                for(int coluna = 0; coluna < quantidadeDeColunas ; coluna++)
                {
                    int valor = this->getElemento(linha,coluna) + matriz->getElemento(linha,coluna); //Faz a soma
                    soma->setElemento(valor,linha,coluna); //Guarda a soma na matriz Soma
                }
            }
            return soma;
        }
        catch(std::bad_alloc&){throw QString("Sem memoria para criar a matriz");}
        catch(QString){throw QString("Matriz nao Criada, nao podemos adicionar as matrizes");}
    }
    Matriz* Matriz::operator - (Matriz const * const matriz)const
    {
        if( quantidadeDeLinhas!=matriz->getQuantidadeDeLinhas() || quantidadeDeColunas!=matriz->getQuantidadeDeColunas())
            throw QString("Nao pode ser subtraidas matriz de tamanhos diferentes");

        try
        {
            Matriz *subtracao = new Matriz(quantidadeDeLinhas,quantidadeDeColunas); // cria a matriz resultante
            for(int linha = 0 ; linha < quantidadeDeLinhas ; linha++)
            {
                for(int coluna = 0; coluna < quantidadeDeColunas ; coluna++)
                {
                    int valor = this->getElemento(linha,coluna) - matriz->getElemento(linha,coluna); //Faz a soma
                    subtracao->setElemento(valor,linha,coluna); //Guarda a soma na matriz Soma
                }
            }
            return subtracao;
        }
        catch(std::bad_alloc&){throw QString("Sem memoria para criar a matriz");}
        catch(QString){throw QString("Matriz nao Criada, nao podemos subtrair as matrizes");}
    }
    Matriz* Matriz::operator * (Matriz const * const matriz)const
    {
        if(this->quantidadeDeColunas != matriz->quantidadeDeLinhas) //Se as matrizes não podem ser multiplicadas
            throw QString ("Matrizes não podem ser multiplicadas"); //Eu lanço um excessão
        try
        {
            //criar a matriz multiplicação com a quantidade de linhas da 1° e a quantidade de colunas da 2°
            Matriz *multiplicacao = new Matriz(this->quantidadeDeLinhas,matriz->quantidadeDeColunas);

            //Esse laço varia a linha da matriz 1 que vai multiplicar as colunas da matriz 2;
            for(int linha=0 ; linha < this->quantidadeDeLinhas ; linha++)
            {
                //Esse laço varia a coluna da matriz 2 que vai ser multiplicada a seguir
                for(int coluna=0 ; coluna < matriz->quantidadeDeColunas ; coluna++)
                {
                    int valorElemento = 0;
                    //Esse laço faz a multiplicação da linha da matriz 1 pela coluna da matriz 2...
                    for(int variador=0 ; variador <this->quantidadeDeColunas ; variador++)
                    {
                        //...corrento a coluna da matriz 1 e a linha da matriz 2, que são (e tem que ser) iguais.
                        valorElemento = valorElemento + (this->getElemento(linha,variador)*matriz->getElemento(variador,coluna));
                    }
                    multiplicacao->setElemento(valorElemento,linha,coluna);
                }
            }
        return multiplicacao;
        }
        catch(std::bad_alloc&){throw QString("Sem memoria para criar a matriz");}
        catch(QString &erro){throw QString (erro);}
    }
    bool Matriz::eTriangularSuperior()const
    {
        if(this->quantidadeDeColunas != this->quantidadeDeLinhas) return false;
        try
        {
            bool resposta = true; //Defini que ela e por padrão (default)
            int contarElementos = 0; //Conta quantos elementos são diferentes de 0;
            //Esse laço corre a diagonal pricipal, começando do segundo elemento
            for(int diagonalPrincipal=1 ; diagonalPrincipal < quantidadeDeLinhas ; diagonalPrincipal++)
            {
                //Esse laço corre a linha antes da diagonal pricipal
                for(int correrLinha = diagonalPrincipal-1; correrLinha>=0 ; correrLinha--)
                {
                    //A condicional verifica se so tem  0 nessa budega....que dizer, linha.
                    if(this->getElemento(diagonalPrincipal,correrLinha)!=0) contarElementos++;
                }
            }
            if(contarElementos!=0)resposta=false; //Se não for tudo zero então não e triangular superior
            return resposta;
        }
        catch(QString &erro){throw QString (erro);}
    }
    bool Matriz::eTriangularInferior()const
    {
        if(this->quantidadeDeColunas != this->quantidadeDeLinhas) return false;
        try
        {
            bool resposta = true; //Defini que ela e por padrão (default)
            int contarElementos = 0; //Conta quantos elementos são diferentes de 0;
            //Esse laço corre a diagonal pricipal, começando do primeiro elemento
            for(int diagonalPrincipal=0 ; diagonalPrincipal < quantidadeDeLinhas-1 ; diagonalPrincipal++)
            {
                //Esse laço corre a linha depois da diagonal pricipal
                for(int correrLinha = diagonalPrincipal+1; correrLinha < quantidadeDeColunas ; correrLinha++)
                {
                    //A condicional verifica se so tem  0 nessa budega....que dizer, linha.
                    if(this->getElemento(diagonalPrincipal,correrLinha)!=0) contarElementos++;
                }
            }
            if(contarElementos!=0)resposta=false; //Se não for tudo zero então não e triangular inferior
            return resposta;
        }
        catch(QString &erro){throw QString (erro);}
    }
    bool Matriz::eSimetrica()const
    {
        try
        {
           bool resposta = false; // defino que não e simetrica
           if(this->quantidadeDeLinhas!=this->quantidadeDeColunas) return resposta;//apenas matrizes quadradas são simetricas
           Matriz *transposta = this->gerarTransposta(); //Crio a transposta
           if(this->operator ==(transposta))resposta=true; //E verifico se são iguais
           delete transposta; //Apago a transposta
           return resposta;
        }
        catch(std::bad_alloc&){throw QString("Sem memoria para criar a matriz");}
        catch(QString &erro){throw QString (erro);}
    }
    bool Matriz::eIdentidade()const
    {
        try
        {
            //verifico se e uma matriz quadrada e se os valores fora da diagonal principal e 0;
            if(this->quantidadeDeLinhas!=this->quantidadeDeColunas) return false; // Se não for quadrada, ja sabemos ne...
            if(!(this->eTriangularInferior()&&this->eTriangularSuperior())) return false;

            bool resultado= true;
            //verifico se todos os valores da diagonal principal são 1;
            for(int diagonalPrincipal = 0; diagonalPrincipal<quantidadeDeLinhas; diagonalPrincipal++ )
            {
                if(this->getElemento(diagonalPrincipal,diagonalPrincipal)!=1)
                {
                    resultado = false; //Não e matriz identidade
                }
            }
            return resultado; // Chegou ate aqui então ela e uma matriz identidade

        }  catch(QString &erro){throw QString (erro);}
    }
    Matriz* Matriz::gerarTransposta()const
    {
        try
        {
            //crio uma matriz com dimensoes opostas a matriz original.
            Matriz* transposta = new Matriz(this->quantidadeDeColunas,this->quantidadeDeLinhas);
            //Os laços correm a matriz original
            for(int linha=0; linha < this->quantidadeDeLinhas ; linha++)
            {
                for(int coluna=0 ; coluna < this->quantidadeDeColunas; coluna++)
                {
                    //E inserem os elementos transpostos para a outra matriz
                    transposta->setElemento(this->getElemento(linha,coluna),coluna,linha) ;
                }
            }
            return transposta;
        }
        catch(std::bad_alloc&){throw QString("Sem memoria para criar a matriz");}
        catch(QString &erro){throw QString (erro);}
    }
    Matriz* Matriz::calcularPotencia(int expoente)const
    {
        if(expoente < 0 ) throw QString ("E melhor não fazer divisão de matriz ainda");
        if(quantidadeDeLinhas!=quantidadeDeColunas) throw QString ("Potenciação so de matriz quadrada");
        try
        {
            if(expoente==0) //Se o expoente for 0, crio um matriz identidade para retornar
            {
                Matriz *potencia = new Matriz(quantidadeDeLinhas,quantidadeDeColunas);
                for(int linha=0 ; linha<quantidadeDeLinhas ; linha++)
                {
                    for(int coluna=0 ; coluna<quantidadeDeColunas ; coluna++)
                    {
                        int elemento=0;
                        if(linha==coluna) elemento=1; //Se for na diagonal pricipal, inserir 1;
                        potencia->setElemento(elemento,linha,coluna);
                    }
                }
                return potencia;
            }

            Matriz *potencia;//Crio a matriz pra armazenar cada multlicação da matriz
            potencia=this->multiplicarPorK(1);//inicio a matriz com ela mesma

            if(expoente==1) return potencia; //Se o expoente for um retorno a  primeira posição
            Matriz *potencia_Auxiliar = 0;  //Matriz para poder deletar as multiplicações anteriores

            for(int contador=1; contador<expoente ; contador++)
            {
                potencia_Auxiliar = potencia;
                potencia = *(this) * potencia_Auxiliar; //Armazeno a nova matriz
                delete potencia_Auxiliar; //E deleto a anterior
            }
            return potencia;
        }
        catch(std::bad_alloc&){throw QString("Sem memoria para criar a matriz");}
        catch(QString &erro){throw QString (erro);}

    }
    Matriz* Matriz::multiplicarPorK(int constante)const
    {
        try
        {
          Matriz *resultado = new Matriz(this->quantidadeDeLinhas,this->quantidadeDeColunas);
          for(int linha=0 ; linha<quantidadeDeLinhas ; linha++)
          {
              for(int coluna=0 ; coluna<quantidadeDeColunas ; coluna++)
              {
                  int valor = constante*this->getElemento(linha,coluna); //Multriplico a posição pela constante
                  resultado->setElemento(valor,linha,coluna); // e coloco na saida
              }
          }
          return resultado;
        }
        catch(std::bad_alloc&){throw QString("Sem memoria para criar a matriz");}
        catch(QString &erro){throw QString (erro);}
    }
    bool Matriz::operator ==(Matriz const * const matriz)const
    {
        try
        {
            //Se as matrizes tiverem tamanho diferentes nem precisa fazer o calculo...hehe
            if(quantidadeDeLinhas != matriz->quantidadeDeLinhas || quantidadeDeColunas != matriz->quantidadeDeColunas)
                return false;

            for(int linha=0; linha < this->quantidadeDeLinhas ; linha++)
            {
                for(int coluna=0 ; coluna < this->quantidadeDeColunas; coluna++)
                {
                    //Se o elemento for diferente do elemento da outra matriz, com ambos na mesma posição
                    //Então a resposta e Nao são iguais
                    if(this->getElemento(linha,coluna)!=matriz->getElemento(linha,coluna))return false;
                }
            }
            return true; //Se o programa chegou ate aqui, então so pode ser igual....
        }
        catch(QString &erro){throw QString (erro);}
    }
    bool Matriz::eOrtogonal()const
    {
        try
        {
           Matriz *transposta = this->gerarTransposta();//Crio a transposta
           Matriz *resultado = this->operator *(transposta);//E multiplico M*M^T
           bool saida = false;
           if(resultado->eIdentidade())saida = true; //Se a resultante for uma matriz identidade...ela e ortogonal
           delete transposta;
           delete resultado;
           return saida;
        }
        catch(QString &erro){throw QString (erro);}
    }
    bool Matriz::eDePermutacao()const
    {
        try
        {
            //Se a matriz não for quadrada ja temos uma resposta..apenas matrizes quadradas são de permutação, eu acho..hehe
            if(this->quantidadeDeColunas != this->quantidadeDeLinhas) return false;

            for(int linha=0; linha < this->quantidadeDeLinhas ; linha++) //Corre as linhas da matriz
            {
                //corre as colunas da matriz
                for(int coluna=0 ; coluna < this->quantidadeDeColunas ; coluna++)
                {
                    //Se achar algo que não seja 0 ou 1, então ja não e de permutação
                    if(this->getElemento(linha,coluna)!=0&&this->getElemento(linha,coluna)!=1) return false;

                    //Se achar um valor 1...
                    if(this->getElemento(linha,coluna)==1)
                    {
                        //...corre a linha pra ver se não tem outro valor 1,
                        for(int contador=coluna+1;contador<this->quantidadeDeColunas;contador++)
                            {if(this->getElemento(linha,contador)==1) return false;} //Se tiver, retorna false
                        //...corre a coluna pra ver se não tem outro valor 1 na coluna tbm...
                        for(int contador=linha+1;contador<this->quantidadeDeLinhas;contador++)
                            {if(this->getElemento(contador,coluna)==1) return false;} //Se tiver, tbm não foi dessa vez
                    }
                }
            }
            return true; //Então, se chegamos ate aqui, ..."WE ARE THE CHAMPIONS...MY FRIEND...HEHE...
        }
        catch(QString &erro){throw QString (erro);}
    }
}
