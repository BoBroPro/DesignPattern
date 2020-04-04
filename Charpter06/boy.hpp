#ifndef _BOY_HPP
#define _BOY_HPP

#include"person.hpp"
#include<iostream>
using namespace std;
class Boy:public Person{
public:
    virtual void action(){
        cout<< "i am a boy" <<endl;
    }
};


#endif