#ifndef MATRIZ
#define MATRIZ

#include<string>
namespace TP2{//inicio

template <class tipo>
class Matriz
{
private:
    int quantidadeDeColunas;
    int quantidadeDeLinhas;
    tipo *ptMatriz;
public:
    Matriz(int qLinhas, int qColunas);
    ~Matriz(){if(ptMatriz) delete[] ptMatriz;}
    int getQuantidadeDeLinhas()const{return quantidadeDeLinhas;}
    int getQuantidadeDeColunas()const{return quantidadeDeColunas;}

    void setElemento(tipo elemento, int linha, int coluna)const;
    tipo getElemento(int linha, int coluna)const;
};

template <class tipo>
Matriz<tipo>::Matriz(int qLinhas, int qColunas):
    quantidadeDeColunas(0),
    quantidadeDeLinhas(0),
    ptMatriz(0)
{
    if(qLinhas<=0) throw std::string("Quantidade de Linhas somente positiva");
    if(qColunas<=0) throw std::string("Quantidade de Colunas somente positiva");
    try{
        ptMatriz = new tipo[qLinhas*qColunas];
    }catch(std::bad_alloc&){
        throw std::string("Vai comprar Memoria");
    }
    quantidadeDeLinhas = qLinhas;
    quantidadeDeColunas = qColunas;
}

template <class tipo>
void Matriz<tipo>::setElemento(tipo elemento, int linha, int coluna)const{
    if(linha<0 || linha>=quantidadeDeLinhas)
        throw std::string("Linha fora do intervalo valido");
    if(coluna<0 || coluna>=quantidadeDeColunas)
        throw std::string("Coluna fora do intervalo valido");
    int pos = linha*quantidadeDeColunas+coluna;
    *(ptMatriz+pos) = elemento;
}

template <class tipo>
tipo Matriz<tipo>::getElemento(int linha, int coluna)const{
    if(linha<0 || linha>=quantidadeDeLinhas)
        throw std::string("Linha fora do intervalo valido");
    if(coluna<0 || coluna>=quantidadeDeColunas)
        throw std::string("Coluna fora do intervalo valido");
    int pos = linha*quantidadeDeColunas+coluna;
    return *(ptMatriz+pos);
}

}//fim

#endif // MATRIZ

