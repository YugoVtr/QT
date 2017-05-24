#include "OrdenarPorPais_Nome.h"
namespace TP2
{
    OrdenarPorPais_Nome::OrdenarPorPais_Nome(arrayList<Piloto> *dados, int inicio, int fim):
        OrdenarPorPais(dados,inicio,fim)
    {
        ordenar_Nome();
    }

    void OrdenarPorPais_Nome::ordenar_Nome() const
    {
        int inicio=0,fim=0;
        while(fim<dados->size())
        {
            while(fim<dados->size() && compare((*dados)[inicio],(*dados)[fim])==0) fim++;
            if(fim!=inicio) OrdenarPorNome ordenar(this->dados,inicio,fim);
            inicio = fim;
        }
    }
}
