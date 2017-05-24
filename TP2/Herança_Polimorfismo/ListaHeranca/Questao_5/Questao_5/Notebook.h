#ifndef NOTEBOOK_H
#define NOTEBOOK_H
#include <QString>
#include "Produto.h"

namespace Heranca
{
    class Notebook;
}

class Notebook : public Produto
{
    private:
        QString marca;
        QString modelo;
        float memoriaRAM;
        float capacidadeDoHD;
        QString processador;
        float tamanhoDaTela;
        QString sistemaOperacional;

    public:
        Notebook(): Produto(), marca(""), modelo(""), memoriaRAM(0.0),capacidadeDoHD(0.0),processador(""),
            tamanhoDaTela(0.0),sistemaOperacional("")  {}

        inline void setMarca( QString marca) {this->marca = marca; }
        inline void setModelo( QString modelo) {this->modelo = modelo; }
        inline void setMemoriaRAM(float memoriaRAM) {this->memoriaRAM = memoriaRAM; }
        inline void setCapacidadeDoHD(float capacidadeDoHD) {this->capacidadeDoHD = capacidadeDoHD; }
        inline void setProcessador( QString processador) {this->processador = processador; }
        inline void setTamanhoDaTela(float tamanhoDaTela) {this->tamanhoDaTela = tamanhoDaTela; }
        inline void setSistemaOperacional( QString sistemaOperacional) {this->sistemaOperacional = sistemaOperacional;}

        inline QString getMarca() const {return marca;}
        inline QString getModelo() const {return modelo;}
        inline float getMemoriaRAM() const {return memoriaRAM; }
        inline float getCapacidadeDoHD() const {return capacidadeDoHD; }
        inline QString getProcessador() const {return processador; }
        inline float getTamanhoDaTela() const {return tamanhoDaTela;}
        inline QString getSistemaOperacional() const {return sistemaOperacional; }
};

#endif // NOTEBOOK_H
