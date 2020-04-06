#include<iostream>
#include"addfactory.hpp"
#include"subfactory.hpp"
using namespace std;

int main(){

    AddFactory* addFa = new AddFactory();
    MyOperator* myOp = addFa->createOperator(5,3);
    double ans = myOp->getResult(); 
    cout << ans<<endl; // 8

    MyFactory* subFa = new SubFactory();
    MyOperator* subOp = subFa->createOperator(7,1);
    ans = subOp->getResult(); 
    cout << ans << endl; // 6

    getchar();
    return 0;
}