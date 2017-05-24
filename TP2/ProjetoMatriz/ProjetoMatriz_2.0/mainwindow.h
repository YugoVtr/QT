#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "Matriz.h"
#include <QMessageBox>
#include <QInputDialog>
#include <QTableWidget>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();
    void imprimir_Valores_Na_Gride();
    void limpar_Gride();
    void imprimirMatriz(Ferias::Matriz *matriz, QTableWidget *tabela)const;
    void ajustarTabela(QTableWidget *tabela)const;
    void destruirMatriz(QTableWidget *tabela);

private slots:
    void on_pushButton_Criar_Matriz_1_clicked();

    void on_pushButton_Limpar_Matriz_1_clicked();

    void on_pushButton_Criar_Matriz_2_clicked();

    void on_pushButton_Limpar_Matriz_2_clicked();

    void on_pushButton_Adicao_clicked();

    void on_pushButton_Subtracao_clicked();

    void on_pushButton_Multiplicacao_clicked();

    void on_pushButton_Transposta_Matriz_1_clicked();

    void on_pushButton_Transposta_Matriz_2_clicked();

    void on_pushButton_Potenciacao_Matriz_1_clicked();

    void on_pushButton_MultiplicarPorConstante_Matriz_1_clicked();

    void on_pushButton_Potenciacao_Matriz_2_clicked();

    void on_pushButton_MultiplicarPorConstante_Matriz_2_clicked();

private:
    Ui::MainWindow *ui;
    Ferias::Matriz *matriz_1;
    Ferias::Matriz *matriz_2;

    //Itens para gride
    QTableWidgetItem *triangularSuperior_matriz_1;
    QTableWidgetItem *triangularSuperior_matriz_2;
    QTableWidgetItem *triangularInferior_matriz_1;
    QTableWidgetItem *triangularInferior_matriz_2;
    QTableWidgetItem *simetrica_matriz_1;
    QTableWidgetItem *simetrica_matriz_2;
    QTableWidgetItem *identidade_matriz_1;
    QTableWidgetItem *identidade_matriz_2;
    QTableWidgetItem *iguais_matriz_1;
    QTableWidgetItem *iguais_matriz_2;
    QTableWidgetItem *diferentes_matriz_1;
    QTableWidgetItem *diferentes_matriz_2;
    QTableWidgetItem *ortogonal_matriz_1;
    QTableWidgetItem *ortogonal_matriz_2;
    QTableWidgetItem *permutacao_matriz_1;
    QTableWidgetItem *permutacao_matriz_2;

};

#endif // MAINWINDOW_H
