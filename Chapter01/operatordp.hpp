#ifndef _MOPERATORDP_HPP
#define _MOPERATORDP_HPP

class OperatorDP{
    public:
    OperatorDP() = default;

    double getNum1() const {return num1;}
    double getNum2() const {return num2;}
    void setNum1(double num){num1 = num;}
    void setNum2(double num){num2 = num;}

    virtual double getResult(){};

    private:
    double num1;
    double num2;
};

#endif