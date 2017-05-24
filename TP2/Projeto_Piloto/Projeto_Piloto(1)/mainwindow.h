#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QMessageBox>
#include <QStyle>
#include <QDesktopWidget>
#include "arrayList.h"
#include "Piloto.h"
#include "OrdenarPorNome.h"
#include "OrdenarPorCodigo.h"
#include "OrdenarPorEquipe_Nome.h"
#include "OrdenarPorPais_Nome.h"
#include "OrdenarPorMotor_Equipe_Nome.h"
#include "OrdenarPorPontuacao_Idade.h"

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();
    void limparGrid()const;
    void escolherOrdem(QString ordem);
    void listar()const;

private slots:
    void on_pushButton_CarregarArquivo_clicked();

    void on_pushButton_Limpar_clicked();

    void on_pushButton_Ordenar_clicked();

private:
    Ui::MainWindow *ui;
    TP2::arrayList<TP2::Piloto> *lista_Pronta;

};

#endif // MAINWINDOW_H
