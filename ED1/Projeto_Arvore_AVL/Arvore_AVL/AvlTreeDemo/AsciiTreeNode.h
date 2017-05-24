#ifndef ASCIITREENODE_H_INCLUDED
#define ASCIITREENODE_H_INCLUDED

#include <iostream>

// Nó para visualização em console
//  Integrante de AsciiTreeView
struct AsciiTreeNode
{
    public:
        AsciiTreeNode()
        {
            Left = NULL;
            Right = NULL;
        }

        ~AsciiTreeNode()
        {
            delete Left;
            delete Right;
        }

        AsciiTreeNode* Left;
        AsciiTreeNode* Right;

        //length of the edge from this node to its children
        int EdgeLength;
        int Height;

        // size of label
        int lablen;

        //-1=I am left, 0=I am root, 1=right
        int parent_dir;

        //max supported unit32 in dec, 10 digits max
        char label[11];
};

#endif // ASCIITREENODE_H_INCLUDED
