#include "PersistenciaGrafo.h"

void PersistenciaGrafo::salvar(Grafo *grafo) const
{
    try
    {
        std::ofstream arquivo;
        arquivo.open(nome_No_Disco.toStdString().c_str());
        if(!arquivo.is_open()){ throw QString("Não foi possivel salvar"); }
        Matriz* gfo = grafo->toMatrix();
        QString grafoInTxt("");
        for(int linha=0;linha<gfo->getQuantidadeDeLinhas();linha++){
            for(int coluna=0;coluna<gfo->getQuantidadeDeColunas();coluna++){
                grafoInTxt += QString::number(gfo->getElemento(linha,coluna))+";";
            }
            grafoInTxt += "\n";
        }
        arquivo<<grafoInTxt.toStdString().c_str();
        delete gfo;
        arquivo.close();
    }catch(QString &erro) {throw erro;}
}

Grafo *PersistenciaGrafo::carregar() const
{
    try
    {
        std::ifstream arquivo;
        arquivo.open(nome_No_Disco.toStdString().c_str());
        if(!arquivo.is_open()){ throw QString("Erro em carregar o grafo");}

        std::string leitura;
        getline(arquivo,leitura);
        QString str = QString::fromStdString(leitura);
        QStringList cell = str.split(";");

        //========= Cria os vetices =========================
        Grafo* resultado = new Grafo();
        int verticeCount = cell.size();
        for(int vertice=0;vertice<cell.size()-1;vertice++)
        {
            resultado->createVertice(intToString(vertice));
        }
        //=========== Cria as arestas ==========================

        for(int linha=0;!arquivo.eof();linha++) //Para todas as linhas do arquivo
        {
            if(linha>=verticeCount) throw QString("Erro no arquivo");
            for(int coluna=0; coluna < cell.size()-1;coluna++) //...e todas as colunas
            {
                if(cell[coluna]=="1") //Se o valor lido entre os ';' == 1
                {
                    //Crie umas nova aresta que liga a linha i e a coluna j
                    resultado->createAresta(intToString(linha),intToString(coluna),0,true);
                }
            }
            getline(arquivo,leitura);
            str = QString::fromStdString(leitura);
            cell = str.split(";");
        }
        arquivo.close();
        return resultado;
    } catch(QString &erro) {throw erro;}
}

Matriz *PersistenciaGrafo::carregarToMatrix() const
{
    try
    {
        Grafo* grafo = this->carregar();
        Matriz* resultado = grafo->toMatrix();
        delete grafo;
        return resultado;
    }catch(QString &erro) {throw QString(erro); }
}

std::string PersistenciaGrafo::intToString(int i) const
{
    char a = (char) i+65;
    std::string b(" ");
    b[0] = a;
    return b;
}
