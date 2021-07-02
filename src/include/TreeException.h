#ifndef TREE_EXCEPTION
#define TREE_EXCEPTION

#include <iostream>
#include <string>

class TreeException : public std::exception
{

public:

    virtual const char* what() const throw();

    TreeException(const std::string& message = "");
    
    ~TreeException() throw();
    

private:

    std::string msg;

};

#endif