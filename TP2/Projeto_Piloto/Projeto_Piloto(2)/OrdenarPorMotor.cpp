#include "OrdenarPorMotor.h"
namespace TP2
{
    OrdenarPorMotor::OrdenarPorMotor(arrayList<Piloto> *dados, int inicio, int fim):
        TemplateMethodOrdenacao(dados,inicio,fim)
    {
        ordenar_BubbleSort();
    }

    int OrdenarPorMotor::compare(Piloto a, Piloto b)const
    {
        if(a.getMotor() < b.getMotor()) return -1;
        if(a.getMotor() > b.getMotor()) return 1;
        return 0;
    }
}
