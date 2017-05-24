#include "OrdenarPorPontuacao.h"
namespace TP2
{
    OrdenarPorPontuacao::OrdenarPorPontuacao(arrayList<Piloto> *dados, int inicio, int fim):
        TemplateMethodOrdenacao(dados,inicio,fim)
    {
        ordenar_BubbleSort();
    }

    int OrdenarPorPontuacao::compare(Piloto a, Piloto b)const
    {
        if(a.getQuantidadeDePontos() > b.getQuantidadeDePontos()) return -1;
        if(a.getQuantidadeDePontos() < b.getQuantidadeDePontos()) return 1;
        return 0;
    }
}
