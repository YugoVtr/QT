#include "Imprimir.h"

namespace ED1
{
    Imprimir::Imprimir(QLabel *label_Impressora, ED1::Fila *fila, int *quantidade_Na_Fila, QLabel *quantosFaltam, QLabel *quaisFaltam)
    {
        this->label_Impressora = label_Impressora;
        this->fila = fila;
        this->quantidade_Na_Fila = quantidade_Na_Fila;
        this->quantosFaltam = quantosFaltam;
        this->quaisFaltam = quaisFaltam;
    }

    void Imprimir::run()
    {
        while(!this->fila->eVazia())
        {
            int time = this->fila->acessar().size();//Define o tempo que o texto fica na tela
            this->label_Impressora->setText(this->fila->acessar()); //Mando o texto para tela
            this->fila->remover(); //Retiro ele da fila]

            (*quantidade_Na_Fila) = (*quantidade_Na_Fila) - 1; //Menos um elemento para imprimir
            this->quantosFaltam->setText(QString::number(*quantidade_Na_Fila));//Mostro quantos elementos ainda faltam
            this->quaisFaltam->setText(fila->getFila()); // Mostro quais elemento ainda faltam

            QThread::sleep(time); //Conta o tempo que o texto esta sendo mostrado;
            this->label_Impressora->clear(); //Depois de imprimir limpo a impressora;
        }
    }
}

