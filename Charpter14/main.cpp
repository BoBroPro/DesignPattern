#include<iostream>
#include"concretesubject.hpp"
#include"concreteobserver.hpp"
using namespace std;
int main(){
    ConcreteSubject* conSubject = new ConcreteSubject();

    ConcreteObserver* conObs = new ConcreteObserver("xiaoming",conSubject);
    ConcreteObserver* conObs1 = new ConcreteObserver("wanger",conSubject);
    ConcreteObserver* conObs2 = new ConcreteObserver("zhangsan",conSubject);
    
    conSubject->attach(dynamic_cast<Observer*>(conObs));
    conSubject->attach(dynamic_cast<Observer*>(conObs1));
    conSubject->attach(dynamic_cast<Observer*>(conObs2));
    conSubject -> detach(dynamic_cast<Observer*>(conObs1));

    conSubject->setSubjectState("Boss is coming"); 
    conSubject->notify();

    getchar();
    return 0;
}