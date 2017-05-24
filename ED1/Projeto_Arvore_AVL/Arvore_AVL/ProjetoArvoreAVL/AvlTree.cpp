#include "AvlTree.h"


#include <iostream>
#include <string>
#include <fstream>
#include "AvlTree.h"
#include "AsciiTreeView.h"
//#include "Debug.h"
using namespace std;

AvlTree::AvlTree()
{
    this->root = NULL;
}

AvlTree::~AvlTree()
{
    this->Clear();
}
void AvlTree::Clear()
{
    delete root;
    this->root = NULL;
}

bool AvlTree::Search(const string& chave, string& value)
{
    TreeNode* current = this->root;
    while (current != NULL)
    {
        if (chave > current->Key)
        {
            current = current->Subtree[RIGHT];
        }
        else if (chave < current->Key)
        {
            current = current->Subtree[LEFT];
        }
        else
        {
            value = current->Value;
            return true;
        }
    }

    return false;
}
void AvlTree::rotateOnce(TreeNode*& node, Direction dir)
{
    int opposite = this->opposite(dir);

    TreeNode* child = node->Subtree[dir];
    node->Subtree[dir] = child->Subtree[opposite];
    child->Subtree[opposite] = node;

    node = child;
}
void AvlTree::rotateTwice(TreeNode*& node, Direction dir)
{
    int opposite = this->opposite(dir);

    TreeNode* child = node->Subtree[dir]->Subtree[opposite];
    node->Subtree[dir]->Subtree[opposite] = child->Subtree[dir];
    child->Subtree[dir] = node->Subtree[dir];
    node->Subtree[dir] = child;
    child = node->Subtree[dir];
    node->Subtree[dir] = child->Subtree[opposite];
    child->Subtree[opposite] = node;

    node = child;
}

void AvlTree::updateBalance(TreeNode* node, Direction dir)
{
    int opposite = this->opposite(dir);

    int bal = node->Subtree[dir]->Subtree[opposite]->Balance;
    if (bal == dir)
    {
        node->Balance = EQUAL;
        node->Subtree[dir]->Balance = opposite;
    }
    else if (bal == opposite)
    {
        node->Balance = dir;
        node->Subtree[dir]->Balance = EQUAL;
    }

    else
    {
        node->Balance = node->Subtree[dir]->Balance = EQUAL;
    }

    node->Subtree[dir]->Subtree[opposite]->Balance = EQUAL;
}

void AvlTree::rebalanceInsert(TreeNode*& node, Direction dir,
                              bool& hChanged)
{
    int opposite = this->opposite(dir);

    if (node->Balance == dir)
    {
        if (node->Subtree[dir]->Balance == dir)
        {
            node->Subtree[dir]->Balance = 2;
            node->Balance = EQUAL;

            rotateOnce(node, dir);
        }
        else
        {
            updateBalance(node, dir);
            rotateTwice(node, dir);
        }

        hChanged = false;
    }

    else if (node->Balance == opposite)
    {
        node->Balance = 2;
        hChanged = false;
    }

    else
    {
        node->Balance = dir;
    }
}

void AvlTree::rebalanceRemove(TreeNode*& node, Direction dir,
                              bool& hChanged)
{
    Direction opposite = this->opposite(dir);
    if (node->Balance == dir)
    {
        node->Balance = EQUAL;
    }

    else if (node->Balance == opposite)
    {

        if (node->Subtree[opposite]->Balance == opposite)
        {
            node->Subtree[opposite]->Balance = EQUAL;
            node->Balance = EQUAL;
            rotateOnce(node, opposite);
        }
        else if (node->Subtree[opposite]->Balance == EQUAL)
        {
            node->Subtree[opposite]->Balance = dir;
            rotateOnce(node, opposite);
        }
        else
        {
            updateBalance(node, opposite);
            rotateTwice(node, opposite);
        }

        hChanged = false;
    }
    else
    {
        node->Balance = opposite;
        hChanged = false;
    }
}

void AvlTree::Insert(const string& chave, const string& value)
{
    bool hChanged = false; // Para passagem por referÍncia

    this->insert(chave, value, this->root, hChanged);
}


void AvlTree::insert(const string& chave, const string& value,
                        TreeNode*& node, bool& hChanged)
{
    if (node == NULL)
    {
        node = new TreeNode(chave, value);
        hChanged = true;
    }

    else if (node->Key == chave)
    {
        return;
    }

    else
    {

        Direction dir = (chave > node->Key) ? RIGHT : LEFT;

        hChanged = false;
        insert(chave, value, node->Subtree[dir], hChanged);


        if (hChanged)
        {

            this->rebalanceInsert(node, dir, hChanged);
        }
    }
}


bool AvlTree::Remove(const string& palavra)
{
    bool hChanged = false;


    return this->remove(palavra, this->root, hChanged);
}


bool AvlTree::remove(const string& chave, TreeNode*& node,
                     bool& hChanged)
{

    bool success = false;


    if (node == NULL)
    {
        hChanged = false;
        return false;
    }

    else if (chave == node->Key)
    {


        if (node->Subtree[LEFT] != NULL && node->Subtree[RIGHT] != NULL )
        {

            TreeNode* substitute = node->Subtree[LEFT];

            while (substitute->Subtree[RIGHT] != NULL)
            {
                substitute = substitute->Subtree[RIGHT];
            }

            node->Key   = substitute->Key;

            success = remove(node->Key, node->Subtree[LEFT], hChanged);

            if (hChanged)
            {
                rebalanceRemove(node, LEFT, hChanged);
            }
        }

        else
        {

            TreeNode* temp = node;

            Direction dir = (node->Subtree[LEFT] == NULL) ? RIGHT : LEFT;

            node = node->Subtree[dir];

            temp->Subtree[LEFT]  = NULL;
            temp->Subtree[RIGHT] = NULL;
            delete temp;

            hChanged = true;
        }

        return true;
    }

    else
    {
        Direction dir = (chave > node->Key) ? RIGHT : LEFT;

        if (node->Subtree[dir] != NULL)
        {
            success = this->remove(chave, node->Subtree[dir], hChanged);
        }
        else
        {
            hChanged = false;
            return false;
        }

        if (hChanged) // Se a altura mudou,
        {
            this->rebalanceRemove(node, dir, hChanged);
        }

        return success;
    }
}

void AvlTree::Print()
{
    if (this->root != NULL)
    {
        AsciiTreeView treeView(this);

        treeView.Print();
    }
    else
    {
        cout << "Arvore vazia" << endl;
    }
}

void AvlTree::PrintNodeDetails()
{
    this->printNodeDetails(this->root);
}

void AvlTree::printNodeDetails(TreeNode* node)
{
    if (node != NULL)
    {
        this->printNodeDetails(node->Subtree[LEFT]);
        cout << "Node Key: "  << node->Key     << endl;
        cout << "- Origem: "  << node->Value   << endl;
        cout << "- Balance: " << node->Balance << endl;
        if (node->Subtree[LEFT] != NULL)
        cout << "- Left: "  << node->Subtree[LEFT]->Key << endl;
        if (node->Subtree[RIGHT] != NULL)
        cout << "- Right: " << node->Subtree[RIGHT]->Key << endl;

        cout << endl;
        this->printNodeDetails(node->Subtree[RIGHT]);
    }
}

AvlTree* AvlTree::Load(const char* path)
{
    ifstream stream(path);

    if (stream.is_open())
    {
        AvlTree* tree = new AvlTree();

        string chave, value;
        while (!stream.eof())
        {
            stream >> chave;
            stream >> value;

            if (stream.fail()) break;


            tree->Insert(chave, value);
        }
        stream.close();
        return tree;
    }

    return NULL;
}

bool AvlTree::Save(const char* path)
{
    if (this->root == NULL)
    {
        std::remove(path);
        return true;
    }

    ofstream stream(path);

    if (stream.is_open())
    {
        this->save(stream, this->root);
        stream.close();

        return true;
    }
    else
    {
        return false;
    }
}

bool AvlTree::save(ofstream& stream, TreeNode* node)
{
    if (stream.is_open())
    {
        if (node != NULL)
        {

            stream << node->Key   << endl;
            stream << node->Value << endl;

            this->save(stream, node->Subtree[LEFT]);
            this->save(stream, node->Subtree[RIGHT]);
        }
        return true;
    }
    else return false;
}

inline Direction AvlTree::opposite(Direction dir)
{
    return (dir == RIGHT) ? LEFT : RIGHT;
}
