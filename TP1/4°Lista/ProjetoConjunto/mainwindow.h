#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QMessageBox>
#include "Conjunto.h"
#include <QValidator>
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

private slots:
    void on_pushButton_TamanhoConjuntoA_clicked();

    void on_pushButton_InserirElementoConjuntoA_clicked();

    void on_pushButton_TamanhoConjuntoB_clicked();

    void on_pushButton_InserirElementoConjuntoB_clicked();

    void on_pushButton_Uniao_clicked();

    void on_pushButton_Intersecao_clicked();

    void on_pushButton_Diferenca_AB_clicked();

    void on_pushButton_Diferenca_BA_clicked();

    inline void on_lineEdit_TamanhoConjuntoA_returnPressed(){on_pushButton_TamanhoConjuntoA_clicked();}

    inline void on_lineEdit_InserirElementoConjuntoA_returnPressed(){on_pushButton_InserirElementoConjuntoA_clicked();}

    inline void on_lineEdit_TamanhoConjuntoB_returnPressed(){on_pushButton_TamanhoConjuntoB_clicked();}

    inline void on_lineEdit_InserirElementoConjuntoB_returnPressed(){on_pushButton_InserirElementoConjuntoB_clicked();}

    void on_pushButton_MaiorSubCadeia_Crescente_clicked();

    void on_pushButton_MaiorSubCadeia_Decrescente_clicked();

    void on_pushButton_Mais_clicked();

    void on_pushButton_Menos_clicked();

    void on_pushButton_UniaoOrdenada_clicked();

private:
    Ui::MainWindow *ui;
    QuartaLista::Conjunto *conjuntoA;
    QuartaLista::Conjunto *conjuntoB;
    QRegExpValidator *tratamentoTamanho_A;
    QRegExpValidator *tratamentoInserir_A;
    QRegExpValidator *tratamentoTamanho_B;
    QRegExpValidator *tratamentoInserir_B;

    QTableWidgetItem *eVazio_ConjuntoA;
    QTableWidgetItem *eVazio_ConjuntoB;
    QTableWidgetItem *eSub_ConjuntoA;
    QTableWidgetItem *eSub_ConjuntoB;
    QTableWidgetItem *eIdentico_ConjuntoA;
    QTableWidgetItem *eIdentico_ConjuntoB;
    QTableWidgetItem *eDisjunto_ConjuntoA;
    QTableWidgetItem *eDisjunto_ConjuntoB;
    QTableWidgetItem *amplitude_ConjuntoA;
    QTableWidgetItem *amplitude_ConjuntoB;
    QTableWidgetItem *produtoEscalarConjuntoA;
    QTableWidgetItem *produtoEscalarConjuntoB;
    QTableWidgetItem *media_Aritmetica_A;
    QTableWidgetItem *media_Aritmetica_B;
};

#endif // MAINWINDOW_H
