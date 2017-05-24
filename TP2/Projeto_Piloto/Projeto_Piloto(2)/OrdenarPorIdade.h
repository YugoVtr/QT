#ifndef ORDENARPORIDADE_H
#define ORDENARPORIDADE_H
#include"TemplateMethodOrdenacao.h"

namespace TP2
{
    class OrdenarPorIdade: public TemplateMethodOrdenacao
    {
        public:
            OrdenarPorIdade(arrayList<Piloto> *dados, int inicio, int fim);
            int compare(Piloto a, Piloto b)const;
    };
}

#endif // ORDENARPORIDADE_H
