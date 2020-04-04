#ifndef _CONCRETEHANDLER1_HPP
#define _CONCRETEHANDLER1_HPP

#include"handler.hpp"
#include<iostream>
using namespace std;

class ConcreteHandler1:public Handler{
public:
    virtual void setSuccessor(Handler* h) override {
        hdl = h;
    };
    virtual void handleRequest(int req) override {
        if(0 <= req && req < 10){
            cout << "[0,10) is handled by handler1" << endl;
        }
        else{
            if(!hdl){
                cout << "no successor found in ConcreteHandler1 object, requst can't be handled." << endl;
            }
            else{
                hdl->handleRequest(req);
            }
        }
    } ;


private:
    Handler* hdl;
};
#endif