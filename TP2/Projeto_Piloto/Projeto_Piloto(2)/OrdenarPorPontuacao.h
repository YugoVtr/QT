#ifndef ORDENARPORPONTUACAO_H
#define ORDENARPORPONTUACAO_H
#include<TemplateMethodOrdenacao.h>

namespace TP2
{
    class OrdenarPorPontuacao: public TemplateMethodOrdenacao
    {
        public:
            OrdenarPorPontuacao(arrayList<Piloto> *dados, int inicio, int fim);
            int compare(Piloto a, Piloto b)const;
    };
}

#endif // ORDENARPORPONTUACAO_H
