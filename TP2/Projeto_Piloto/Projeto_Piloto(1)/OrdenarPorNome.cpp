#include "OrdenarPorNome.h"
namespace TP2
{
    OrdenarPorNome::OrdenarPorNome(arrayList<Piloto> *dados):
        TemplateMethodOrdenacao(dados)
    {
    }

    int OrdenarPorNome::compare(Piloto a, Piloto b)const
    {
        if(a.getNome() < b.getNome()) return -1;
        if(a.getNome() > b.getNome()) return 1;
        return 0;
    }
}
