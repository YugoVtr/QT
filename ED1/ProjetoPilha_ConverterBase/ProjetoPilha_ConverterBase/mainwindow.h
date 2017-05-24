#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "Pilha.h"
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
    void on_pushButton_EnviarValor_clicked();

    void on_lineEdit_ValorParaEnviar_returnPressed(){this->on_pushButton_EnviarValor_clicked();}//Apertar enter na lineEdit

private:
    Ui::MainWindow *ui;
    QRegExpValidator *tratamento_Valor;
};

#endif // MAINWINDOW_H
