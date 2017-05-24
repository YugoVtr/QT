#ifndef ORDENARPORNOME_H
#define ORDENARPORNOME_H
#include"TemplateMethodOrdenacao.h"

namespace TP2
{
    class OrdenarPorNome: public TemplateMethodOrdenacao
    {
        public:
            OrdenarPorNome(arrayList<Piloto> *dados, int inicio, int fim);
            int compare(Piloto a, Piloto b)const; 
    };
}

#endif // ORDENARPORNOME_H
