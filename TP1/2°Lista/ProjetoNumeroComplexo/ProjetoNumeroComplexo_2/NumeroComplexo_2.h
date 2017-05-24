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
        NumeroComplexo somar(NumeroComplexo &numero)const;
        NumeroComplexo subtrair(NumeroComplexo &numero)const;
        NumeroComplexo multiplicar(NumeroComplexo &numero)const;
        NumeroComplexo dividir(NumeroComplexo &numero)const;
        bool igualdade(NumeroComplexo &numero)const;
        bool diferenca(NumeroComplexo &numero)const;
    };
}

#endif // NUMEROCOMPLEXO_H
