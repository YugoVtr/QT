#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <ContaPoupanca.h>
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
    void on_pushButtonCriarConta_clicked();

    void on_pushButtonSacar_clicked();

    void on_pushButtonDepositar_clicked();

private:
    Ui::MainWindow *ui;
    SegundaLista::ContaPoupanca conta;
};

#endif // MAINWINDOW_H
