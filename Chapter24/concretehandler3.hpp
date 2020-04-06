#ifndef _CONCRETEHANDLER3_HPP
#define _CONCRETEHANDLER3_HPP

#include"handler.hpp"
#include<iostream>
using namespace std;

class ConcreteHandler3:public Handler{
public:
    virtual void setSuccessor(Handler* h) override {
        hdl = h;
    };
    virtual void handleRequest(int req) override {
        if(20 <= req && req < 30){
            cout << "[20,30) is handled by handler3" << endl;
        }
        else{
            if(!hdl){
                cout << "no successor found in ConcreteHandler3 object, requst can't be handled." << endl;
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