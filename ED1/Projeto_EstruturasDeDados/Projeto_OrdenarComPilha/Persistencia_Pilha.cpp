#include "Persistencia_Pilha.h"

namespace ED1
{
    Pilha<QString> *Persistencia_Pilha::ordenar(Pilha<QString> *pilhaCheia) const
    {
        Pilha<QString> *pilha_Ordenada = new Pilha<QString>(new ED1::Lista_LDE_Circular<QString>);
        pilha_Ordenada->inserir(pilhaCheia->remover());
        while(!pilhaCheia->eVazia())
        {
            QString inserir = pilhaCheia->remover();
            if(inserir<pilha_Ordenada->acessar()) pilha_Ordenada->inserir(inserir);
            else
            {
                Pilha<QString> *pilha_Auxiliar = new Pilha<QString>(new ED1::Lista_LDE_Circular<QString>);
                for(bool marcador=true; marcador ; )
                {
                    pilha_Auxiliar->inserir(pilha_Ordenada->remover());
                    if(pilha_Ordenada->eVazia())
                        {pilha_Ordenada->inserir(inserir);marcador=false;}
                    else if(inserir<pilha_Ordenada->acessar()){pilha_Ordenada->inserir(inserir);marcador=false;}
                }
                while(!pilha_Auxiliar->eVazia()) pilha_Ordenada->inserir(pilha_Auxiliar->remover());
                delete pilha_Auxiliar;
            }
        }
        return pilha_Ordenada;
    }

    Pilha<QString>* Persistencia_Pilha::carregarDados() const
    {
        if(this->nome_Do_Arquivo_No_Disco.isEmpty()) throw QString("Arquivo não pode ser aberto");
        try
        {
            std::ifstream arquivo;                                                                          //Crio o arquivo
            arquivo.open(this->nome_Do_Arquivo_No_Disco.toStdString().c_str());                             //Vinculo ele ao  arquivo no disco
            if(!arquivo.is_open()) throw QString("Arquivo não pode ser aberto");                            //Verifico se ele abriu normalmente

            Pilha<QString> *dados_Em_Pilha = new Pilha<QString>(new ED1::Lista_LDE_Circular<QString>);      //Lista para quardar as linhas
            std::string linha("");                                                                          //armazenar cada linhs
            getline(arquivo,linha);
            dados_Em_Pilha->inserir(QString::fromStdString(linha));

            while(!arquivo.eof())                                                                           // enquanto não chegar no fim arquivo
            {
                getline(arquivo,linha);                                                                     //Leio a linha do arquivo
                QString inserir = QString::fromStdString(linha);
                dados_Em_Pilha->inserir(inserir);
            }
            arquivo.close();                                                                                //Fecho o arquivo
            Pilha<QString>*ordenada = this->ordenar(dados_Em_Pilha);
            delete dados_Em_Pilha;
            return ordenada;                                                                                //E mando a lista
        } catch (QString &erro) { throw erro ;  }
    }
}

