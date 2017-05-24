#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QMessageBox>
#include <Calculadora.h>

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

    void on_pushButtonAdicionar_clicked();

    void on_pushButtonSubtrair_clicked();

    void on_pushButtonDividir_clicked();

    void on_pushButtonMutiplicar_clicked();

    void on_pushButtonPotencia_clicked();

    void on_pushButtonRaiz_clicked();

private:
    Ui::MainWindow *ui;
    SegundaLista::Calculadora resultado;
    QString visor;
};

#endif // MAINWINDOW_H
