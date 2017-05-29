#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QDebug>
#include <QMessageBox>
#include <QDesktopWidget>
#include <QInputDialog>
#include <QFileDialog>
#include "Grafo/Grafo.h"
#include "Matriz/Matriz.h"
#include "Persistencia/PersistenciaGrafo.h"

//Variaveis Globais
static const QString URLBLOQUEADO("../ProjetoGrafo/Arquivos/bloqueado.png");
static const QString URLDESBLOQUEADO("../ProjetoGrafo/Arquivos/desbloqueado.png");
static const QString MENSAGEM("\n Para mais informações consulte o botão de 'AJUDA'");

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

    //Metodos de exibição
    QString print_Lista();
    QString print_Matriz();

private slots:
    void on_pushButton_IncluirVertice_clicked();

    void on_pushButton_LimparVertices_clicked();

    void on_pushButton_IncluirAresta_clicked();

    void on_pushButton_PrintMatriz_clicked();

    void on_lineEdit_IncluirVertice_returnPressed(){this->on_pushButton_IncluirVertice_clicked();}

    void on_actionOpen_triggered();

    void on_actionSave_triggered();

    void on_pushButton_Print_Path_clicked();

    void on_pushButton_PrintPath_Realizar_clicked();

    void on_pushButton_CadastraMatriz_clicked();

    void on_pushButton_Information_clicked();

private:
    Ui::MainWindow *ui;
    Grafo *graph;
};

#endif // MAINWINDOW_H
