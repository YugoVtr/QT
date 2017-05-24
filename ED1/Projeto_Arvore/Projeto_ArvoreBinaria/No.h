#ifndef NO_H
#define NO_H

namespace ED1
{
    template <class Tipo>
    class No
    {
        private:
            Tipo dado;

        public:
            No<Tipo> *esquerda;
            No<Tipo> *direita;

        public:
            No(Tipo dado):dado(dado),esquerda(0),direita(0){}
            ~No();
            Tipo getDado()const{return dado;}
            void setDado(Tipo dado){this->dado = dado;}
            No<Tipo>* getDireita(){return direita;}
            void setDireita(No<Tipo>* direita){this->direita = direita;}
            No<Tipo>* getEsquerda(){return esquerda;}
            void setEsquerda(No<Tipo>* esquerda){this->esquerda = esquerda;}
    };

    template <class Tipo>
    No<Tipo>::~No()
    {
        if(this->esquerda != 0) delete this->esquerda;
        if(this->direita != 0)  delete this->direita;
    }
}

#endif // NO_H
