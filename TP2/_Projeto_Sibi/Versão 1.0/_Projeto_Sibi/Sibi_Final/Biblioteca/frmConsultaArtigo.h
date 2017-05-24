#ifndef FRMCONSULTAARTIGO_H
#define FRMCONSULTAARTIGO_H

#include <QMainWindow>
#include <Artigo.h>
#include <ArtigoPersistencia.h>
#include <Autor.h>
#include <AutorPersistencia.h>
#include <ArtigoAutor.h>
#include <ArtigoAutorPersistencia.h>
#include <QDialog>
#include <QDesktopWidget>
#include <QStyle>
using namespace Mumu;


namespace Ui {
class frmConsultaArtigo;
}

class frmConsultaArtigo : public QDialog
{
    Q_OBJECT

public:
    explicit frmConsultaArtigo(QWidget *parent = 0);
    ~frmConsultaArtigo();

private slots:
     void on_tableWidgetArtigo_itemSelectionChanged();
private:
    Ui::frmConsultaArtigo *ui;
    Artigo artigo;
    ArtigoPersistencia persistirArtigo;
    Autor autor;
    AutorPersistencia persistirAutor;
    ArtigoAutor artigoAutor;
    ArtigoAutorPersistencia persistirArtigoAutor;
    QList<Autor> *listaAutor;
};

#endif // FRMCONSULTAARTIGO_H

