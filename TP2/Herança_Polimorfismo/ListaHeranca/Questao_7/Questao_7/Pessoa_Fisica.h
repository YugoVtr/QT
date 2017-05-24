#ifndef PESSOA_FISICA_H
#define PESSOA_FISICA_H
#include "Pessoa.h"
#include <QString>

namespace Heranca
{
    class Pessoa_Fisica;
}

class Pessoa_Fisica : public Pessoa
{
    private:
        long long int cpf;
        QString sexo;

    public:
        Pessoa_Fisica(): Pessoa(), cpf(0), sexo("") {}

        inline void setCPF(long long cpf){ this->cpf = cpf;}
        inline void setSexo(QString sexo){this->sexo = sexo;}

        inline long long getCpf() const{return cpf;}
        inline QString getSexo() const{return sexo;}

        float calcularImposto(float valor) const;
};

#endif // PESSOA_FISICA_H
