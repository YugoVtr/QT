#include "OrdenarPorPontuacao_Idade.h"
namespace TP2
{
    OrdenarPorPontuacao_Idade::OrdenarPorPontuacao_Idade(arrayList<Piloto> *dados):
        TemplateMethodOrdenacao_2(dados)
    {
    }

    int OrdenarPorPontuacao_Idade::compare(Piloto a, Piloto b)const
    {
        if(a.getQuantidadeDePontos() > b.getQuantidadeDePontos()) return -1;
        if(a.getQuantidadeDePontos() < b.getQuantidadeDePontos()) return 1;
        return 0;
    }

    int OrdenarPorPontuacao_Idade::compare_2(Piloto a, Piloto b) const
    {
        if(a.getIdade() > b.getIdade()) return -1;
        if(a.getIdade() < b.getIdade()) return 1;
        return 0;
    }
}
