#include "OrdenarPorMotor_Equipe_Nome.h"
namespace TP2
{
    OrdenarPorMotor_Equipe_Nome::OrdenarPorMotor_Equipe_Nome(arrayList<Piloto> *dados):
        TemplateMethodOrdenacao_3(dados)
    {
    }

    int OrdenarPorMotor_Equipe_Nome::compare(Piloto a, Piloto b)const
    {
        if(a.getMotor() < b.getMotor()) return -1;
        if(a.getMotor() > b.getMotor()) return 1;
        return 0;
    }
    int OrdenarPorMotor_Equipe_Nome::compare_2(Piloto a, Piloto b)const
    {
        if(a.getEquipe() < b.getEquipe()) return -1;
        if(a.getEquipe() > b.getEquipe()) return 1;
        return 0;
    }
    int OrdenarPorMotor_Equipe_Nome::compare_3(Piloto a, Piloto b)const
    {
        if(a.getNome() < b.getNome()) return -1;
        if(a.getNome() > b.getNome()) return 1;
        return 0;
    }
}
