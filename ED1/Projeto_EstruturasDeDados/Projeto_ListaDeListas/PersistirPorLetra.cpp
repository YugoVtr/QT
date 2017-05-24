#include "PersistirPorLetra.h"

namespace ED1
{
    Lista_LDE_Circular<Folder>* PersistirPorLetra::carregar()
    {
        try
        {
            Lista_LDE_Circular<Folder> *dados_Em_Lista = new Lista_LDE_Circular<Folder>();

            for(int contador=1;contador<=lista->obterTamanho();contador++)
            {
                try {
                    if(lista->acessarPosicao(contador).isEmpty()) throw QString("sem nada");
                    QString linha = lista->acessarPosicao(contador);
                    QChar elemento = linha.toUpper()[0];
                    int resultado = busca(dados_Em_Lista,elemento);
                    if(resultado==-1)
                    {
                        Folder otherFile(linha.toUpper()[0]);
                        otherFile.inserir(linha);

                        int posicao=0;
                        for(posicao=dados_Em_Lista->obterTamanho();posicao>=0;posicao--)
                        {
                            if(posicao==0||otherFile.getLetra()<dados_Em_Lista->acessarPosicao(posicao).getLetra())
                            {
                                dados_Em_Lista->incluirNaPosicao(otherFile,posicao+1);
                                posicao = -1;
                            }
                        }
                    }
                    else
                    {
                        dados_Em_Lista->acessarPosicao(resultado).inserir(linha);
                    }
                } catch (QString) {   }
            }
            return dados_Em_Lista;
        } catch (QString) { throw QString("carregar um folder no carregar");  }
    }
    int PersistirPorLetra::busca(Lista_LDE_Circular<Folder>*lista,QChar elemento)
    {
        try
        {
            for(int correr=1;correr <= lista->obterTamanho();correr++)
                if(lista->acessarPosicao(correr).getLetra()==elemento)
                    return correr;
            return -1;
        } catch (QString) { throw QString("Busca");  }
    }
}
