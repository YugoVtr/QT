#ifndef MATRIZ_H
#define MATRIZ_H
#include <QString>

namespace Ferias
{
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
            QString getMatriz()const;
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
    };
}
#endif // MATRIZ_H
