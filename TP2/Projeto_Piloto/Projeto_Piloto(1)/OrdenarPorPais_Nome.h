#ifndef ORDENARPORPAIS_NOME_H
#define ORDENARPORPAIS_NOME_H
#include<TemplateMethodOrdenacao_2.h>

namespace TP2
{
    class OrdenarPorPais_Nome: public TemplateMethodOrdenacao_2
    {
        public:
            OrdenarPorPais_Nome(arrayList<Piloto> *dados);
            int compare(Piloto a, Piloto b)const;
            int compare_2(Piloto a, Piloto b)const;
    };
}

#endif // ORDENARPORPAIS_NOME_H
