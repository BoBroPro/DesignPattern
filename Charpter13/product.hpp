#ifndef _PRODUCT_HPP
#define _PRODUCT_HPP
#include<vector>
#include<iostream>
#include<string>
using namespace std;

class Product{
public:
    void add(string str){
        vec.push_back(str);
    }
    void show(){
        for(auto i : vec){
            cout << i<<endl;
        }
    }

private:
    vector<string> vec;
    
};
#endif