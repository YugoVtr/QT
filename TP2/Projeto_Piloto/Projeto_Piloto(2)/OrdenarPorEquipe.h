#ifndef ORDENARPOREQUIPE_H
#define ORDENARPOREQUIPE_H
#include<TemplateMethodOrdenacao.h>

namespace TP2
{
    class OrdenarPorEquipe: public TemplateMethodOrdenacao
    {
        public:
            OrdenarPorEquipe(arrayList<Piloto> *dados, int inicio, int fim);
            int compare(Piloto a, Piloto b)const;
    };
}

#endif // ORDENARPOREQUIPE_H
