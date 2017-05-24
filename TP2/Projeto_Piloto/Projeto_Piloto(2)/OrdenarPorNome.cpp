#include "OrdenarPorNome.h"
namespace TP2
{
    OrdenarPorNome::OrdenarPorNome(arrayList<Piloto> *dados, int inicio, int fim):
        TemplateMethodOrdenacao(dados,inicio,fim)
    {
        ordenar_BubbleSort();
    }

    int OrdenarPorNome::compare(Piloto a, Piloto b)const
    {
        if(a.getNome() < b.getNome()) return -1;
        if(a.getNome() > b.getNome()) return 1;
        return 0;
    }
}
