#include "include/BinaryNode.h"


// Default Constructor

BinaryNode::BinaryNode(){}

// Constructor

BinaryNode::BinaryNode(const ItemType& nodeItem, NodePtr l, NodePtr r)
{
    this->_data = nodeItem;

    this->_lChild = l;
    this->_rChild = r;
}

BinaryNode::~BinaryNode(){}

BinaryNode::NodePtr BinaryNode::getLeft()
{
    return this->_lChild;
}

BinaryNode::NodePtr BinaryNode::getRight()
{
    return this->_rChild;
}

void BinaryNode::setLeft(NodePtr l)
{
    this->_lChild = l;
}

void BinaryNode::setRight(NodePtr r)
{
    this->_rChild = r;
}   

// Used for testing purposes

std::ostream& operator << (std::ostream& out, BinaryNode& obj)
{
    return out << "{ Data : "  << obj._data << " }" << std::endl;
}