#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "Lista_Template.h"
#include <QMessageBox>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();
    void ajustarTamanho();

private slots:
    void on_pushButton_CriarComTamanho_clicked();

    void on_pushButton_CriarComDefalt_clicked();

    void on_pushButton_RemoverTodosElementos_clicked();

    void on_pushButton_IncluirNoFim_clicked();

    void on_pushButton_IncluirNoInicio_clicked();

    void on_pushButton_IncluirNaPosicao_clicked();

    void on_pushButton_BuscarElemento_clicked();

    void on_pushButton_ObterElemento_clicked();

    void on_pushButton_eVazia_clicked();

    void on_pushButton_RemoverNaPosicao_clicked();

    void on_pushButton_RemoverElementoEspecifico_clicked();

    void on_pushButton_SubstituirElemento_clicked();

    void on_pushButton_QuantidadeDeElementos_clicked();

private:
    Ui::MainWindow *ui;
    TP2::Lista_Template<int> *start; //AQUI
};

#endif // MAINWINDOW_H
