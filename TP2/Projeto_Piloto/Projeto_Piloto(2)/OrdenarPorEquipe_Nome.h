#ifndef ORDENARPOREQUIPE_NOME_H
#define ORDENARPOREQUIPE_NOME_H
#include<OrdenarPorEquipe.h>
#include"OrdenarPorNome.h"

namespace TP2
{
    class OrdenarPorEquipe_Nome: public OrdenarPorEquipe
    {
        public:
            OrdenarPorEquipe_Nome(arrayList<Piloto> *dados, int inicio, int fim);
            void ordenar_Nome()const;
    };
}

#endif // ORDENARPOREQUIPE_NOME_H
