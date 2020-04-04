#ifndef _ClOTHES_HPP
#define _CLOTHES_HPP

#include"person.hpp"
#include"decorator.hpp"
#include<iostream>
using namespace std;
class Clothes:public Decorator{
public:
    Clothes(Person* p):Decorator(p){

    }
    virtual void show(){
        p->show();
        cout << "Clothes" << endl;
    }
};
#endif