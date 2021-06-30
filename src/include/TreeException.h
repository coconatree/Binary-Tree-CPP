#ifndef TREE_EXCEPTION
#define TREE_EXCEPTION

#include <iostream>
#include <string>

class TreeException : public std::exception
{

public:

    TreeException(const std::string& msg = "");
    
    ~TreeException() throw();
    
    virtual const char* what() const throw();
};

#endif