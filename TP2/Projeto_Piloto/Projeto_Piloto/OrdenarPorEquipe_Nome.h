#ifndef ORDENARPOREQUIPE_NOME_H
#define ORDENARPOREQUIPE_NOME_H
#include<TemplateMethodOrdenacao.h>

namespace TP2
{
    class OrdenarPorEquipe_Nome: public TemplateMethodOrdenacao
    {
        public:
            OrdenarPorEquipe_Nome(arrayList<Piloto> *dados);
            bool ePrimeiro(Piloto a, Piloto b)const;
    };
}

#endif // ORDENARPOREQUIPE_NOME_H
