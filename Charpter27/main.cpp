#include<iostream>
#include"playcontext.hpp"
#include"note.hpp"
#include"scale.hpp"
#include"myexception.hpp"

using namespace std;

int main(){
    PlayContext* context = new PlayContext(
        "O 2 E 0.5 G 0.5 A 3 E 0.5 G 0.5 D 3 E 0.5 G 0.5 A 0.5 O 3 C 1 O 2 A 0.5 G 1 C 0.5 E 0.5 D 3 "
        );
    try{
        while(context && (context->getContext()!="") && context->getContext().size() != 0){
            string str = context->getContext().substr(0, 1);
            Expression* exp  = nullptr;
            if("O" == str){
                exp = new Scale();
            }
            else if("C" == str || "D" == str || "E" == str || "F" == str
                    || "G" == str || "A" == str || "B"  == str || "P" == str){
                exp = new Note();
            }
            else{
                throw(new MyException(str));
            }
            if(exp){
                exp->interpret(context);
            }
            
        }
        
    }catch(MyException*e){
        cout << e->what()<<endl;
        getchar();
    }
    catch(...){
        cout << "Other exception occurs"<<endl;
        getchar();
    }

    getchar();
    return 0;
}