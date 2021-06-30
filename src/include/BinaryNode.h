#ifndef TREE_NODE_H
#define TREE_NODE_H

class BinaryNode
{

typedef int ItemType;
typedef BinaryNode* NodePtr;

private:

    BinaryNode();
    BinaryNode(const ItemType& nodeItem, NodePtr left, NodePtr right);

    ~BinaryNode();

    ItemType _data;
    NodePtr  _lChild;
    NodePtr  _rChild;

friend class BinarySearchTree;

};

#endif