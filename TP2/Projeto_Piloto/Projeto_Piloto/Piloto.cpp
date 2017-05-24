#include "Piloto.h"

namespace TP2
{
void Piloto::carregarDados(QString dados)
    {
        QStringList lista_Dados = dados.split(',');                                     //Divida os dados por virgula
        if(lista_Dados.size()!=7) throw QString("#ERRO_CLASS_PILOTO_CARREGAR_DADOS");   //Valide os dados gerados
        codigo = lista_Dados[0].toInt();                                                //Atribua os dados aos atributos
        nome = lista_Dados[1];
        pais = lista_Dados[2];
        idade = lista_Dados[3].toInt();
        equipe = lista_Dados[4];
        motor = lista_Dados[5];
        quantidadeDePontos = lista_Dados[6].toInt();
    }
}
