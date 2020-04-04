#ifndef _PRODUCTB2_HPP
#define _PRODUCTB2_HPP

#include<iostream>
#include"abstractproductb.hpp"

using namespace std;

class ProductB2 : public AbstractProductB {
public:
    virtual void displayB() override {
        cout << "ProductB2.displayB() is called" << endl;
    }
};

#endif