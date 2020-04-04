#ifndef  _MY_OPERATOR_HPP
#define _MY_OPERATOR_HPP 

class MyOperator{
    public:
    MyOperator(double a, double b):a(a),b(b){

    }
    virtual double getResult(){};

    protected:
    double a;
    double b;
};

#endif