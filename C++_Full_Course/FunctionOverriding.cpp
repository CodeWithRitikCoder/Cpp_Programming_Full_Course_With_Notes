//Write a program to use function overriding in C++ programming with Ritik.
#include"iostream"
#include"conio.h"
using namespace std;

//Classes code is here.
class Base{
    public:
    void fun1(){
        cout<<"I am the function of Base class."<<endl;
    }
};

class Derived : public Base{
    public:
    void fun1(){
        cout<<"I am the function of Derived class."<<endl;
    }
};

int main(){

//These four lines of code is used to read input from a file and give a out into the file.
    // #ifndef ONLINE_JUDGE
    // freopen("CodeInputFile.txt", "r", stdin);
    // freopen("CodeOutputFile.txt", "w", stdout);
    // #endif

    cout<<"Function overriding in C++ programming\n"<<endl;
    
    Base b;
    Derived d;

    Base *bPointer;
    Derived *dPointer;

    bPointer= &d;
    bPointer->fun1();
    dPointer->fun1();

    dPointer= &d;
    dPointer->fun1();
    
    //getch();
    return(0);
}