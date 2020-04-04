#include<iostream>
#include"concreteprototype1.hpp"
#include"concreteprototype2.hpp"
using namespace std;
int main(){
    ConcretePrototype1 cp1(1,2);
    ConcretePrototype1* cp1Clone = (ConcretePrototype1*)cp1.clone();
    cp1.printVal();
    cp1Clone->printVal();

    ConcretePrototype2 cp2("aaa",3);
    ConcretePrototype2* cp2Clone =(ConcretePrototype2*)cp2.clone();
    cp2.printVal();
    cp2Clone->printVal();

    getchar();
    return 0;


}