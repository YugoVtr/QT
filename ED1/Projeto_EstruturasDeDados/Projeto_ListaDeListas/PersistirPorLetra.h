#ifndef PERSISTIRPORLETRA_H
#define PERSISTIRPORLETRA_H
#include <Lista_LDE_Circular.h>
#include "Folder.h"

namespace ED1
{
    class PersistirPorLetra
    {
    private:
        Lista_LDE_Circular<QString> *lista;
    public:
        PersistirPorLetra(Lista_LDE_Circular<QString> *lista):lista(lista){}
        Lista_LDE_Circular<Folder> *carregar();
        int busca(Lista_LDE_Circular<Folder>*lista, QChar elemento);
    };
}


#endif // PERSISTIRPORLETRA_H
