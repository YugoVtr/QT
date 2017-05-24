#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QThread>
#include "Fila.h"
#include "Imprimir.h"
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
    void on_pushButton_Enviar_clicked();

private:
    Ui::MainWindow *ui;
    ED1::Fila *filaDeImpressao;
    ED1::Imprimir *imprimir_Na_1;
    ED1::Imprimir *imprimir_Na_2;
    int* quantidadeParaImprimir;
};

#endif // MAINWINDOW_H
