#ifndef MAINWINDOW_H
#define MAINWINDOW_H
#include<dividircomtratamento.h>
#include<dividirsemtratamento.h>
#include <QMainWindow>
#include<QMessageBox>
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
    void on_pushButtonSemTratamento_clicked();

    void on_pushButtonComTratamento_clicked();

private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
