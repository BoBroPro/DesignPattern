#ifndef _EXPRESSION_HPP
#define _EXPRESSION_HPP
#include<exception>
#include"playcontext.hpp"

#include<iostream>
using namespace std;
class Expression{
public:
    void interpret(PlayContext* context){
        if(context && context->getContext().size() != 0){
            string playKey = context->getContext().substr(0,1);           
            context->setContext(context->getContext().substr(1));
            string::size_type pos; // get the index postion after stod function call.
            double playValue = stod(context->getContext(),&pos);//transfer the front substr to double;
            excute(playKey, playValue);
            if(pos+1 < context->getContext().size()){
                context->setContext(context->getContext().substr(pos+1));
            }
            else{
                context->setContext("");
            }
        }
        else{
            //do nothing;
        }
    }

    virtual void excute(string key, double value) = 0;
};

#endif