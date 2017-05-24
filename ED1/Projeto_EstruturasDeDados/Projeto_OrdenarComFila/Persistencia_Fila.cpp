#include "Persistencia_Fila.h"

namespace ED1
{
    Fila<QString> *Persistencia_Fila::ordenar(Fila<QString> *filaCheia) const
    {
        Fila<QString> *A = new Fila<QString>(new ED1::Lista_LDE_Circular<QString>);
        QString minimo("");
        while(!filaCheia->eVazia())
        {
            minimo = filaCheia->remover();
            for(int contador=filaCheia->quantidadeElementos();contador>0;contador--)
            {
                if(filaCheia->acessar()<minimo)
                {
                    filaCheia->inserir(minimo);
                    minimo = filaCheia->remover();
                }
                else
                {
                    filaCheia->inserir(filaCheia->remover());
                }
            }
            A->inserir(minimo);
        }
        return A;
    }

    Fila<QString>* Persistencia_Fila::carregarDados() const
    {
        if(this->nome_Do_Arquivo_No_Disco.isEmpty()) throw QString("Arquivo não pode ser aberto");
        try
        {
            std::ifstream arquivo;                                                                          //Crio o arquivo
            arquivo.open(this->nome_Do_Arquivo_No_Disco.toStdString().c_str());                             //Vinculo ele ao  arquivo no disco
            if(!arquivo.is_open()) throw QString("Arquivo não pode ser aberto");                            //Verifico se ele abriu normalmente

            Fila<QString> *dados_Em_Fila = new Fila<QString>(new ED1::Lista_LDE_Circular<QString>);         //Lista para quardar as linhas
            std::string linha("");                                                                          //armazenar cada linhs
            getline(arquivo,linha);
            dados_Em_Fila->inserir(QString::fromStdString(linha));

            while(!arquivo.eof())                                                                           // enquanto não chegar no fim arquivo
            {
                getline(arquivo,linha);                                                                     //Leio a linha do arquivo
                QString inserir = QString::fromStdString(linha);
                dados_Em_Fila->inserir(inserir);
            }
            arquivo.close();                                                                                //Fecho o arquivo
            Fila<QString>*ordenada = this->ordenar(dados_Em_Fila);
            delete dados_Em_Fila;
            return ordenada;                                                                                //E mando a lista
        } catch (QString &erro) { throw erro ;  }
    }
}

