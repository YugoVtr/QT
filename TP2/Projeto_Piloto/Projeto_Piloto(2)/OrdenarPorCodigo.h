#ifndef ORDENARPORCODIGO_H
#define ORDENARPORCODIGO_H
#include<TemplateMethodOrdenacao.h>

namespace TP2
{
    class OrdenarPorCodigo: public TemplateMethodOrdenacao
    {
        public:
            OrdenarPorCodigo(arrayList<Piloto> *dados,int inicio,int fim);
            int compare(Piloto a, Piloto b)const;
    };
}

#endif // ORDENARPORCODIGO_H
