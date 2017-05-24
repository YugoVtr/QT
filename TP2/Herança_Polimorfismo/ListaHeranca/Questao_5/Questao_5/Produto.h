#ifndef PRODUTO_H
#define PRODUTO_H
#include <QString>
namespace Heranca
{
    class Produto;
}

class Produto
{
    protected:
        int codigo;
        QString descricao;
        float precoDeVenda;
        QString tipoDoProduto;

    public:
        Produto(): codigo(0),descricao(""),precoDeVenda(0.0),tipoDoProduto(""){}

        inline void setCodigo(int codigo){this->codigo = codigo;}
        inline void setDescricao(QString descricao){this->descricao = descricao;}
        inline void setPrecoDeVenda(float precoDeVenda){this->precoDeVenda = precoDeVenda;}
        inline void setTipoDoProduto(QString tipoDoProduto){this->tipoDoProduto = tipoDoProduto;}
        inline int getCodigo() const{return codigo;}
        inline QString getDescricao() const{return descricao;}
        inline float getPrecoDeVenda() const{return precoDeVenda;}
        inline QString getTipoDoProduto() const{return tipoDoProduto;}
};

#endif // PRODUTO_H
