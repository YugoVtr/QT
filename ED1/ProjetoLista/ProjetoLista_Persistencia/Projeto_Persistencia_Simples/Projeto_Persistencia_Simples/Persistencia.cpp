#include "Persistencia.h"

namespace ED1
{
    Lista<QString>* Persistencia::carregarDados() const
    {
        if(this->nome_Do_Arquivo_No_Disco.isEmpty()) throw QString("Arquivo não pode ser aberto");
        try
        {
            std::ifstream arquivo; //Crio o arquivo
            arquivo.open(this->nome_Do_Arquivo_No_Disco.toStdString().c_str()); //Vinculo ele ao  arquivo no disco
            if(!arquivo.is_open()) throw QString("Arquivo não pode ser aberto"); //Verifico se ele abriu normalmente

            Lista<QString> *dados_Em_Lista = new Lista<QString>(); //Lista para quardar as linhas
            std::string linha(""); //armazenar cada linhs

            while(!arquivo.eof()) // enquanto não chegar no fim do arquivo
            {
                getline(arquivo,linha); //Leio a linha do arquivo
                dados_Em_Lista->incluirFinal(QString::fromStdString(linha));//E salvo na lista;
            }

            arquivo.close(); //Fecho o arquivo
            return dados_Em_Lista; //E mando a lista
        } catch (...) { throw QString("ERRO AO CARREGAR OS DADOS") ;  }
    }
}

