#include "TemplateMethodOrdenacao.h"

namespace TP2
{
    TemplateMethodOrdenacao::TemplateMethodOrdenacao(arrayList<Piloto> *dados, int inicio, int fim):
        dados(dados),
        inicio(inicio),
        fim(fim)
    {
    }

    void TemplateMethodOrdenacao::troca(int posicao_1, int posicao_2) const
    {
        try
        {
            Piloto aux = (*dados)[posicao_1];
            dados->substituir_Posicao(posicao_1,(*dados)[posicao_2]);
            dados->substituir_Posicao(posicao_2,aux);
        }catch(QString &erro) {throw erro;}
    }

    void TemplateMethodOrdenacao::ordenar_BubbleSort()const
    {   
        try
        {
            int fim = this->fim;
            for( ; fim>inicio+1 ;fim--)
            {
                for(int posicao = inicio+1; posicao < fim ; posicao++)
                {
                    if(compare((*dados)[posicao-1],(*dados)[posicao])>0)
                        troca(posicao-1,posicao);
                }
            }
        }catch(QString &erro) {throw erro;}
    }

    arrayList<Piloto>* TemplateMethodOrdenacao::obterDadosOrdenado() const
    {
        return dados;
    }
}
