#ifndef ORDENARPORCODIGO_H
#define ORDENARPORCODIGO_H
#include<TemplateMethodOrdenacao.h>

namespace TP2
{
    class OrdenarPorCodigo: public TemplateMethodOrdenacao
    {
        public:
            OrdenarPorCodigo(arrayList<Piloto> *dados);
            bool ePrimeiro(Piloto a, Piloto b)const;
    };
}

#endif // ORDENARPORCODIGO_H
