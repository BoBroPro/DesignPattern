#include<iostream>
#include<string>
#include"cashcontext.hpp"
#include"cashsuper.hpp"

using namespace std;
int main(){
    double monkey = 300;
    double result; 

    string option[3]{"无优惠", "打八折", "满200减100"};
    CashContext cs(option[0]);
    result = cs.getResult(monkey);
    cout << result<<endl; 

    CashContext cs1(option[1]);
    result = cs1.getResult(monkey);
    cout << result<<endl;


    CashContext cs2(option[2]);
    result = cs2.getResult(monkey);
    cout << result<<endl;

    getchar();
    return 0;
}