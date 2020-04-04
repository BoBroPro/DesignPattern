#include<iostream>
#include"myconcretestatea.hpp"
#include"mycontext.hpp"

using namespace std;
int main(){
    MyContext* mycon = new MyContext(new MyConcreteStateA());
    mycon->getState()->getInfo();
    mycon->update();
    mycon->getState()->getInfo();
    mycon->update();
    mycon->getState()->getInfo();
    getchar();
    return 0;
}