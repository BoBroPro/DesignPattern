#ifndef _MYEXCEPTION_HPP
#define _MYEXCEPTION_HPP

#include<exception>
#include<string>
#include<cstring>

class MyException : public std::exception{
public:
    MyException(const std::string& str){
        char pre[] = "no this charactor '";
        strcpy(val,pre);
        if(str.size() < sizeof(val)-strlen(pre)){
            strcat(val,str.c_str());
        }
        else{
            strncat(val,str.c_str(),sizeof(val) - strlen(pre) -2);
        }
        strcat(val,"'");
    }
    virtual const char* what(){
        return val;
    }
private: 
    char val[100]; 
};

#endif