#include<iostream>
#include"concretehandler1.hpp"
#include"concretehandler2.hpp"
#include"concretehandler3.hpp"

using namespace std;

int main(){
    ConcreteHandler1* conHdl1 =  new ConcreteHandler1();
    ConcreteHandler2* conHdl2 =  new ConcreteHandler2();
    ConcreteHandler3* conHdl3 =  new ConcreteHandler3();

    conHdl1->setSuccessor(conHdl2);
    conHdl2->setSuccessor(conHdl3);
    conHdl3->setSuccessor(nullptr);

    int req = 5;
    conHdl1->handleRequest(req);

    req = 15;
    conHdl1->handleRequest(req);

    req = 25;
    conHdl1->handleRequest(req);

    req = 35;
    conHdl1->handleRequest(req);

    getchar();
    return 0;
}