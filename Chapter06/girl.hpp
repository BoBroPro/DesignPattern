#ifndef _GIRL_HPP
#define _GIRL_HPP

#include"person.hpp"
#include<iostream>
using namespace std;
class Girl:public Person{
public:
    virtual void action(){
        cout<< "i am a girl" <<endl;
    }
};
#endif