#ifndef _CONCRETECOLLEAGUE2_HPP
#define _CONCRETECOLLEAGUE2_HPP

#include"colleague.hpp"
#include<iostream>

using namespace std;

class ConcreteColleague2: public Colleague{
public:
    ConcreteColleague2(Mediator* med):Colleague(med) {}
    void send(string meg){
        mediator->send(meg, this);
    }
    void receiveMeg(string meg){
        cout << "ConcreteColleage2 has received the message \""
             << meg << "\"" <<endl;
    }
};

#endif