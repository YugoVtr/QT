#include "OrdenarPorPontuacao_Idade.h"
namespace TP2
{
    OrdenarPorPontuacao_Idade::OrdenarPorPontuacao_Idade(arrayList<Piloto> *dados):
        TemplateMethodOrdenacao(dados)
    {
    }

    bool OrdenarPorPontuacao_Idade::ePrimeiro(Piloto a, Piloto b)const
    {
        if(a.getQuantidadeDePontos()==b.getQuantidadeDePontos())
        {
            return(a.getIdade()>b.getIdade());
        }
        else return(a.getQuantidadeDePontos()<b.getQuantidadeDePontos());
    }
}
