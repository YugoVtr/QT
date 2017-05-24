#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "Pilha.h"
#include "QMessageBox"

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private slots:
    void on_pushButton_CriarPilha_clicked();

    void on_pushButton_inserirElemento_clicked();


    void on_pushButton_RetirarElemento_clicked();

    void on_pushButton_NumeroDeElementos_clicked();

    void on_lineEdit_TamanhodaPilhaCriada_returnPressed();

    void on_lineEdit_InserirValor_returnPressed();

private:
    Ui::MainWindow *ui;
    ED1::Pilha *duracel;
};

#endif // MAINWINDOW_H
