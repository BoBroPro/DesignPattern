#ifndef _SCALE_HPP
#define _SCALE_HPP

#include<iostream>
#include"expression.hpp"

using namespace std;

class Scale : public Expression{
public:
    virtual void excute(string key, double val)override{
        string scale;
        switch((int)val){
            case 1:
                scale = "base";
                break;
            case 2:
                scale = "mediant";
                break;
            case 3:
                scale = "treble";
                break;
            default:
                break;
        }
        cout << scale << " ";
    }
};

#endif