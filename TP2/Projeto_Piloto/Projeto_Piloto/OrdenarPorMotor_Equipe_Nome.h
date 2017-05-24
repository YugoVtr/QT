#ifndef ORDENARPORMOTOR_EQUIPE_NOME_H
#define ORDENARPORMOTOR_EQUIPE_NOME_H
#include<TemplateMethodOrdenacao.h>

namespace TP2
{
    class OrdenarPorMotor_Equipe_Nome: public TemplateMethodOrdenacao
    {
        public:
            OrdenarPorMotor_Equipe_Nome(arrayList<Piloto> *dados);
            bool ePrimeiro(Piloto a, Piloto b)const;
    };
}

#endif // ORDENARPORMOTOR_EQUIPE_NOME_H
