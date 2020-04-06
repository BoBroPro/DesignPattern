#ifndef _ADAPTER_HPP
#define _ADAPTER_HPP

#include"target.hpp"
#include"adaptee.hpp"

class Adapter:public Target{
public:
    Adapter(Adaptee*adaptee):adaptee(adaptee){}

    virtual int request() override {
        if(adaptee->SpecificRequest() == "One"){
            return 1;
        }

    }    
private:
    Adaptee* adaptee;
};

#endif