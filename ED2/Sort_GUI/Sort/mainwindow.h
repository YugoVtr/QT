#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QMessageBox>
#include <QTime>
#include <QThread>
#include "Sort.h"

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    void print();
    void reset(bool value);
    ~MainWindow();

private slots:
    void on_lineEdit_Count_returnPressed();

    void on_lineEdit_Put_returnPressed();

    void on_pushButton_Sort_clicked();

    void on_pushButton_Random_clicked();

private:
    Ui::MainWindow *ui;
    int *conjunto;
    int length;
    int used;
};

#endif // MAINWINDOW_H
