#include "Persistencia_Lista.h"

namespace ED1
{

    Lista_LDE_Circular<QString>* Persistencia_Lista::carregarDados()
    {
        if(this->nome_Do_Arquivo_No_Disco.isEmpty()) throw QString("Arquivo não pode ser aberto");
        try
        {
            QFile arquivo(this->nome_Do_Arquivo_No_Disco);

            if (!arquivo.open(QIODevice::ReadOnly | QIODevice::Text))
                throw QString("Arquivo não pode ser aberto");                                               //Verifico se ele abriu normalmente

            Lista_LDE_Circular<QString> *dados_Em_Lista = new Lista_LDE_Circular<QString>();                //Lista para quardar as linhas
            QString linha("");                                                                              //armazenar cada linhs
            QTextStream in(&arquivo);
            linha = arquivo.readLine();
            while(!in.atEnd())                                                                         // enquanto não chegar no fim in
            {
                int posicao = 0;
                for(posicao=dados_Em_Lista->obterTamanho();posicao>=0;posicao--)
                {
                    if(posicao==0||linha>dados_Em_Lista->acessarPosicao(posicao))
                    {
                        dados_Em_Lista->incluirNaPosicao(linha,posicao+1);
                        posicao = -1;
                    }
                }
                linha = in.readLine();                                                                 //Leio a linha do in
            }
            arquivo.close();                                                                                //Fecho o arquivo
            return dados_Em_Lista;                                                                          //E mando a lista
        } catch (QString &erro) { throw erro ;  }
    }
}

