#ifndef DRAWTREEASCII_H_INCLUDED
#define DRAWTREEASCII_H_INCLUDED

#include <string.h>
#include "AvlTree.h"
#include "AsciiTreeNode.h"

#define MAX_HEIGHT 1000
#define INFINITY (1<<20)

using namespace std;


// Imprime a visualização de uma árvore binária
//  no console. Adaptada de rotinas em C, requer
//  revisão. Aceita uma AvlTree como parâmetro
class AsciiTreeView
{
    public:
        AsciiTreeView(AvlTree* tree);
        void Print();

    private:
        // Raíz da árvore de desenho
        AsciiTreeNode* root;


        int lprofile[MAX_HEIGHT];
        int rprofile[MAX_HEIGHT];

        //adjust gap between left and right nodes
        int gap;

        //used for printing next node in the same level,
        //this is the x coordinate of the next char printed
        int print_next;


        // Constrói a árvore Ascii a partir do nó t
        AsciiTreeNode* build(TreeNode* t);

        void compute_edge_lengths(AsciiTreeNode* node);
        void compute_rprofile(AsciiTreeNode* node, int x, int y);
        void compute_lprofile(AsciiTreeNode* node, int x, int y);
        void print_level(AsciiTreeNode* node, int x, int level);

};

#endif // DRAWTREEASCII_H_INCLUDED
