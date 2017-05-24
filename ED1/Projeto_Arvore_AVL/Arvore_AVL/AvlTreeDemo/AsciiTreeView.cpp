#include <cstdlib>
#include <sstream>
#include "AsciiTreeView.h"

using namespace std;


// Constructor & Destructor
//------------------------------------------------------
AsciiTreeView::AsciiTreeView(AvlTree* tree)
{
  if (tree == NULL || tree->root == NULL)
  {
     this->root = NULL;
     return;
  }

  this->root = build(tree->root);
  this->root->parent_dir = 0;
  this->gap = 3;
}

AsciiTreeNode* AsciiTreeView::build(TreeNode* t)
{
  AsciiTreeNode* node;

  if (t == NULL)
    return NULL;

  node = new AsciiTreeNode();
  node->Left =  build(t->Subtree[LEFT]);
  node->Right = build(t->Subtree[RIGHT]);

  if (node->Left != NULL)
      node->Left->parent_dir = -1;

  if (node->Right != NULL)
      node->Right->parent_dir = 1;

  ostringstream oss;
  oss << t->Key;
  strcpy(node->label, oss.str().c_str());
  node->lablen = strlen(node->label);

  return node;
}



//The following function fills in the lprofile array for the given tree.
//It assumes that the center of the label of the root of this tree
//is located at a position (x,y).  It assumes that the edge_length
//fields have been computed for this tree.
void AsciiTreeView::compute_lprofile(AsciiTreeNode* node, int x, int y)
{
  int i, isleft;
  if (node == NULL) return;
  isleft = (node->parent_dir == -1);
  lprofile[y] = min(lprofile[y], x-((node->lablen-isleft)/2));
  if (node->Left != NULL)
  {
	  for (i=1; i <= node->EdgeLength && y+i < MAX_HEIGHT; i++)
    {
	    lprofile[y+i] = min(lprofile[y+i], x-i);
    }
  }
  compute_lprofile(node->Left, x-node->EdgeLength-1, y+node->EdgeLength+1);
  compute_lprofile(node->Right, x+node->EdgeLength+1, y+node->EdgeLength+1);
}

void AsciiTreeView::compute_rprofile(AsciiTreeNode* node, int x, int y)
{

  if (node == NULL)
    return;

  bool notleft = (node->parent_dir != -1);
  rprofile[y] = max(rprofile[y], x+((node->lablen-notleft)/2));

  if (node->Right != NULL)
  {
    for (int i = 1; i <= node->EdgeLength && y+i < MAX_HEIGHT; i++)
    {
	    rprofile[y+i] = max(rprofile[y+i], x+i);
    }
  }

  compute_rprofile(node->Left, x-node->EdgeLength-1, y+node->EdgeLength+1);
  compute_rprofile(node->Right, x+node->EdgeLength+1, y+node->EdgeLength+1);
}

//This function fills in the edge_length and
//height fields of the specified tree
void AsciiTreeView::compute_edge_lengths(AsciiTreeNode* node)
{
  int h, hmin, delta;
  if (node == NULL) return;
  compute_edge_lengths(node->Left);
  compute_edge_lengths(node->Right);

  /* first fill in the edge_length of node */
  if (node->Right == NULL && node->Left == NULL)
  {
	  node->EdgeLength = 0;
  }
  else
  {
    if (node->Left != NULL)
    {
      for (int i=0; i<node->Left->Height && i < MAX_HEIGHT; i++)
      {
		    rprofile[i] = -INFINITY;
	  }
	    compute_rprofile(node->Left, 0, 0);
	    hmin = node->Left->Height;
    }
    else
    {
	    hmin = 0;
    }

	if (node->Right != NULL)
    {
	  for (int i = 0; i<node->Right->Height && i < MAX_HEIGHT; i++)
      {
		  lprofile[i] = INFINITY;
      }
	  compute_lprofile(node->Right, 0, 0);
	  hmin = min(node->Right->Height, hmin);
    }
    else
    {
	    hmin = 0;
    }

	delta = 4;
	for (int i = 0; i < hmin; i++)
    {
	    delta = max(delta, gap + 1 + rprofile[i] - lprofile[i]);
    }

    //If the node has two children of height 1, then we allow the
    //two leaves to be within 1, instead of 2
	  if (((node->Left != NULL && node->Left->Height == 1) ||
	      (node->Right != NULL && node->Right->Height == 1))&&delta>4)
    {
      delta--;
    }

    node->EdgeLength = ((delta+1)/2) - 1;
  }

  //now fill in the height of node
  h = 1;
  if (node->Left != NULL)
  {
	  h = max(node->Left->Height + node->EdgeLength + 1, h);
  }
  if (node->Right != NULL)
  {
	  h = max(node->Right->Height + node->EdgeLength + 1, h);
  }
  node->Height = h;
}

//This function prints the given level of the given tree, assuming
//that the node has the given x cordinate.
void AsciiTreeView::print_level(AsciiTreeNode* node, int x, int level)
{

  if (node == NULL)
    return;

  bool isleft = (node->parent_dir == -1);
  int i;

  if (level == 0)
  {

    for (i=0; i < (x-print_next-((node->lablen-isleft)/2)); i++)
    {
        printf(" ");
    }
    print_next += i;
    printf("%s", node->label);
    print_next += node->lablen;
  }
  else if (node->EdgeLength >= level)
  {
	if (node->Left != NULL)
    {
	    for (i=0; i<(x-print_next-(level)); i++)
        {
	    	 printf(" ");
        }
	    print_next += i;
	    printf("/");
	    print_next++;
    }
	if (node->Right != NULL)
    {
	  for (i = 0; i < (x-print_next+(level)); i++)
      {
		    printf(" ");
      }
	  print_next += i;
	  printf("\\");
	  print_next++;
    }
  }
  else
  {
	  this->print_level(node->Left,
                x-node->EdgeLength-1,
                level-node->EdgeLength-1);
	  this->print_level(node->Right,
                x+node->EdgeLength+1,
                level-node->EdgeLength-1);
  }
}

//prints ascii tree for given Tree structure
void AsciiTreeView::Print()
{
  int xmin;

  if (this->root == NULL)
    return;

  compute_edge_lengths(this->root);
  for (int i = 0; i < this->root->Height && i < MAX_HEIGHT; i++)
  {
	  lprofile[i] = INFINITY;
  }
  compute_lprofile(this->root, 0, 0);
  xmin = 0;
  for (int i = 0; i < this->root->Height && i < MAX_HEIGHT; i++)
  {
	  xmin = min(xmin, lprofile[i]);
  }
  for (int i = 0; i < this->root->Height; i++)
  {
	  print_next = 0;
	  print_level(this->root, -xmin, i);
	  printf("\n");
  }
  if (this->root->Height >= MAX_HEIGHT)
  {
	  printf("(This tree is taller than %d, and may be drawn incorrectly.)\n", MAX_HEIGHT);
  }
}
