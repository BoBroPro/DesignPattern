#include<iostream>
#include"concretemediator.hpp"
#include"concretecolleague1.hpp"
#include"concretecolleague2.hpp"

using namespace std;

int main(){
    ConcreteMediator* mediator = new ConcreteMediator();  
    ConcreteColleague1* col1 = new ConcreteColleague1(mediator);
    ConcreteColleague2* col2 = new ConcreteColleague2(mediator);

    mediator->setColleague1(col1);
    mediator->setColleague2(col2);

    col1->send("How do you do");
    col2->send("Nice to meet you"); 

    getchar();
    return 0;
}