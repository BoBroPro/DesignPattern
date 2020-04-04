#ifndef _PRODUCTA1_HPP
#define _PRODUCTA1_HPP

#include<iostream>
#include"abstractproducta.hpp"

using namespace std;

class ProductA1 : public AbstractProductA {
public:
    virtual void displayA() override {
        cout << "ProductA1.displayA() is called" << endl;
    }
};

#endif