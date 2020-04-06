#ifndef _CONCRETECOMMAND1_HPP
#define _CONCRETECOMMAND1_HPP

#include"command.hpp"

class ConcreteCommand1:public Command{
public:
    ConcreteCommand1(Receiver* rec){
        receiver = rec;
    }

    virtual void excute()override{
         receiver->action1();
     }

};

#endif