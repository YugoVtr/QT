#ifndef ORDENARPORPONTUACAO_IDADE_H
#define ORDENARPORPONTUACAO_IDADE_H
#include<TemplateMethodOrdenacao_2.h>

namespace TP2
{
    class OrdenarPorPontuacao_Idade: public TemplateMethodOrdenacao_2
    {
        public:
            OrdenarPorPontuacao_Idade(arrayList<Piloto> *dados);
            int compare(Piloto a, Piloto b)const;
            int compare_2(Piloto a, Piloto b)const;

    };
}

#endif // ORDENARPORPONTUACAO_IDADE_H
