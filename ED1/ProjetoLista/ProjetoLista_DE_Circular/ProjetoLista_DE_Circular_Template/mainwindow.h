#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "Lista_LDE_Circular.h"
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
    void armazenarLista();
    void ajustarTamanho();

private slots:
    void on_pushButton_InserirNoInicio_clicked();

    void on_pushButton_RemoverNoInicio_clicked();

    void on_pushButton_InserirNoFinal_clicked();

    void on_pushButton_RemoverNoFinal_clicked();

    void on_pushButton_InserirNaPosicao_clicked();

    void on_pushButton_RemoverNaPosicao_clicked();

    void on_pushButton_RemoverInformacao_clicked();

    void on_pushButton_AcessarInformacao_clicked();

    void on_pushButton_Tamanho_clicked();

    void on_pushButton_Vazio_clicked();

    void on_pushButton_Limpar_clicked();

private:
    Ui::MainWindow *ui;
    QString showRoster;
    ED1::Lista_LDE_Circular<QString> roster;
};

#endif // MAINWINDOW_H
