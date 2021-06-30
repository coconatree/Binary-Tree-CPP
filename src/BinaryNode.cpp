#include "include/BinaryNode.h"


// Default Constructor

BinaryNode::BinaryNode(){}

// Constructor

BinaryNode::BinaryNode(const ItemType& nodeItem, NodePtr left = nullptr, NodePtr right = nullptr)
{
    this->_data = nodeItem;

    this->_lChild = left;
    this->_rChild = right;
}

BinaryNode::~BinaryNode(){}
