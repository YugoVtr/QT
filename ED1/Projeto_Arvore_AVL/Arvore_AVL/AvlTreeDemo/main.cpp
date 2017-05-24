//#define DEBUG

#include <cstdlib>
#include <iostream>
#include <fstream>
#include <string>
#include <string.h>
#include "AvlTree.h"
#include "Debug.h"



// Habilitando a linha abaixo, mensagens de debug extras
//  serão geradas durante a execução do programa.
//#define DEBUG

// Define o caminho de arquivo onde a árvore será armazenada
#define PATH "arvore.bin"


using namespace std;


int main(int argc, char* argv[])
{

    // Verificações iniciais
    // -------------------------------------------------------
    if (argc < 2)
    {
        cout << "Parametros insuficientes" << endl;
        exit(1);
    }


    // Primeiro passo:
    //  Verificar se o arquivo com a árvore já existe
    // -------------------------------------------------------
    AvlTree* tree = AvlTree::Load(PATH);

    // Caso o arquivo não exista, criar uma nova árvore
    if (tree == NULL)
    {
        tree = new AvlTree();
    }


    // Segundo passo:
    //  Avaliar qual operação iremos realizar
    // -------------------------------------------------------
    // Inserir palavras de um arquivo
    // -------------------------------------------------------
    if (!strcmp(argv[1],"-i"))
    {
        ifstream stream(argv[2], ios::in);

        // Verificar se o arquivo foi aberto com sucesso
        if (stream.is_open())
        {
            string value;
            string source(argv[2]);
            while (!stream.eof())
            {
                stream >> value;
                
                if (stream.fail()) break;

                tree->Insert(value, source);
            }
            stream.close();
            cout << argv[2] << ": arquivo inserido" << endl;
        }
        else
        {
            // O arquivo não existe, ou não pôde ser carregado
            cout << argv[2] << ": arquivo nao encontrado" << endl;
        }
    }

    // Procurar uma palavra
    // -------------------------------------------------------
    else if (!strcmp(argv[1],"-p"))
    {
        string item;
        if (tree->Search(argv[2], item))
        {
            // Exibe na tela o arquivo de origem da palavra
            //  registrada na árvore.
            cout << argv[2] << ": " << item;
        }
        else
        {
            cout << "palavra nao encontrada";
        }
    }

    // Dispor a árvore na tela
    // -------------------------------------------------------
    else if (!strcmp(argv[1],"-d"))
    {
        tree->Print();
    }

    // Dispor a árvore na tela (detalhes)
    // -------------------------------------------------------
    else if (!strcmp(argv[1],"-dd"))
    {
        tree->PrintNodeDetails();
    }

    // Remover todas palavras da árvore contidas no arquivo
    // -------------------------------------------------------
    else if (!strcmp(argv[1],"-ra"))
    {
        ifstream stream;
        stream.open(argv[2], ios::in);

        // Verificar se o arquivo foi aberto com sucesso
        if (stream.is_open())
        {
            string value;
            while (!stream.eof())
            {
                // Lemos o valor da stream
                stream >> value;

                if (stream.fail())
                   break;

                tree->Remove(value);
            }
            
            stream.close();
            cout << argv[2] << ": arquivo removido" << endl;
        }
        else
        {
            // O arquivo não existe, ou não pôde ser carregado
            cout << argv[2] << ": arquivo nao encontrado" << endl;
        }
    }

    // Remover uma palavra da árvore
    // -------------------------------------------------------
    else if (!strcmp(argv[1],"-rr"))
    {
        string palavra(argv[2]);
        if (tree->Remove(palavra))
        {
            cout << palavra << ": palavra removida" << endl;
        }
        else
        {
            cout << palavra << ": palavra nao encontrada" << endl;
        }
    }

    // Limpar a árvore
    // -------------------------------------------------------
    else if (!strcmp(argv[1],"-clear"))
    {
        tree->Clear();
    }

    // Nenhuma das anteriores (parametros inválidos)
    // -------------------------------------------------------
    else
    {
        cout << "Parametros invalidos" << endl;
    }



    // Ao final de tudo, salvamos a árvore em arquivo;
    tree->Save(PATH);

    // Limpamos a sujeira,
    delete tree;

    // e saímos!
    return 0;
}


