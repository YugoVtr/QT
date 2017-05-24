#ifndef ORDENARPORPONTUACAO_IDADE_H
#define ORDENARPORPONTUACAO_IDADE_H
#include<TemplateMethodOrdenacao.h>

namespace TP2
{
    class OrdenarPorPontuacao_Idade: public TemplateMethodOrdenacao
    {
        public:
            OrdenarPorPontuacao_Idade(arrayList<Piloto> *dados);
            bool ePrimeiro(Piloto a, Piloto b)const;
    };
}

#endif // ORDENARPORPONTUACAO_IDADE_H
