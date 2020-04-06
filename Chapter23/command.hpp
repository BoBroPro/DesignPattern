#ifndef _COMMAND_HPP
#define _COMMAND_HPP
#include"receiver.hpp"

class Command{
public:
    virtual void excute() = 0; 
protected:
    Receiver* receiver;

};

#endif