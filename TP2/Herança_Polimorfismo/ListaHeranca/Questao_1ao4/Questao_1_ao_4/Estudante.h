#ifndef ESTUDANTE_H
#define ESTUDANTE_H
#include <QString>
#include <Pessoa.h>

namespace Heranca
{
    class Estudante : public Pessoa
    {
        protected:
        long long int matricula;
        QString curso;
        int campus;

        public:
        Estudante(): Pessoa(),matricula(0),curso(""),campus(0){}
        inline void setMatricula(long long int matricula){this->matricula = matricula;}
        inline void setCurso(QString curso){this->curso = curso;}
        inline void setCampus(int campus){this->campus = campus;}

        inline long long int getMatricula()const { return matricula;}
        inline QString getCurso()const {return curso;}
        inline int getCampus()const {return campus;}
    };
}
#endif // ESTUDANTE_H
