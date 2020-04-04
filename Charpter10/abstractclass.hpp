#ifndef _ABSTRACTCLASS_HPP
#define _ABSTRACTCLASS_HPP

#include<string>
#include<iostream>
using namespace std;

class AbstractClass{
public:
    virtual string getName() = 0;
    void getBook(){
        cout << "this book is named " << getName()<<endl;
    }

};

#endif