#include "include/BinarySearchTree.h"

BinarySearchTree::BinarySearchTree() : _root(nullptr) // , _lChild(nullptr), _rChild(nullptr)
{}

BinarySearchTree::BinarySearchTree(const ItemType& rootItem)
{
    this->_root = new BinaryNode(rootItem); 
}

BinarySearchTree::~BinarySearchTree()
{
    this->destroyTree(this->_root);
}

bool BinarySearchTree::insert(const ItemType key)
{

}

// Naminbg for this function should be delete.

bool BinarySearchTree::remove(const ItemType key)
{

}

NodePtr BinarySearchTree::retrive(const ItemType key)
{

}

void BinarySearchTree::inorderTraverse(ItemType*& arr, int& lenght)
{

}

int BinarySearchTree::getHeight()
{

}

int BinarySearchTree::numNodesDeeper(int level)
{

}

// Will be used to delete the tree

void BinarySearchTree::destroyTree(NodePtr& root)
{
    // Checking if it is Null or not

    if(root != nullptr)
    {
        // If it is not Null we recursively delete both right side and left side of it

        destroyTree(root->_lChild);
        destroyTree(root->_rChild);
        
        delete root;
        
        root = nullptr;
    }
}
