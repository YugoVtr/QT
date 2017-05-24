#ifndef TEMPLATEMETHODORDENACAO_H
#define TEMPLATEMETHODORDENACAO_H
#include "arrayList.h"
#include "Piloto.h"
#include "Persistencia.h"

namespace TP2
{
    class TemplateMethodOrdenacao
    {
    protected:
        arrayList<Piloto> *dados;
        int inicio;
        int fim;
    public:
        TemplateMethodOrdenacao(arrayList<Piloto> *dados,int inicio,int fim);
        virtual ~TemplateMethodOrdenacao(){}
        virtual int compare(Piloto a, Piloto b)const=0;
        void troca(int posicao_1,int posicao_2)const;
        void ordenar_BubbleSort() const;
        arrayList<Piloto> *obterDadosOrdenado()const;
    };
}
#endif // TEMPLATEMETHODORDENACAO_H
