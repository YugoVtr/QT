#ifndef DIVIDIRSEMTRATAMENTO_H
#define DIVIDIRSEMTRATAMENTO_H
#include<QString>

class DividirSemTratamento
{
private:
    int operandoA, operandoB;
public:
    DividirSemTratamento(int operando1, int operando2):
        operandoA(operando1), operandoB(operando2){}
    int dividir()const{
        return operandoA/operandoB;
    }
};

#endif // DIVIDIRSEMTRATAMENTO_H
