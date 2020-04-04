#ifndef _CONCRETEHANDLER2_HPP
#define _CONCRETEHANDLER2_HPP

#include"handler.hpp"
#include<iostream>
using namespace std;

class ConcreteHandler2:public Handler{
public:
    virtual void setSuccessor(Handler* h) override {
        hdl = h;
    };
    virtual void handleRequest(int req) override {
        if(10 <= req && req < 20){
            cout << "[10,20) is handled by handler2" << endl;
        }
        else{
            if(!hdl){
                cout << "no successor found in ConcreteHandler2 object, requst can't be handled." << endl;
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