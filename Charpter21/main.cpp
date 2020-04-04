#include<iostream>
#include"singleton.hpp"

using namespace std;

int main(){
    Singleton* p1 = Singleton::getInstance();   
    Singleton* p2 = Singleton::getInstance();   

    if(p1 == p2 && p1){
        cout << "p1 and p2 pointers to the same instance which is not null"<<endl;
    }

    getchar();
    return 0;
}