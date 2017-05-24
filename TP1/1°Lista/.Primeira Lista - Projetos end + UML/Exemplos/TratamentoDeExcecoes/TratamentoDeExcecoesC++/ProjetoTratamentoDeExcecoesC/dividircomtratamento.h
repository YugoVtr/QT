#ifndef DIVIDIRCOMTRATAMENTO_H
#define DIVIDIRCOMTRATAMENTO_H
#include<QString>

class DividirComTratamento
{
private:
    int operandoA, operandoB;
public:
    DividirComTratamento(int operando1, int operando2):
        operandoA(operando1), operandoB(operando2){}
    int dividir()const{
        if(operandoB==0) throw QString("Divisao por Zero");
        return operandoA/operandoB;
    }
};

#endif // DIVIDIRCOMTRATAMENTO_H
