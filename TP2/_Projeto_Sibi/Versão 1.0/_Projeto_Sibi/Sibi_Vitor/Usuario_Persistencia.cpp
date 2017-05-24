#include "Usuario_Persistencia.h"
namespace Vitor
{
    void Usuario_Persistencia::incluir(Usuario &objeto) const
    {
        try
        {
            std::ofstream arquivo;
            arquivo.open(nome_No_Disco.toStdString().c_str(),std::ios::out|std::ios::app);
            if(!arquivo.is_open()){ throw QString("Erro-incluir-Usuario");}
            if(dados->indexOf(objeto)!=-1) {throw QString("Usuario já existe");}
            arquivo<<objeto.desmontarObjeto().toStdString()+"\n";
            arquivo.close();
        }catch(QString &erro) {throw erro;}
    }

    void Usuario_Persistencia::alterar(Usuario &objeto) const
    {
        if(dados->indexOf(objeto)==-1) throw QString("Usuario não cadastrado");
        (*dados)[dados->indexOf(objeto)] = objeto;

        std::ofstream arquivo;
        arquivo.open(nome_No_Disco.toStdString().c_str(),std::ios::out);
        if(!arquivo.is_open()){ throw QString("Erro-alterar-Usuario");}

        for(int contador=0;contador<dados->size();contador++)
        {
            arquivo<<(*dados)[contador].desmontarObjeto().toStdString()+"\n";
        }
        arquivo.close();
    }

    void Usuario_Persistencia::carregarDados()
    {
        try
        {
            std::ifstream arquivo;
            arquivo.open(nome_No_Disco.toStdString().c_str());
            if(!arquivo.is_open()){ throw QString("Erro-listagem-Usuario");}
            dados = new QList<Usuario>();
            std::string linha;
            getline(arquivo,linha);
            while(!arquivo.eof())
            {
                Usuario objeto;
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
}

