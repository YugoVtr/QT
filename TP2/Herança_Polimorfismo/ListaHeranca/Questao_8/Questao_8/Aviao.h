#ifndef AVIAO_H
#define AVIAO_H
#include "QString"
#include "Veiculo.h"

namespace TP2 { class Aviao;}

class Aviao : public Veiculo
{
    private:
        QString prefixo;
        int numeroDeMotores;
    public:
        Aviao():prefixo(""),numeroDeMotores(0){}

        void setPrefixo(const QString &prefixo){this->prefixo=prefixo;}
        void setNumeroDeMotores(int numeroDeMotores){this->numeroDeMotores=numeroDeMotores;}
        QString getPrefixo() const{return prefixo;}
        int getNumeroDeMotores() const{return numeroDeMotores;}

        QString ligar()const{ return "Aviao Ligado";}
        QString desligar()const{return "Aviao Desligado";}
        QString mover()const{return "Aviao em voo";}
        QString virar(QString direcao)const{return "Aviao virou para "+ direcao;}

};

#endif // AVIAO_H
