#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "Persistencia_Pilha.h"
#include <QMessageBox>
#include "Pilha.h"
#include <QStyle>
#include <QDesktopWidget>

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
