#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "QDebug"
#include "Persistencia.h"
#include "QMessageBox"
#include "QFileDialog"
#include "stack"

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
    void listar(std::queue<ED1::Item> *fila);
private slots:
    void on_actionABRIR_triggered();

    void on_pushButton_Crescente_clicked();

    void on_pushButton_Decrescente_clicked();

    void on_pushButton_PreOrdem_clicked();

    void on_pushButton_EmOrdem_clicked();

    void on_pushButton_PosOrdem_clicked();

    void on_actionLIMPAR_triggered();

    void on_actionFECHAR_triggered();

    void on_lineEdit_Buscar_returnPressed();

private:
    Ui::MainWindow *ui;
    ED1::ArvoreBinaria<ED1::Item> *tree;
};

#endif // MAINWINDOW_H
