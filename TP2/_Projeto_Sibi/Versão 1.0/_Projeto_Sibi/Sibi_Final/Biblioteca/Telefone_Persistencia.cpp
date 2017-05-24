#include "Telefone_Persistencia.h"
namespace Vitor
{
    void Telefone_Persistencia::incluir(Telefone &objeto) const
    {
        try
        {
            std::ofstream arquivo;
            arquivo.open(nome_No_Disco.toStdString().c_str(),std::ios::out|std::ios::app);
            if(!arquivo.is_open()){ throw QString("Erro-incluir-Telefone"); }
            arquivo<<objeto.desmontarObjeto().toStdString()+"\n";
            arquivo.close();
        }catch(QString &erro) {throw erro;}
    }

    void Telefone_Persistencia::alterar(Telefone &objeto) const
    {
        if(dados->indexOf(objeto)==-1) incluir(objeto);
        else
        {
            (*dados)[dados->indexOf(objeto)] = objeto;

            std::ofstream arquivo;
            arquivo.open(nome_No_Disco.toStdString().c_str(),std::ios::out);
            if(!arquivo.is_open()){ throw QString("Erro-alterar-Telefone");}

            for(int contador=0;contador<dados->size();contador++)
            {
                arquivo<<(*dados)[contador].desmontarObjeto().toStdString()+"\n";
            }
            arquivo.close();
        }
    }

    void Telefone_Persistencia::carregarDados()
    {
        try
        {
            std::ifstream arquivo;
            arquivo.open(nome_No_Disco.toStdString().c_str());
            if(!arquivo.is_open()){ throw QString("Erro-listagem-Telefone");}
            dados = new QList<Telefone>();
            std::string linha;
            getline(arquivo,linha);
            while(!arquivo.eof())
            {
                Telefone objeto(1,1);
                QString str = QString::fromStdString(linha);
                try
                {
                    objeto.montarObjeto(str);
                    dados->push_back(objeto);
                }catch(QString &erro) { }
                getline(arquivo,linha);
            }
            arquivo.close();
        } catch(QString &erro) {throw erro;}
    }

    QList<Telefone> Telefone_Persistencia::buscarDados(long long cpf) const
    {
        try
        {
            std::ifstream arquivo;
            arquivo.open(nome_No_Disco.toStdString().c_str());
            if(!arquivo.is_open()){ throw QString("Erro-buscarDados-Telefone");}
            QList<Telefone> lista;
            std::string linha;
            getline(arquivo,linha);
            while(!arquivo.eof())
            {
                try
                {
                    Telefone objeto(1,1);
                    QString str = QString::fromStdString(linha);
                    if(str.split(';')[0].toLongLong()==cpf)
                    {
                        objeto.montarObjeto(str);
                        lista.push_back(objeto);
                    }
                    getline(arquivo,linha);
                }catch(QString &erro) {throw erro;}
            }
            arquivo.close();
            return lista;
        }
        catch(QString &erro){throw erro; }
    }
}

