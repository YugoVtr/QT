#ifndef CDS_MUSICA_H
#define CDS_MUSICA_H
#include "Produto.h"
#include <QString>

namespace Heranca
{
    class CDs_Musica;
}

class CDs_Musica : public Produto
{
    private:
        QString nomeDoAlbum;
        QString banda;
        QString cantor;
        QString generoMusical;

    public:
        CDs_Musica(): Produto(), nomeDoAlbum(""),banda(""),cantor(""),generoMusical(""){}

        inline void setNomeDoAlbum( QString nomeDoAlbum){ this->nomeDoAlbum = nomeDoAlbum;}
        inline void setBanda( QString banda){this->banda = banda;}
        inline void setCantor( QString cantor){this->cantor = cantor;}
        inline void setGeneroMusical( QString generoMusical){this->generoMusical = generoMusical;}

        inline QString getNomeDoAlbum() const{return nomeDoAlbum;}
        inline QString getBanda() const{return banda;}
        inline QString getCantor() const{return cantor;}
        inline QString getGeneroMusical() const{return generoMusical;}
};

#endif // CDS_MUSICA_H
