#ifndef ITEM_H
#define ITEM_H
#include "QString"
namespace ED1
{
    class Item
    {
    private:
        QString nome;
        int repeticao;
    public:
        Item():nome(""),repeticao(0){}
        Item(QString nome):nome(nome.toUpper()),repeticao(1){}

        QString getNome()const{return nome;}
        int getRepeticao()const{return repeticao;}
        void addRepeticao(){repeticao++;}

        bool operator ==(Item comparar)const{return (this->nome==comparar.nome);}
        bool operator <(Item comparar)const{return (this->nome<comparar.nome);}
        bool operator >(Item comparar)const{return (this->nome>comparar.nome);}
    };
}
#endif // ITEM_H
