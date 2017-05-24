#ifndef MATRIZ_H
#define MATRIZ_H
#include <QString>

namespace ED2 {
    class Matriz;
}

class Matriz
{
private:
    int quantidadeDeColunas;
    int quantidadeDeLinhas;
    int *ponteiro_Matriz;
public:
    Matriz(int quantidadeDeLinhas, int quantidadeDeColunas);
    ~Matriz(){if(ponteiro_Matriz) delete[] ponteiro_Matriz;}        //inline - deleta a matriz se ela foi criada
    inline int getQuantidadeDeLinhas()const{return quantidadeDeLinhas;}
    inline int getQuantidadeDeColunas()const{return quantidadeDeColunas;}
    void setElemento(int elemento, int linha, int coluna)const;
    int getElemento(int linha, int coluna)const;
    Matriz* operator + (Matriz const * const matriz)const;             //sobrecarga de operadores
    Matriz* operator - (Matriz const * const matriz)const;
    Matriz* operator * (Matriz const * const matriz)const;
    bool eTriangularSuperior()const;
    bool eTriangularInferior()const;
    bool eSimetrica()const;
    bool eIdentidade()const;
    Matriz* gerarTransposta()const;
    Matriz* calcularPotencia(int expoente)const;
    Matriz* multiplicarPorK(int constante)const;
    bool operator ==(Matriz const * const matriz)const;
    inline bool operator !=(Matriz const * const matriz)const{return (!(this->operator ==(matriz)));}
    bool eOrtogonal()const;
    bool eDePermutacao()const;

    static Matriz* zeros(int size); //Gera uma matriz quadrada de zeros
    static Matriz* ones(int size); //Gera uma matriz quadrada de ums
    static Matriz* eye(int size); //Gera uma matriz identidade quadrada

};

#endif // MATRIZ_H
