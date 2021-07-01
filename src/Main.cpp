/*







*/

#include<iostream>

#include "include/KeyValue.h"

void heightAnalysis()
{
    std::cout << "Analysis has started !!!" << std::endl;

    

    std::cout << "Analysis has ended !!!" << std::endl;
}

int main()
{
    std::cout << "HELLO WORLD !!!" << std::endl;

    KeyValue obj(10, 20);

    std::cout << "Key : " << obj.getKey() << " Data : " << obj.getData() << std::endl;

    std::cout << "Validated : " << obj.validate(10) << std::endl; 
 
    return 0;
}