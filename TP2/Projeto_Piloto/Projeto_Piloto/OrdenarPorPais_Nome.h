#ifndef ORDENARPORPAIS_NOME_H
#define ORDENARPORPAIS_NOME_H
#include<TemplateMethodOrdenacao.h>

namespace TP2
{
    class OrdenarPorPais_Nome: public TemplateMethodOrdenacao
    {
        public:
            OrdenarPorPais_Nome(arrayList<Piloto> *dados);
            bool ePrimeiro(Piloto a, Piloto b)const;
    };
}

#endif // ORDENARPORPAIS_NOME_H
