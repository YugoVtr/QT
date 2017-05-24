#ifndef TEMPLATEMETHODORDENACAO_H
#define TEMPLATEMETHODORDENACAO_H
#include "arrayList.h"
#include "Piloto.h"
#include "Persistencia.h"

namespace TP2
{
    class TemplateMethodOrdenacao
    {
    private:
        arrayList<Piloto> *dados;
    public:
        TemplateMethodOrdenacao(arrayList<Piloto> *dados);
        virtual ~TemplateMethodOrdenacao(){}
        virtual bool ePrimeiro(Piloto a, Piloto b)const=0;
        void troca(int posicao_1,int posicao_2)const;
        virtual void ordenar_BubbleSort() const;
        arrayList<Piloto> *obterDadosOrdenado()const;
    };
}
#endif // TEMPLATEMETHODORDENACAO_H
