#ifndef INTERFACE_PILOTO_H
#define INTERFACE_PILOTO_H

namespace TP2
{
    class Interface_Piloto
    {
        public:
            virtual ~Interface_Piloto(){}                       //Classe polimorfica tem destrutor virtual
            virtual void carregarDados(QString dados)=0;        //O piloto deve possuir o carregar dados
    };
}


#endif // INTERFACE_PILOTO_H
