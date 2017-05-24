#include "Persistencia.h"

namespace TP2
{
    arrayList<Piloto>* Persistencia::carregarDados() const
    {
        if(this->nome_Do_Arquivo_No_Disco.isEmpty())
            throw QString("#ERRO_CLASS_PERSISTENCIA_NOME_ARQUIVO");                                     //Verifique se o nome e vazio
        try
        {
            std::ifstream arquivo;                                                                      //Crie um arquivo
            arquivo.open(this->nome_Do_Arquivo_No_Disco.toStdString().c_str());                         //Abra o arquivo
            if(!arquivo.is_open()) throw QString("#ERRO_CLASS_PERSISTENCIA_ABRIR_ARQUIVO");             //Verifique se o arquivo abriu

            arrayList<Piloto> *dados_Em_Pilha = new arrayList<Piloto>();                                //Crie a lista para retornar
            std::string linha("");                                                                      //Quardar a linha do arquivo

            while(!arquivo.eof())                                                                       //Enquanto não ler o arquivo todo
            { 
                getline(arquivo,linha);                                                                 //Leia a linha
                TP2::Piloto piloto;                                                                     //Crie um objeto
                piloto.carregarDados(QString::fromStdString(linha));                                    //Carregue a linha no objeto
                dados_Em_Pilha->incluir_Final(piloto);                                                  //Copie o objeto para a lista
            }
            arquivo.close();                                                                            //Fecha o arquivo
            return dados_Em_Pilha;                                                                      //Retorna a lista com os dados
        } catch (QString &erro) { throw QString(erro) ;  }
          catch(std::bad_alloc&){throw QString("Estrutura de dados vector nao criada");}
    }
}

