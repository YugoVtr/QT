#ifndef TREENODE_H
#define TREENODE_H

#include <iostream>
#include <string>


enum Direction
{
    LEFT  = 0,
    RIGHT = 1,
    EQUAL = 2,
};

class TreeNode
{
    public:
        TreeNode(const std::string& chave, const std::string& value);

        ~TreeNode();
        unsigned short Balance;

        TreeNode* Subtree[2];

        std::string Key;
        std::string Value;
};


#endif // TREENODE_H
