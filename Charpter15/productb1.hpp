#ifndef _PRODUCTB1_HPP
#define _PRODUCTB1_HPP

#include<iostream>
#include"abstractproductb.hpp"

using namespace std;

class ProductB1 : public AbstractProductB {
public:
    virtual void displayB() override {
        cout << "ProductB1.displayB() is called" << endl;
    }
};

#endif