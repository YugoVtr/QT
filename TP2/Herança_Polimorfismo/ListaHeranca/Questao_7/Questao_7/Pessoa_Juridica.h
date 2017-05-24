#ifndef PESSOA_JURIDICA_H
#define PESSOA_JURIDICA_H
#include <QString>
#include "Pessoa.h"
namespace Heranca
{
    class Pessoa_Juridica;
}

class Pessoa_Juridica : public Pessoa
{
    private:
    long long int cnpj;
    QString razaoSocial;

    public:
        Pessoa_Juridica(): Pessoa(), cnpj(0) , razaoSocial(""){}

        inline void setCnpj(long long cnpj){this->cnpj = cnpj;}
        inline void setRazaoSocial( QString razaoSocial){this->razaoSocial = razaoSocial;}
        inline long long getCnpj() const{return cnpj;}
        inline QString getRazaoSocial() const{return razaoSocial;}

        float calcularImposto (float valor) const{return valor*0.1 ; }
};

#endif // PESSOA_JURIDICA_H
