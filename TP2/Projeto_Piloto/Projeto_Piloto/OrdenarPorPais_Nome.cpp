#include "OrdenarPorPais_Nome.h"
namespace TP2
{
    OrdenarPorPais_Nome::OrdenarPorPais_Nome(arrayList<Piloto> *dados):
        TemplateMethodOrdenacao(dados)
    {
    }

    bool OrdenarPorPais_Nome::ePrimeiro(Piloto a, Piloto b)const
    {
        if(a.getPais()==b.getPais())
        {
            return(a.getNome()<b.getNome());
        }
        else return(a.getPais()<b.getPais());
    }
}
