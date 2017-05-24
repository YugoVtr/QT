#include "TemplateMethodOrdenacao_2.h"

namespace TP2
{
    TemplateMethodOrdenacao_2::TemplateMethodOrdenacao_2(arrayList<Piloto> *dados):
         TemplateMethodOrdenacao(dados)
    {

    }

    void TemplateMethodOrdenacao_2::ordenar_BubbleSort() const
    {
        try
        {
            for(int fim = dados->size() ; fim>1 ;fim--)
            {
                for(int posicao = 1; posicao < fim  ; posicao++)
                {
                    if(compare((*dados)[posicao-1],(*dados)[posicao])>0)
                        troca(posicao-1,posicao);
                    if(compare((*dados)[posicao-1],(*dados)[posicao])==0)
                        if(compare_2((*dados)[posicao-1],(*dados)[posicao])>0)
                            troca(posicao-1,posicao);
                }
            }
        }catch(QString &erro) {throw erro;}
    }
}

