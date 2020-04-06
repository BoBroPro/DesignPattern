#ifndef _NOTE_HPP
#define _NOTE_HPP

#include<iostream>
#include"expression.hpp"

using namespace std;

class Note : public Expression{
public:
    virtual void excute(string key, double val) override { 
        string note;
        if("C" == key ){
            note = "1";
        }
        else if("D" == key){
            note = "2";
        }
        else if("E" == key){
            note = "3";
        }
        else if("F" == key){
            note = "4";
        }
        else if("G" == key){
            note = "5";
        }
        else if("A" == key){
            note = "6";
        }
        else if("B" == key){
            note = "7";
        }
        else{
            // do nothing
        }
        cout << note << " ";
    }

};


#endif