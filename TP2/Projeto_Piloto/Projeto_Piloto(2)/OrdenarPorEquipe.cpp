#include "OrdenarPorEquipe.h"
namespace TP2
{
    OrdenarPorEquipe::OrdenarPorEquipe(arrayList<Piloto> *dados, int inicio, int fim):
        TemplateMethodOrdenacao(dados,inicio,fim)
    {
        ordenar_BubbleSort();
    }

    int OrdenarPorEquipe::compare(Piloto a, Piloto b)const
    {
        if(a.getEquipe() < b.getEquipe()) return -1;
        if(a.getEquipe() > b.getEquipe()) return 1;
        return 0;
    }
}
