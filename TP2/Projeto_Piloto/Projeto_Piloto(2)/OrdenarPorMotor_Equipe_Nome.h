#ifndef ORDENARPORMOTOR_EQUIPE_NOME_H
#define ORDENARPORMOTOR_EQUIPE_NOME_H
#include "OrdenarPorMotor.h"
#include "OrdenarPorEquipe_Nome.h"
namespace TP2
{
    class OrdenarPorMotor_Equipe_Nome: public OrdenarPorMotor
    {
        public:
            OrdenarPorMotor_Equipe_Nome(arrayList<Piloto> *dados, int inicio, int fim);
            void ordenar_Equipe_Nome()const;
    };
}

#endif // ORDENARPORMOTOR_EQUIPE_NOME_H
