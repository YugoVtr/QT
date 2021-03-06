#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "Persistencia.h"
#include <QMessageBox>
#include <Lista.h>

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
    void on_pushButton_CarregarArquivo_clicked();

    void on_pushButton_Limpar_clicked();

private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
