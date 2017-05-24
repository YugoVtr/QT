#ifndef TEMPLATEMETHODORDENACAO_3_H
#define TEMPLATEMETHODORDENACAO_3_H
#include "TemplateMethodOrdenacao_2.h"

namespace TP2
{
    class TemplateMethodOrdenacao_3 : public TemplateMethodOrdenacao_2
    {
    public:
        TemplateMethodOrdenacao_3(arrayList<Piloto> *dados);
        virtual ~TemplateMethodOrdenacao_3(){}
        void ordenar_BubbleSort() const;
        virtual int compare_3(Piloto a, Piloto b)const=0;
    };
}

#endif // TEMPLATEMETHODORDENACAO_2_H
