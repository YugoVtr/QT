#ifndef ASCIITREEVIEW_H
#define ASCIITREEVIEW_H

#include <string.h>
#include "AvlTree.h"
#include "AsciiTreeNode.h"

#define MAX_HEIGHT 1000
#define INFINITY (1<<20)

using namespace std;

class AsciiTreeView
{
    public:
        AsciiTreeView(AvlTree* tree);
        void Print();

    private:
        AsciiTreeNode* root;


        int lprofile[MAX_HEIGHT];
        int rprofile[MAX_HEIGHT];

        int gap;

        int print_next;


        AsciiTreeNode* build(TreeNode* t);

        void compute_edge_lengths(AsciiTreeNode* node);
        void compute_rprofile(AsciiTreeNode* node, int x, int y);
        void compute_lprofile(AsciiTreeNode* node, int x, int y);
        void print_level(AsciiTreeNode* node, int x, int level);

};

#endif // ASCIITREEVIEW_H
