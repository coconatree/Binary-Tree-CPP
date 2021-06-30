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

    bool insert(const ItemType key);
    
    // Naming for this fuction should be delete.
    
    bool remove(const ItemType key);

    NodePtr retrive(const ItemType key);

    void inorderTraverse(ItemType*& arr, int& lenght);
    
    int getHeight();
    int numNodesDeeper(int level);

private:

    void destroyTree(NodePtr& root);

    NodePtr _root;
};

#endif