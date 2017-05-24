#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "NumerosNaturais.h"
#include <QMessageBox>
#include <QValidator>

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
    void on_pushButtonExibir_clicked();

    void on_pushButton_clicked();

private:
    Ui::MainWindow *ui;
    QRegExpValidator *tratamento_PrimeiroNumero;
    QRegExpValidator *tratamento_SegundoNumero;
};

#endif // MAINWINDOW_H
