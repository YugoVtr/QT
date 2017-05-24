#ifndef ASCIITREENODE_H
#define ASCIITREENODE_H

#include <iostream>

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

        int EdgeLength;
        int Height;

        int lablen;

        int parent_dir;

        char label[11];
};



#endif // ASCIITREENODE_H
