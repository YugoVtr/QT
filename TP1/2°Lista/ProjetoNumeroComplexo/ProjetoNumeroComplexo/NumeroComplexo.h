#ifndef NUMEROCOMPLEXO_H
#define NUMEROCOMPLEXO_H
#include<QString>

namespace SegundaLista {

    class NumeroComplexo
    {
    private:
        int parteReal;
        int parteImaginaria;

    public:
        NumeroComplexo();
        NumeroComplexo(int parteReal, int parteImaginaria);
        NumeroComplexo(NumeroComplexo &numero);
        void set(int parteReal, int parteImaginaria);
        void set(NumeroComplexo &numero);
        QString get()const;
        NumeroComplexo operator +(NumeroComplexo &numero)const;
        NumeroComplexo operator -(NumeroComplexo &numero)const;
        NumeroComplexo operator *(NumeroComplexo &numero)const;
        NumeroComplexo operator /(NumeroComplexo &numero)const;
        bool operator ==(NumeroComplexo &numero)const;
        bool operator != (NumeroComplexo &numero)const;
    };
}

#endif // NUMEROCOMPLEXO_H
