#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <NumeroComplexo.h>
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

private slots:

    void on_pushButtonSomar_clicked();

    void on_pushButtonSubtrair_clicked();

    void on_pushButtonMultiplicar_clicked();

    void on_pushButtonDividir_clicked();

    void on_pushButtonIgualdade_clicked();

    void on_pushButtonDiferenca_clicked();

private:
    Ui::MainWindow *ui;
    SegundaLista::NumeroComplexo numeroComplexo1;
    SegundaLista::NumeroComplexo numeroComplexo2;
    SegundaLista::NumeroComplexo resultado;
    QString saida;
};

#endif // MAINWINDOW_H
