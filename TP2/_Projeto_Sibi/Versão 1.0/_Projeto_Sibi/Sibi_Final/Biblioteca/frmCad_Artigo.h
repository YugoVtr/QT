#ifndef FRMCAD_ARTIGO_H
#define FRMCAD_ARTIGO_H
#include <Artigo.h>
#include <ArtigoPersistencia.h>
#include <AutorPersistencia.h>
#include <QDialog>
#include <QTableWidgetItem>
#include <ArtigoAutorPersistencia.h>
#include <QList>
#include <frmCad_Autor.h>
#include <QDesktopWidget>
#include <QStyle>

namespace Ui {
  class frmCad_Artigo;
}

class frmCad_Artigo : public QDialog
{
  Q_OBJECT

public:
  explicit frmCad_Artigo(QWidget *parent = 0);
  ~frmCad_Artigo();

private slots:
  void on_pushButtonSair_clicked();

  void limpar();

  void on_LineEditCodigoAutor_returnPressed();

  void on_pushButtonInserirAutor_clicked();

  void on_toolButtonChamarTelaCadAutor_clicked();

  void on_pushButtonLimpar_clicked();

  void on_pushButtonRetirarAutor_clicked();

  void on_pushButtonConsultar_clicked();

  void on_comboBoxNomeAutores_currentIndexChanged(int index);

  void exibeAutores( );

  void on_pushButtonGravar_clicked();


private:
  Ui::frmCad_Artigo *ui;
  Mumu::ArtigoPersistencia persistirArtigo;
  Mumu::AutorPersistencia persistirAutor;
  Mumu::ArtigoAutorPersistencia persistirArtigoAutor;
  QList<Mumu::Autor> *listaAutores;
  frmCad_Autor janelaAutor;
};

#endif // FRMCAD_ARTIGO_H
