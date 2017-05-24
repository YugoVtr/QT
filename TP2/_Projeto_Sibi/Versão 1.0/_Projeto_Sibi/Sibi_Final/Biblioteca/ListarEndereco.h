#ifndef LISTARENDERECO_H
#define LISTARENDERECO_H

#include <QDialog>
#include "ListarUsuario.h"
#include "QTableWidget"
#include "Endereco_Persistencia.h"

namespace Ui {
class ListarEndereco;
}

class ListarEndereco : public QDialog
{
    Q_OBJECT

public:
    explicit ListarEndereco(long long cpf);
    void limparGrid()const;
    void alinhamento(QTableWidget *lista, int linhas, int colunas)const;
    ~ListarEndereco();

private slots:
    void on_pushButton_Fechar_clicked();

private:
    Ui::ListarEndereco *ui;
};

#endif // LISTARENDERECO_H
