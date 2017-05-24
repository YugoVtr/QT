#ifndef LISTARUSUARIO_H
#define LISTARUSUARIO_H

#include <QMainWindow>
#include "CadastroUsuario.h"
#include "QApplication"
#include <QDesktopWidget>
#include <QStyle>
#include "QTableWidget"
#include "ListarTelefone.h"
#include "ListarEndereco.h"
#include "QDate"
#include "frmJanelaPrincipal.h"

namespace Ui {
class ListarUsuario;
}

class ListarUsuario : public QMainWindow
{
    Q_OBJECT

public:
    explicit ListarUsuario(QWidget *parent = 0);
    void limparGrid()const;
    void alinhamento(QTableWidget *lista, int linhas, int colunas)const;
    ~ListarUsuario();

private slots:

    void on_action_Novo_Cadastro_triggered();

    void on_actionSair_triggered(){this->close();}

    void on_actionLimpar_triggered(){limparGrid();}

    void on_action_Consultar_Cadastros_triggered();

    void on_tableWidget_Usuarios_cellClicked(int row, int column);

    void on_pushButton_AlterarCadastro_clicked();

private:
    Ui::ListarUsuario *ui;
};

#endif // LISTARUSUARIO_H
