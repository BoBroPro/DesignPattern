#include<iostream>
#include"concreteflyweight.hpp"
#include"unsharedconcreteflyweight.hpp"
#include"flyweightfactory.hpp"

using namespace std;

int main(){
    int extrinsicState = 10;
    FlyweightFactory* fwFactory = new FlyweightFactory();
    Flyweight* fw1 =  fwFactory->getFlyweight("#1");        
    Flyweight* fw2 = fwFactory->getFlyweight("#2"); 
    Flyweight* fw3 = fwFactory->getFlyweight("#3");
    fw1 = fwFactory->getFlyweight("#1");
    fw1->myOperation(extrinsicState--);
    fw2->myOperation(extrinsicState--);
    fw3->myOperation(extrinsicState--);

    UnsharedConcreteFlyweight* ufw = new UnsharedConcreteFlyweight();     
    ufw->myOperation(extrinsicState--);

    cout << "The objects number: " << fwFactory->getCnt() << endl;

    getchar();
    return 0;
}