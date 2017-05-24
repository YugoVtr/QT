#ifndef FOLDER_H
#define FOLDER_H
#include "Lista_LDE_Circular.h"

namespace ED1
{
    class Folder
    {
    private:
        QChar letra;
        Lista_LDE_Circular<QString> *lista;

    public:
        Folder():letra('0'),lista(0){lista = new Lista_LDE_Circular<QString>(); }
        Folder(QChar letra):letra(letra),lista(0){lista = new Lista_LDE_Circular<QString>();}
        QChar getLetra() const;
        void setLetra(const QChar &letra);
        void inserir(const QString &valor);
        QString acessarPosicao(int posicao) const;
        int size()const{return lista->obterTamanho();}
        bool operator ==(Folder &compara)const{return (this->letra==compara.letra);}
        bool operator >(Folder &compara)const{return (this->letra>compara.letra);}
        bool operator <(Folder &compara)const{return (this->letra<compara.letra);}
    };
}


#endif // FOLDER_H
