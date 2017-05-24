#include "OrdenarPorPais.h"
namespace TP2
{
    OrdenarPorPais::OrdenarPorPais(arrayList<Piloto> *dados, int inicio, int fim):
        TemplateMethodOrdenacao(dados,inicio,fim)
    {
        ordenar_BubbleSort();
    }

    int OrdenarPorPais::compare(Piloto a, Piloto b)const
    {
        if(a.getPais() < b.getPais()) return -1;
        if(a.getPais() > b.getPais()) return 1;
        return 0;
    }
}
