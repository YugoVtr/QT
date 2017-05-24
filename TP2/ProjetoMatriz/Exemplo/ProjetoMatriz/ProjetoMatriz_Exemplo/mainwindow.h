#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include<Matriz.h>
#include<QString>
#include<QMessageBox>
#include<QInputDialog>

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
    void on_pushButtonCriarMatA_clicked();

    void on_pushButtonApagarMatA_clicked();

    void on_pushButtonCriarMatB_clicked();

    void on_pushButtonApagarMatB_clicked();

    void on_pushButton_clicked();

private:
    Ui::MainWindow *ui;
    TP2::Matriz *matA;
    TP2::Matriz *matB;
};

#endif // MAINWINDOW_H
