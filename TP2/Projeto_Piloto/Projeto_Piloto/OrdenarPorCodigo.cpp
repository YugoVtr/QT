#include "OrdenarPorCodigo.h"
namespace TP2
{
    OrdenarPorCodigo::OrdenarPorCodigo(arrayList<Piloto> *dados):
        TemplateMethodOrdenacao(dados)
    {
    }

    bool OrdenarPorCodigo::ePrimeiro(Piloto a, Piloto b)const
    {
        return (a.getCodigo() < b.getCodigo());
    }
}
