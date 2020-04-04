#ifndef _CONCRETECOLLEAGUE1_HPP
#define _CONCRETECOLLEAGUE1_HPP

#include"colleague.hpp"
#include<iostream>

using namespace std;

class ConcreteColleague1: public Colleague{
public:
    ConcreteColleague1(Mediator* med):Colleague(med) {}
    void send(string meg){
        mediator->send(meg, this);
    }
    void receiveMeg(string meg){
        cout << "ConcreteColleage1 has received the message \""
             << meg << "\"" <<endl;
    }
};

#endif