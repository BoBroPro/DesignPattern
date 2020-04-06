#include<iostream>
#include"concreteelementa.hpp"
#include"concreteelementb.hpp"
#include"concretevisitor1.hpp"
#include"concretevisitor2.hpp"

using namespace std;
int main(){
    ConcreteElementA* conEA = new ConcreteElementA(); 
    ConcreteElementB* conEB = new ConcreteElementB(); 

    ConcreteVisitor1* conV1 = new ConcreteVisitor1();
    ConcreteVisitor2* conV2 = new ConcreteVisitor2();

    conV1->visitConcreteElementA(conEA);
    conV2->visitConcreteElementA(conEA);

    conV1->visitConcreteElementB(conEB);
    conV2->visitConcreteElementB(conEB);

    getchar();
    return 0;
}