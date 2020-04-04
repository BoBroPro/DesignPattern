#include<iostream>
#include"concretecommand1.hpp"
#include"concretecommand2.hpp"
#include"receiver.hpp"
#include"invoker.hpp"

using namespace std;
int main(){
    Receiver* receiver = new Receiver();
    ConcreteCommand1* cmd1 = new ConcreteCommand1(receiver);
    ConcreteCommand2* cmd2 = new ConcreteCommand2(receiver);
    Invoker* invoker = new Invoker();
    invoker->addCmd(cmd1);
    invoker->addCmd(cmd1);
    invoker->addCmd(cmd2);
    invoker->notify();
    cout << "---------------"<< endl;
    invoker->delCmd(cmd1);
    invoker->notify();
    getchar();
    return 0;
}