#ifndef _SINGLETON_HPP 
#define _SINGLETON_HPP 

class Singleton{
public:
    static Singleton* getInstance(){
        if(nullptr == pInstance) {
            pInstance= new Singleton();
        }
        return pInstance;
    }
private:
    Singleton(){};
    static Singleton* pInstance;
};

Singleton* Singleton::pInstance = nullptr; // cpp 静态变量不允许类内初始化，必须类外。

#endif
