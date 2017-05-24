#include "OrdenarPorPais_Nome.h"
namespace TP2
{
    OrdenarPorPais_Nome::OrdenarPorPais_Nome(arrayList<Piloto> *dados):
        TemplateMethodOrdenacao_2(dados)
    {
    }

    int OrdenarPorPais_Nome::compare(Piloto a, Piloto b)const
    {
        if(a.getPais() < b.getPais()) return -1;
        if(a.getPais() > b.getPais()) return 1;
        return 0;
    }

    int OrdenarPorPais_Nome::compare_2(Piloto a, Piloto b) const
    {
        if(a.getNome() < b.getNome()) return -1;
        if(a.getNome() > b.getNome()) return 1;
        return 0;
    }
}
