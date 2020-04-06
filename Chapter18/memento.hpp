#ifndef _MEMENTO_HPP
#define _MEMENTO_HPP
class Memento{
public:
    Memento(int a, int h, int w):age(a),height(h),weight(w) {

    }

    int getAge(){ return age; }
    void setAge(int a){ age = a; }

    int getHeight() { return height;}
    void setHeight(int h) { height = h;}

    int getWeight() { return weight;}
    void setWeight(int w){ weight = w;}

private:
    int age;
    int height;
    int weight;
};

#endif