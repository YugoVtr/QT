#include "OrdenarPorPontuacao_Idade.h"
namespace TP2
{
    OrdenarPorPontuacao_Idade::OrdenarPorPontuacao_Idade(arrayList<Piloto> *dados, int inicio, int fim):
        OrdenarPorPontuacao(dados,inicio,fim)
    {
        ordenar_Idade();
    }
    void OrdenarPorPontuacao_Idade::ordenar_Idade() const
    {
        int inicio=0,fim=0;
        while(fim<dados->size())
        {
            while(fim<dados->size() && compare((*dados)[inicio],(*dados)[fim])==0) fim++;
            if(fim!=inicio) OrdenarPorIdade ordenar(this->dados,inicio,fim);
            inicio = fim;
        }
    }
}
