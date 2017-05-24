#ifndef MAINWINDOW_H
#define MAINWINDOW_H
#include<Pilha.h>
#include<QMessageBox>
#include <QMainWindow>

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
    void on_pushButtonEmpilhar_clicked();

    void on_pushButtonMostrarDados_clicked();

private:
    Ui::MainWindow *ui;
    TP2::Pilha<int> objPilha;
};

#endif // MAINWINDOW_H
