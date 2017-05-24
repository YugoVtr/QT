#include "Persistencia.h"

namespace ED1
{
    ArvoreBinaria<Item>* Persistencia::carregarDados()
    {
        if(this->nome_Do_Arquivo_No_Disco.isEmpty()) throw QString("Arquivo não pode ser aberto");
        try
        {
            QFile arquivo(this->nome_Do_Arquivo_No_Disco);
            if(!arquivo.open(QIODevice::ReadOnly | QIODevice::Text)) throw QString("Arquivo não pode ser aberto");
            QTextStream texto(&arquivo);

            ArvoreBinaria<Item> *arvore = new ArvoreBinaria<Item>();
            QString linha("");
            linha = texto.readLine();

            while(!texto.atEnd())
            {
                QStringList palavras = linha.split(' ',QString::SkipEmptyParts);
                while(!palavras.empty())
                {
                    Item novo(palavras.front());
                    palavras.pop_front();

                    if(arvore->buscar(novo))
                    {
                        novo = arvore->obterElementoCompleto(novo);
                        arvore->remover(novo);
                        novo.addRepeticao();
                    }
                    arvore->inserir(novo);

                }
                linha = texto.readLine();
            }
            arquivo.close();
            return arvore;
        } catch (QString &erro) { throw erro ;  }
    }
}
