#ifndef _MYCONTEXT_HPP
#define _MYCONTEXT_HPP

#include"myconcretestatea.hpp"

class MyContext{
public:

    MyContext(MyConcreteStateA* s):state(s){

   }
    void update(){
        state = state->handle();
    }
    MyState* getState(){
        return state;
    }
private:
    MyState* state;
};

#endif