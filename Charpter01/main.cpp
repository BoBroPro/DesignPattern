#include<iostream>
#include"operatordp.hpp"
#include"Factory.hpp"

using namespace std;

int main(){
    OperatorDP* oper;
    double result;
    oper = Factory::creatObj('*'); 
    oper->setNum1(5);
    oper->setNum2(2);
    result = oper->getResult();
    cout << result << endl;
    getchar();
    return 0;
}