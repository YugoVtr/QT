#ifndef PESSOA_H
#define PESSOA_H
#include <QString>
namespace Heranca
{
    class Pessoa;
}

class Pessoa
{
    protected:
        QString nome;
        QString endereco;
        long long int telefone;
        QString email;

    public:
        Pessoa(): nome(""),endereco(""),telefone(0),email(""){}
        inline void setNome(QString nome){this->nome = nome; }
        inline void setEndereco(QString endereco){this->endereco = endereco ; }
        inline void setTelefone(long long int telefone){this->telefone = telefone;}
        inline void setEmail(QString email){this->email = email;}

        inline QString getNome()const { return nome;}
        inline QString getEndereco()const {return endereco;}
        inline long long int getTelefone()const { return telefone;}
        inline QString getEmail()const {return email;}

        virtual float calcularImposto(float valor)const = 0;
};

#endif // PESSOA_H
