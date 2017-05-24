#ifndef ORDENARPORMOTOR_EQUIPE_NOME_H
#define ORDENARPORMOTOR_EQUIPE_NOME_H
#include<TemplateMethodOrdenacao_3.h>

namespace TP2
{
    class OrdenarPorMotor_Equipe_Nome: public TemplateMethodOrdenacao_3
    {
        public:
            OrdenarPorMotor_Equipe_Nome(arrayList<Piloto> *dados);
            int compare(Piloto a, Piloto b)const;
            int compare_2(Piloto a, Piloto b)const;
            int compare_3(Piloto a, Piloto b)const;
    };
}

#endif // ORDENARPORMOTOR_EQUIPE_NOME_H
