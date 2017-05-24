#include "mainwindow.h"
#include "ui_mainwindow.h"


MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow),
    conjunto(0),
    length(0),
    used(0)
{
    ui->setupUi(this);
    reset(false);
}

void MainWindow::print()
{
    ui->textEdit_Out->clear();
    QString saida = "";
    for(int i=0;i<used;i++) saida+= QString::number(conjunto[i]) + "\n";
    ui->textEdit_Out->setText(saida);
    ui->lineEdit_Put->clear();
}

void MainWindow::reset(bool value)
{
    ui->lineEdit_Count->setEnabled(!value);
    ui->lineEdit_Put->setEnabled(value);
    ui->comboBox_Options->setEnabled(value);
    ui->pushButton_Random->setEnabled(value);
    ui->pushButton_Sort->setEnabled(value);
}

MainWindow::~MainWindow()
{
    if(conjunto) delete[] conjunto;
    delete ui;
}

void MainWindow::on_lineEdit_Count_returnPressed()
{
    if(conjunto) delete[] conjunto;
    int size = ui->lineEdit_Count->text().toInt();
    conjunto = new int[size];
    length = size;
    used = 0 ;
    ui->lineEdit_Count->clear();
    reset(true);
}

void MainWindow::on_lineEdit_Put_returnPressed()
{
    if(used<length) conjunto[used++]= ui->lineEdit_Put->text().toInt();
    print();
}

bool comparar(int a , int b){return a<=b;}
void MainWindow::on_pushButton_Sort_clicked()
{
    try
    {
        if(used<length) throw QString("Complete o conjunto") ;
        bool(*compare)(int,int) = &comparar;
        char selected = ui->comboBox_Options->currentText().toStdString()[0];
        switch (selected)
        {
            case 'B':
                ED2::Sort<int>::bubble_Sort(conjunto,length, (*compare));
                break;
            case 'H':
                ED2::Sort<int>::heap_Sort(conjunto,length, (*compare));
                break;
            case 'I':
                ED2::Sort<int>::insert_Sort(conjunto,length, (*compare));
                break;
            case 'M':
                ED2::Sort<int>::merge_Sort(conjunto,length, (*compare));
                break;
            case 'Q':
                ED2::Sort<int>::quick_Sort(conjunto,length, (*compare));
                break;
            case 'S':
                ED2::Sort<int>::selection_Sort(conjunto,length, (*compare));
                break;

            default:
                break;
        }
        print();
        reset(false);
    } catch (QString &erro) { QMessageBox::information(this,"Incompleto",erro);  }
}

void MainWindow::on_pushButton_Random_clicked()
{
    const int l = 100;
    qsrand(QTime::currentTime().second());
    for(int i=used;i<length;i++)
    {
        conjunto[i] = qrand() % l;
    }
    used = length;
    print();
}
