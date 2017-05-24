#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QMessageBox>
#include <QStyle>
#include <QDesktopWidget>
#include "Lista_LDE_Circular.h"
#include "Persistencia_Lista.h"
#include "PersistirPorLetra.h"
#include "QGraphicsScene"
#include "QLabel"

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

    void on_actionAbrir_triggered();

    void on_pushButton_Limpar_clicked();

    void on_comboBox_Selecao_activated(const QString &arg1);

private:
    Ui::MainWindow *ui;
    ED1::Lista_LDE_Circular<QString> *foraDeOrdem;
    ED1::Lista_LDE_Circular<ED1::Folder> *listaDeFolder;
};

#endif // MAINWINDOW_H
