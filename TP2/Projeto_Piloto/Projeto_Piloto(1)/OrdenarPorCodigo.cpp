#include "OrdenarPorCodigo.h"
namespace TP2
{
    OrdenarPorCodigo::OrdenarPorCodigo(arrayList<Piloto> *dados):
        TemplateMethodOrdenacao(dados)
    {
    }

    int OrdenarPorCodigo::compare(Piloto a, Piloto b)const
    {
        if(a.getCodigo() < b.getCodigo()) return -1;
        if(a.getCodigo() > b.getCodigo()) return 1;
        return 0;
    }
}
