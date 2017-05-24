#include "OrdenarPorMotor_Equipe_Nome.h"
namespace TP2
{
    OrdenarPorMotor_Equipe_Nome::OrdenarPorMotor_Equipe_Nome(arrayList<Piloto> *dados, int inicio, int fim):
        OrdenarPorMotor(dados,inicio,fim)
    {
        ordenar_Equipe_Nome();
    }

    void OrdenarPorMotor_Equipe_Nome::ordenar_Equipe_Nome() const
    {
        int inicio=0,fim=0;
        while(fim<dados->size())
        {
            while(fim<dados->size() && compare((*dados)[inicio],(*dados)[fim])==0) fim++;
            if(fim!=inicio) OrdenarPorEquipe_Nome ordenar(this->dados,inicio,fim);
            inicio = fim;
        }
    }
}
