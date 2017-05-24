#include "OrdenarPorMotor_Equipe_Nome.h"
namespace TP2
{
    OrdenarPorMotor_Equipe_Nome::OrdenarPorMotor_Equipe_Nome(arrayList<Piloto> *dados):
        TemplateMethodOrdenacao(dados)
    {
    }

    bool OrdenarPorMotor_Equipe_Nome::ePrimeiro(Piloto a, Piloto b)const
    {
        if(a.getMotor() == b.getMotor())
        {
            if(a.getEquipe()==b.getEquipe())
            {
                return (a.getNome()<b.getNome());
            }
            else return(a.getEquipe()<b.getEquipe());
        }
        else return (a.getMotor() < b.getMotor());
    }
}
