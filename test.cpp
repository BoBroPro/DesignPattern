#include<iostream>
using namespace std;

class A{
    public:
    A(){
        cout << "A()" << endl;
    }
    virtual ~A(){
        cout << "virtual ~A()" << endl;
    }
};
class B : public A{
    public:
    B():A(){
        cout << "B()" << endl;
    }
    virtual ~B(){
        cout << "virtual B()" << endl;
    }

};
int main(){
    A* p= new B();
    delete p;
    getchar();
    return 0;
}