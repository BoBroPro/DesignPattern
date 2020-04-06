#ifndef _ORIGINATOR_HPP
#define _ORIGINATOR_HPP

#include<iostream>
#include<string>
#include"memento.hpp"

using namespace std;
class Originator{
public:
    Originator(string n, int a, int h, int w)
        :name(n), age(a), height(h), weight(w) {

    }
    void SetFromMemento(Memento* m){
        age = m->getAge();
        height = m->getHeight();
        weight = m->getWeight();
    }
    Memento* createMemento(){
        return new Memento(age,height, weight);
    }
    void show(){
        cout << "name: " << name << endl;
        cout << "height: " << height << endl;
        cout << "weight: " << weight << endl;
    }
    void changeContent(int a, int h, int w) {
        age = a;
        height = h;
        weight = w;
    }   

private:
    string name;
    int age;
    int height;
    int weight;
};

#endif