#include "Triangulo.h"
namespace SegundaLista{//inicioNameSpace
    Triangulo::Triangulo():
         ladoA(0.0),
         ladoB(0.0),
         ladoC(0.0)
    {
    }

    void Triangulo::setLados (float ladoA,float ladoB, float ladoC){
        if(ladoA<0.0 || ladoB<0.0 || ladoC<0.0) throw QString (" LADO NAO PODE SER NEGATIVO ");
        if (ladoA>=ladoB+ladoC || ladoB>=ladoA+ladoC || ladoC>=ladoA+ladoB)
            throw QString (" O valor dos lados nao formam um triangulo ");

        this->ladoA=ladoA;
        this->ladoB=ladoB;
        this->ladoC=ladoC;

        if (ladoA<ladoB)
        {
            ladoA=ladoA+ladoB;
            ladoB=ladoA-ladoB;
            ladoA=ladoA-ladoB;
        }
        if (ladoA<ladoC)
        {
           ladoA=ladoA+ladoC;
           ladoC=ladoA-ladoC;
           ladoA=ladoA-ladoC;
        }
        if (ladoB<ladoC)
        {
            ladoB=ladoB+ladoC;
            ladoC=ladoB-ladoC;
            ladoB=ladoB-ladoC;
        }
    }

    float Triangulo::calcularArea()const
    {
        float T = (ladoA+ladoB+ladoC)/2.0;
        return (sqrt(T*(T-ladoA)*(T-ladoB)*(T-ladoC)));
    }
    QString Triangulo::encontrarTipoPorLado()const
    {
        QString tipoPorLado="ISOSCELES";
        if (ladoA==ladoB&&ladoA==ladoC&&ladoB==ladoC){tipoPorLado="EQUILATERO";}
        if (ladoA!=ladoB&&ladoA!=ladoC&&ladoB!=ladoC){tipoPorLado="ESCALENO";}
        return tipoPorLado;
    }
    QString Triangulo::encontrarTipoPorAngulo()const
    {
        QString tipoPorAngulo="ACUTANGULO";
        if((ladoA*ladoA)==(ladoB*ladoB)+(ladoC*ladoC)){tipoPorAngulo="RETANGULO";}
        if((ladoA*ladoA)>(ladoB*ladoB)+(ladoC*ladoC)){tipoPorAngulo="OBTUSANGULO";}
        return tipoPorAngulo;
    }
}//fimNameSpace
