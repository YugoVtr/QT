#ifndef TEMPLATEMETHODORDENACAO_2_H
#define TEMPLATEMETHODORDENACAO_2_H
#include "TemplateMethodOrdenacao.h"

namespace TP2
{
    class TemplateMethodOrdenacao_2 : public TemplateMethodOrdenacao
    {
    public:
        TemplateMethodOrdenacao_2(arrayList<Piloto> *dados);
        virtual ~TemplateMethodOrdenacao_2(){}
        void ordenar_BubbleSort() const;
        virtual int compare_2(Piloto a, Piloto b)const=0;
    };
}

#endif // TEMPLATEMETHODORDENACAO_2_H
