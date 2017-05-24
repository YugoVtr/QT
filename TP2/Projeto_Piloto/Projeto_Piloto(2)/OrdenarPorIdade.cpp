#include "OrdenarPorIdade.h"
namespace TP2
{
    OrdenarPorIdade::OrdenarPorIdade(arrayList<Piloto> *dados, int inicio, int fim):
        TemplateMethodOrdenacao(dados,inicio,fim)
    {
        ordenar_BubbleSort();
    }

    int OrdenarPorIdade::compare(Piloto a, Piloto b)const
    {
        if(a.getIdade() < b.getIdade()) return 1;
        if(a.getIdade() > b.getIdade()) return -1;
        return 0;
    }
}
