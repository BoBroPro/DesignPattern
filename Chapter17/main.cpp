#include<iostream>
#include"adaptee.hpp"
#include"adapter.hpp"

using namespace std;
int main(){
    Adaptee * adaptee = new Adaptee();
    Adapter* adapter = new Adapter(adaptee);
    cout << adapter->request()<<endl;

    getchar();
    return 0;
}