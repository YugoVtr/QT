#ifndef AVLTREE_H
#define AVLTREE_H

#include <fstream>
#include <string>
#include "TreeNode.h"

class AvlTree
{
    friend class AsciiTreeView;
    public:

        AvlTree();
        ~AvlTree();

        void Insert(const std::string& key, const std::string& value);
        bool Remove(const std::string& value);
        bool Search(const std::string& key, std::string& value);
        void Clear();
        void Print();
        void PrintNodeDetails();
        static AvlTree* Load(const char* path);
        bool Save(const char* path);

    private:
        TreeNode* root;
        void rotateTwice(TreeNode*& node, Direction dir);
        void rotateOnce (TreeNode*& node, Direction dir);
        void updateBalance  (TreeNode* tree,  Direction dir);
        void rebalanceInsert(TreeNode*& tree, Direction dir, bool& hChanged);
        void rebalanceRemove(TreeNode*& tree, Direction dir, bool& hChanged);
        void insert(const std::string& key, const std::string& value, TreeNode*& node, bool& hChanged);
        bool remove(const std::string& key, TreeNode*& node, bool& hChanged);

        bool save(std::ofstream& stream, TreeNode* node);
        void printNodeDetails(TreeNode* node);
        inline Direction opposite(Direction dir);
};

#endif
