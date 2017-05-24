#ifndef LISTARTELEFONE_H
#define LISTARTELEFONE_H

#include <QDialog>
#include "ListarUsuario.h"
#include "QTableWidget"
#include "Telefone_Persistencia.h"

namespace Ui {
class ListarTelefone;
}

class ListarTelefone : public QDialog
{
    Q_OBJECT

public:
    explicit ListarTelefone(long long cpf);
    void limparGrid()const;
    void alinhamento(QTableWidget *lista, int linhas, int colunas)const;
    ~ListarTelefone();

private slots:
    void on_pushButton_Fechar_clicked();

private:
    Ui::ListarTelefone *ui;
};

#endif // LISTARTELEFONE_H
