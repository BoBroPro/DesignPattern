#ifndef _PRODUCTA2_HPP
#define _PRODUCTA2_HPP

#include<iostream>
#include"abstractproducta.hpp"

using namespace std;

class ProductA2 : public AbstractProductA {
public:
    virtual void displayA() override {
        cout << "ProductA2.displayA() is called" << endl;
    }
};

#endif