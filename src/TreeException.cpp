#include "include/TreeException.h"

const char* TreeException::what() const throw(){ return msg.c_str(); }

TreeException::TreeException(const std::string& message = ""): std::exception(), msg(message){};
TreeException::~TreeException() throw() {};
    