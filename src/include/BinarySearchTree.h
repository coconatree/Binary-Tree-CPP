#ifndef BINARY_TREE
#define BINARY_TREE

#include "TreeException.h"
#include "BinaryNode.h"

typedef int ItemType;
typedef BinaryNode* NodePtr;

// TODO:
//
// Delete this decleration.
// typedef void (*FunctionType)(ItemType&);
//

class BinarySearchTree
{

public:

    // Constructors and de-constructor

    BinarySearchTree();
    BinarySearchTree(const ItemType& rootItem);

    // Should add a copy constructor

    ~BinarySearchTree();

    // Class Methods

    bool insertItem(const ItemType key);
        
    bool deleteItem(const ItemType key);

    BinaryNode::NodePtr retriveItem(const KeyType key);

    void inorderTraverse(ItemType*& array, int& lenght);
    
    int getHeight();
    int numHeightBalance();
    int numNodesDeeer(int level);

private:

    void destroyTree(NodePtr& root);

    NodePtr _root;
};

#endif