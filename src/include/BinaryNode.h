/**
*   TITLE: Binary Search Trees
*   AUTHOR: Emre Caniklioglu
*   ID: 21803577
*   SECTION: 1
*   ASSIGMENT: 2
*   
*   DESCRIPTION: 
*   Following is the node class for encapsulating the key value pair with
*   right and left pointers. So it can be used to create the binary search tree in 
*   the BinarySearchTree class.
*/

#ifndef TREE_NODE_H
#define TREE_NODE_H

#include "include/KeyValue.h"

// Declaring types for later use

typedef KeyValue ItemType;
typedef BinaryNode* NodePtr;

class BinaryNode
{

// Everything in this class is private because it will be only used by the binary search tree 
// class and nothing else

public:

    BinaryNode();
    BinaryNode(const ItemType& nodeItem, NodePtr left = nullptr, NodePtr right = nullptr);

    ~BinaryNode();

    ItemType _data;
    NodePtr  _lChild;
    NodePtr  _rChild;

    ItemType getData();
    NodePtr getLeft();
    NodePtr getRight();

friend std::ostream operator << (std::ostream& out, BinaryNode& node);

// Friending the binary serach class for giving it acces to the class

friend class BinarySearchTree;

};

#endif