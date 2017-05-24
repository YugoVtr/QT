#include "TemplateMethodOrdenacao_3.h"

namespace TP2
{
    TemplateMethodOrdenacao_3::TemplateMethodOrdenacao_3(arrayList<Piloto> *dados):
         TemplateMethodOrdenacao_2(dados)
    {

    }

    void TemplateMethodOrdenacao_3::ordenar_BubbleSort() const
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
                    {
                        if(compare_2((*dados)[posicao-1],(*dados)[posicao])>0)
                            troca(posicao-1,posicao);
                        if(compare_2((*dados)[posicao-1],(*dados)[posicao])==0)
                            if(compare_3((*dados)[posicao-1],(*dados)[posicao])>1)
                                troca(posicao-1,posicao);
                    }
                }
            }
        }catch(QString &erro) {throw erro;}
    }
}

