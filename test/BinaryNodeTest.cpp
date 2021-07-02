#include <iostream>

#include "../src/include/BinaryNode.h"

int main()
{
    KeyValue value00(10, 20);
    KeyValue value01(11, 21);
    KeyValue value02(12, 22);

    BinaryNode* node00 = new BinaryNode(value00);
    BinaryNode* node01 = new BinaryNode(value01);
    BinaryNode* node02 = new BinaryNode(value02);

    node00->setLeft(node01);
    node00->setRight(node02);

    std::cout << "Root node : " << *node00 << std::endl;
    std::cout << "Left node : " << *node00->getLeft() << std::endl;
    std::cout << "Right node : " << *node00->getRight() << std::endl;

    delete node00;
    delete node01;
    delete node02;
}