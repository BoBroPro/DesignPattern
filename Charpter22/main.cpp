#include<iostream>

#include"concreteimplementora.hpp"
#include"concreteimplementorb.hpp"
#include"refinedabstraction.hpp"

using namespace std;
int main(){
    ConcreteImplementorA* impA = new ConcreteImplementorA();
    ConcreteImplementorB* impB = new ConcreteImplementorB();
    RefinedAbstraction* refinedAbsA = new RefinedAbstraction(impA);
    refinedAbsA->myOperation();

    RefinedAbstraction* refinedAbsB = new RefinedAbstraction(impB);
    refinedAbsB->myOperation();

    getchar();
    return 0;
}