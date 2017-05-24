#ifndef TRABALHADOR_H
#define TRABALHADOR_H
#include <QString>
#include <Pessoa.h>
namespace Heranca
{
    class Trabalhador : public Pessoa
    {
        private:
        QString funcao;
        QString departamento;
        float salario;

        public:
        Trabalhador(): Pessoa(), funcao(""),departamento(""),salario(0.0){}
        inline void setFuncao(QString funcao){this->funcao = funcao;}
        inline void setDepartamento(QString departamento){this->departamento = departamento;}
        inline void setSalario(float salario){if(salario<0) throw QString("Salario Invalido"); this->salario = salario;}

        inline QString getFuncao() const{return funcao;}
        inline QString getDepartamento() const{return departamento;}
        inline float getSalario() const{return salario;}

    };
}
#endif // TRABALHADOR_H
