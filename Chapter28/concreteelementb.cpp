#include"concreteelementb.hpp"
#include"concretevisitor1.hpp"
#include"concretevisitor2.hpp"

using namespace std;

void ConcreteElementB::accept(Visitor* visitor){
    visitor->visitConcreteElementB(this);
}
string ConcreteElementB::getName(){
    return "ConcreteElementB::getName() is called";
}
string ConcreteElementB::getAge(){
    return "the ConcreteElementB::getAge() is called";
}