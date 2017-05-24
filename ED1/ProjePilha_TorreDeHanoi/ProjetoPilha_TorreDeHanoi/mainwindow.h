#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "Pilha.h"
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
    QString atualizar_Torre_Origem();
    QString atualizar_Torre_Destino();

private slots:
    void on_pushButton_CriarJogo_clicked();

    void on_pushButton_Trocar_Disco_clicked();

    void on_pushButton_Restart_clicked();


private:
    Ui::MainWindow *ui;
    ED1::Pilha *pino_1;
    ED1::Pilha *pino_2;
    ED1::Pilha *pino_3;
    QString pino1;
    QString pino2;
    QString pino3;
    int quantidade_De_Jogadas;
    ED1::Pilha *origem;
    ED1::Pilha *destino;

};

#endif // MAINWINDOW_H
