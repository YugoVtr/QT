#ifndef NUMEROSNATURAIS_H
#define NUMEROSNATURAIS_H
#include <QString>
#include <cmath>

namespace TerceiraLista
{
    class NumerosNaturais
    {
    private:
        long numero;
    public:
        NumerosNaturais();
        NumerosNaturais(long numero);
        NumerosNaturais(NumerosNaturais &objeto);
        inline long get()const{return numero;}
        void set(long numero);
        void set(NumerosNaturais &objeto);
        NumerosNaturais calcularFatorial()const;
        bool eNumeroPerfeito()const;
        bool eCapicua()const;
        bool eQuadradoPerfeito()const;
        bool eNumeroPrimo()const;
        QString mudarBase(int base)const;
        NumerosNaturais calcularMDC(NumerosNaturais &objeto)const;
        NumerosNaturais calcularMMC(NumerosNaturais &objeto)const;
        bool ePrimoCom(NumerosNaturais &objeto)const;
    };
}


#endif // NUMEROSNATURAIS_H
