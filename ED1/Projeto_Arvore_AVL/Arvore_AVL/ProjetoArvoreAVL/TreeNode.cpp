#include "TreeNode.h"

TreeNode::TreeNode(const std::string& chave, const std::string& value)
{
    this->Key   = chave;
    this->Value = value;
    this->Subtree[LEFT]  = NULL;
    this->Subtree[RIGHT] = NULL;
    this->Balance = EQUAL;
}

TreeNode::~TreeNode()
{
    delete this->Subtree[LEFT];
    delete this->Subtree[RIGHT];
}
