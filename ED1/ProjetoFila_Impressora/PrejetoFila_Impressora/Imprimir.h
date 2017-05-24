#ifndef IMPRIMIR_H
#define IMPRIMIR_H
#include <QtCore>
#include <QLabel>
#include "ui_mainwindow.h"
#include "Fila.h"
#include <QObject>

namespace ED1
{
    class Imprimir : public QThread
    {
        Q_OBJECT

    private:
        QLabel *label_Impressora;
        ED1::Fila *fila;
        int *quantidade_Na_Fila;
        QLabel *quantosFaltam;
        QLabel *quaisFaltam;

    public:
        Imprimir(QLabel *label_Impressora, Fila *fila, int *quantidade_Na_Fila, QLabel *quantosFaltam , QLabel *quaisFaltam);

    protected:
        void run();
    };
}


#endif // IMPRIMIR_H
