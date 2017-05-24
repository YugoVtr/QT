#ifndef GRADUADO_H
#define GRADUADO_H
#include <QString>
#include <Estudante.h>

namespace Heranca
{
    class Graduado : public Estudante
    {
        private:
        int anoDeConclusao;
        int anoDeColacaoDeGrau;
        int numeroDoDiploma;

        public:
        Graduado(): Estudante(), anoDeConclusao(0),anoDeColacaoDeGrau(0),numeroDoDiploma(0){}
        inline void setAnoDeConclusao(int anoDeConclusao){ this->anoDeConclusao = anoDeConclusao;}
        inline void setAnoDeColacaoDeGrau(int anoDeColacaoDeGrau){ this->anoDeColacaoDeGrau = anoDeColacaoDeGrau;}
        inline void setNumeroDoDiploma(int numeroDoDiploma){this->numeroDoDiploma = numeroDoDiploma;}

        inline int getAnoDeConclusao() const{ return anoDeConclusao;}
        inline int getAnoDeColacaoDeGrau() const{return anoDeColacaoDeGrau;}
        inline int getNumeroDoDiploma() const{return numeroDoDiploma;}

    };
}
#endif // GRADUADO_H
