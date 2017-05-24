#ifndef ORDENARPORPAIS_NOME_H
#define ORDENARPORPAIS_NOME_H
#include<OrdenarPorPais.h>

namespace TP2
{
    class OrdenarPorPais_Nome: public OrdenarPorPais
    {
        public:
            OrdenarPorPais_Nome(arrayList<Piloto> *dados, int inicio, int fim);
            void ordenar_Nome()const;
    };
}

#endif // ORDENARPORPAIS_NOME_H
