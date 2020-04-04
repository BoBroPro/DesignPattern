#ifndef _HAT_HPP
#define _HAT_HPP

#include"person.hpp"
#include"decorator.hpp"
#include<iostream>
using namespace std;
class Hat:public Decorator{
public:
    Hat(Person*p):Decorator(p){

    }
    virtual void show()override{
        p->show();
        cout << "hat" << endl;
    }

};
#endif