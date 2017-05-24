#include "OrdenarPorNome.h"
namespace TP2
{
    OrdenarPorNome::OrdenarPorNome(arrayList<Piloto> *dados):
        TemplateMethodOrdenacao(dados)
    {
    }

    bool OrdenarPorNome::ePrimeiro(Piloto a, Piloto b)const
    {
        return (a.getNome() < b.getNome());
    }
}
