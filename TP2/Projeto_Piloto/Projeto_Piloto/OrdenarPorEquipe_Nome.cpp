#include "OrdenarPorEquipe_Nome.h"
namespace TP2
{
    OrdenarPorEquipe_Nome::OrdenarPorEquipe_Nome(arrayList<Piloto> *dados):
        TemplateMethodOrdenacao(dados)
    {
    }
    bool OrdenarPorEquipe_Nome::ePrimeiro(Piloto a, Piloto b)const
    {
        if(a.getEquipe() == b.getEquipe())
        {
            return (a.getNome() < b.getNome());
        }
        else return (a.getEquipe() < b.getEquipe());
    }
}
