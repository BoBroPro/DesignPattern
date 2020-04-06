#include"concreteelementa.hpp"
#include"visitor.hpp"
using namespace std;

void ConcreteElementA::accept(Visitor* visitor) {
    visitor->visitConcreteElementA(this);    
}
string ConcreteElementA::getName() {
    return "ConcreteElementA::getName() is called";
}
string ConcreteElementA::getAge(){
    return "the ConcreteElementA::getAge() is called";
}