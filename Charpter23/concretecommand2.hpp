#ifndef _CONCRETECOMMAND2_HPP
#define _CONCRETECOMMAND2_HPP

#include"command.hpp"

class ConcreteCommand2:public Command{
public:
    ConcreteCommand2(Receiver* rec){
        receiver = rec;
    };
    virtual void excute()override{
        receiver->action2();
    }

};

#endif