#ifndef CADASTROUSUARIO_H
#define CADASTROUSUARIO_H

#include <QDialog>
#include <QDesktopWidget>
#include <QStyle>
#include "CadastroTelefone.h"
#include "CadastroEndereco.h"
#include "Usuario_Persistencia.h"
#include "QMessageBox"
#include "Telefone_Persistencia.h"

namespace Ui {
class CadastroUsuario;
}

class CadastroUsuario : public QDialog
{
    Q_OBJECT

public:
    explicit CadastroUsuario(QWidget *parent = 0);
    ~CadastroUsuario();

private slots:
    void on_pushButton_AdicionarTelefone_clicked();

    void on_pushButton_AdicionarEndereco_clicked();

    void on_pushButton_Cancelar_clicked();

    void on_pushButton_Cadastrar_clicked();

private:
    Ui::CadastroUsuario *ui;
    QList<Vitor::Telefone> telefones;
    QList<Vitor::Endereco> enderecos;
};

#endif // CADASTROUSUARIO_H
