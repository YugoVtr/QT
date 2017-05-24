#include "OrdenarPorEquipe_Nome.h"
namespace TP2
{
    OrdenarPorEquipe_Nome::OrdenarPorEquipe_Nome(arrayList<Piloto> *dados):
        TemplateMethodOrdenacao_2(dados)
    {
    }

    int OrdenarPorEquipe_Nome::compare(Piloto a, Piloto b)const
    {
        if(a.getEquipe() < b.getEquipe()) return -1;
        if(a.getEquipe() > b.getEquipe()) return 1;
        return 0;
    }
    int OrdenarPorEquipe_Nome::compare_2(Piloto a, Piloto b)const
    {
        if(a.getNome() < b.getNome()) return -1;
        if(a.getNome() > b.getNome()) return 1;
        return 0;
    }
}
