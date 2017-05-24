#include "Folder.h"

namespace ED1
{
    QChar Folder::getLetra() const
    {
        return letra;
    }

    void Folder::setLetra(const QChar &letra)
    {
        this->letra = letra.toUpper();
    }

    void Folder::inserir(const QString &valor)
    {
        try
        {  
            int posicao=0;
            for(posicao=lista->obterTamanho();posicao>=0;posicao--)
            {
                if(posicao==0||valor>lista->acessarPosicao(posicao))
                {
                    lista->incluirNaPosicao(valor,posicao+1);
                    posicao = -1;
                }
            }
        } catch (std::bad_alloc) { throw QString(" Não foi possivel inserir ");}
    }

    QString Folder::acessarPosicao(int posicao) const
    {
        try
        {
            return this->lista->acessarPosicao(posicao);

        } catch (std::bad_alloc) { throw QString(" Não foi possivel acessar ");}
    }
}


