#ifndef CADASTROENDERECO_H
#define CADASTROENDERECO_H

#include <QDialog>
#include "QValidator"
#include <QDesktopWidget>
#include <QStyle>
#include "QMessageBox"
#include "Endereco_Persistencia.h"

namespace Ui {
class CadastroEndereco;
}

class CadastroEndereco : public QDialog
{
    Q_OBJECT

public:
    explicit CadastroEndereco(long long cpf, QList<Vitor::Endereco> *value);
    ~CadastroEndereco();

private slots:
    void on_pushButton_Cancel_clicked();

    void on_pushButton_OK_clicked();

private:
    Ui::CadastroEndereco *ui;
    long long cpf;
    QList<Vitor::Endereco> *value;
};

#endif // CADASTROENDERECO_H
