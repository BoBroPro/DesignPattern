#include<iostream>
#include"concretefactory1.hpp"
#include"concretefactory2.hpp"
#include"abstractproducta.hpp"
#include"abstractproductb.hpp"

using namespace std;
int main(){
    AbstractFactory* conF1= new ConcreteFactory1();
    AbstractProductA* pA1 =  conF1->createProductA();
    AbstractProductB* pB1 =  conF1->createProductB();
    pA1->displayA();
    pB1->displayB();

    AbstractFactory* conF2= new ConcreteFactory2();
    AbstractProductA* pA2 =  conF2->createProductA();
    AbstractProductB* pB2 =  conF2->createProductB();
    pA2->displayA();
    pB2->displayB();
    getchar();
    return 0;
}