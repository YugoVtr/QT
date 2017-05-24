#ifndef CADASTROTELEFONE_H
#define CADASTROTELEFONE_H

#include <QDialog>
#include "QValidator"
#include <QDesktopWidget>
#include <QStyle>
#include "QMessageBox"
#include "Telefone_Persistencia.h"

namespace Ui {
class CadastroTelefone;
}

class CadastroTelefone : public QDialog
{
    Q_OBJECT

public:
    explicit CadastroTelefone(long long cpf, QList<Vitor::Telefone> *value);
    ~CadastroTelefone();

private slots:
    void on_pushButton_Cancel_clicked();

    void on_pushButton_OK_clicked();

private:
    Ui::CadastroTelefone *ui;
    long long cpf;
    QList<Vitor::Telefone> *value;
};

#endif // CADASTROTELEFONE_H
