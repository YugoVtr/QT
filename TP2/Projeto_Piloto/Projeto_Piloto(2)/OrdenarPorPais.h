#ifndef ORDENARPORPAIS_H
#define ORDENARPORPAIS_H
#include"TemplateMethodOrdenacao.h"
#include"OrdenarPorNome.h"

namespace TP2
{
    class OrdenarPorPais: public TemplateMethodOrdenacao
    {
        public:
            OrdenarPorPais(arrayList<Piloto> *dados, int inicio, int fim);
            int compare(Piloto a, Piloto b)const;
    };
}

#endif // ORDENARPORPAIS_H
