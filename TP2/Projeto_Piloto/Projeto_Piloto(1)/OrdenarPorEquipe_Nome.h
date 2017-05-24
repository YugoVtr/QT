#ifndef ORDENARPOREQUIPE_NOME_H
#define ORDENARPOREQUIPE_NOME_H
#include<TemplateMethodOrdenacao_2.h>

namespace TP2
{
    class OrdenarPorEquipe_Nome: public TemplateMethodOrdenacao_2
    {
        public:
            OrdenarPorEquipe_Nome(arrayList<Piloto> *dados);
            int compare(Piloto a, Piloto b)const;
            int compare_2(Piloto a, Piloto b)const;
    };
}

#endif // ORDENARPOREQUIPE_NOME_H
