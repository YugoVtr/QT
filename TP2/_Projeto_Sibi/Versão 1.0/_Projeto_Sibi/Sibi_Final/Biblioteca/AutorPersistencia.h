#ifndef AUTORPERSISTENCIA_H
#define AUTORPERSISTENCIA_H
#include <QString>
#include <Crud.h>
#include <Autor.h>
#include <fstream>

namespace Mumu
{
  class AutorPersistencia : public Vitor::Crud<Autor>
  {
  private:
    QString nomeDoArquivoNoDisco;

  public:
    AutorPersistencia() { }

    ~AutorPersistencia() { }

    AutorPersistencia(QString nomeDoArquivoNoDisco){this->nomeDoArquivoNoDisco = nomeDoArquivoNoDisco;}

    inline void setNomeDoArquivoNoDisco(QString nomeDoArquivoNoDisco){this->nomeDoArquivoNoDisco = nomeDoArquivoNoDisco;}

    inline QString getNomeDoArquivoNoDisco() {return this->nomeDoArquivoNoDisco;}

    void incluir(Autor &objeto)const;
    void alterar(Autor &objeto)const;
    QString consultar(const int codigo)const;
    inline void alterar(int codigo, QString nome) const { Autor p(codigo,nome); alterar(p);}
    QList<Autor> *listagem() const;
  };
}

#endif // AUTORPERSISTENCIA_H
