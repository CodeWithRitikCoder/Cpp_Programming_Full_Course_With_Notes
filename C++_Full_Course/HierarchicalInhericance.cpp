//Write a program to use Hierarchical inheritance in C++ programming with Ritik.
#include"iostream"
#include"conio.h"
using namespace std;

//Classes are here.
class Base{
    public:
    void greet1(){
        cout<<"Good Morning by Base Class."<<endl;
    }
};

class Derived1 : public Base{
};

class Derived2 : public Base{
};

int main(){
    cout<<"Hierarchical inhericance in C++ programming\n";
    
    Derived1 d1;
    d1.greet1();

    Derived2 d2;
    d2.greet1();
    
    //getch();
    return(0);
}