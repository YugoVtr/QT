#ifndef ORDENARPORNOME_H
#define ORDENARPORNOME_H
#include<TemplateMethodOrdenacao.h>

namespace TP2
{
    class OrdenarPorNome: public TemplateMethodOrdenacao
    {
        public:
            OrdenarPorNome(arrayList<Piloto> *dados);
            bool ePrimeiro(Piloto a, Piloto b)const;
    };
}

#endif // ORDENARPORNOME_H
