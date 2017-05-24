#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QFileDialog>
#include <QString>
#include <QMessageBox>
//Biblioteca para tratamento de arquivos
#include<fstream>


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
    void on_pushButtonAbrirArquivo_clicked();

    void on_pushButtonCriarNovoArquivo_clicked();

    void on_pushButtonLimparCaixa_clicked();

    void on_pushButtonIncluirNoFinal_clicked();

private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
