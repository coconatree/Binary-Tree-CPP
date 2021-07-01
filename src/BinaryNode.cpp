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

ItemType BinaryNode::getData()
{
    return this->_data;
}

NodePtr BinaryNode::getLeft()
{
    return this->_lChild;
}

NodePtr BinaryNode::getRight()
{
    return this->_rChild;
}

// Used for testing purposes

std::ostream operator << (std::ostream& out, BinaryNode& node)
{
    return out << "Data : " << node.getData() << " Left : " << obj.getLeft() << " Right : " << obj.getRight() << std::endl;
}