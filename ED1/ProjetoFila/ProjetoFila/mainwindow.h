#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QMessageBox>
#include "Fila.h"

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


    void on_pushButton_Criar_clicked();

    void on_pushButton_Inserir_clicked();

    void on_pushButton_Remover_clicked();

    void on_pushButton_Verificar_clicked();

    void on_pushButton_eVazio_clicked();

private:
    Ui::MainWindow *ui;
    ED1::Fila *doBanco;
};

#endif // MAINWINDOW_H
