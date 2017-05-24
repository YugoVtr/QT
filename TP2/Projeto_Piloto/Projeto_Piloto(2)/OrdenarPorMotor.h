#ifndef ORDENARPORMOTOR_H
#define ORDENARPORMOTOR_H
#include"TemplateMethodOrdenacao.h"

namespace TP2
{
    class OrdenarPorMotor: public TemplateMethodOrdenacao
    {
        public:
            OrdenarPorMotor(arrayList<Piloto> *dados, int inicio, int fim);
            int compare(Piloto a, Piloto b)const;
    };
}

#endif // ORDENARPORMOTOR_H
