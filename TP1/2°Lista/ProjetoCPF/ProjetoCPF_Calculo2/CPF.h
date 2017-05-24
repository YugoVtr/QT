#ifndef CPF_H
#define CPF_H
#include <QString>

namespace SegundaLista {

    class CPF
    {
        private:
            long long int numero;

        public:
            CPF();
            ~CPF();

            long long getCPF()const { return numero ;}
            void setCPF(long long numero);
            bool validar(long long numero);
    };
}

#endif // CPF_H
