//Write a program to Resolve Ambiguity in inheritance Case- 1 in inheritance with Ritik.
#include"iostream"
#include"conio.h"
using namespace std;

//Classes code is here.
class Base1{
    public:
    void greet(){
        cout<<"How are you."<<endl;
    }
};

class Base2{
    public:
    void greet(){
        cout<<"I am too good."<<endl;
    }
};

class Derived : public Base1, public Base2{
    public:
    //That is the concept to resolve Case- 1 Ambiguity Resolution in inheritance in C++ programming.
    // here if a class inherite two Base class , and both the base class have same name function.
    // Then you will have define which function do you want to call from inside the Derived class.
    void greet(){
        Base1::greet();
    }
    //If we won't resolve this Ambiguity then this will throw an error while call same name both base class function.
    // compiler will be confused which function will compiler should call.
};

int main(){
    cout<<"Ambiguity Resolution in inheritance in C++ programming\n";

    Base1 b1;
    b1.greet();

    Base2 b2;
    b2.greet();

    Derived d1;
    d1.greet();
    
    //getch();
    return(0);
}