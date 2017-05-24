#ifndef ORDENARPORPONTUACAO_IDADE_H
#define ORDENARPORPONTUACAO_IDADE_H
#include "OrdenarPorPontuacao.h"
#include "OrdenarPorIdade.h"

namespace TP2
{
    class OrdenarPorPontuacao_Idade: public OrdenarPorPontuacao
    {
        public:
            OrdenarPorPontuacao_Idade(arrayList<Piloto> *dados, int inicio, int fim);
            void ordenar_Idade()const;
    };
}

#endif // ORDENARPORPONTUACAO_IDADE_H
