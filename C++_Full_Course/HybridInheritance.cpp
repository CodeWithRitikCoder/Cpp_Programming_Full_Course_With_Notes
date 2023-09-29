//Write a program to use Hybrid inheritance in C++ programming with Ritik.
#include"iostream"
#include"conio.h"
using namespace std;

// Classes code is here.
class A{
    int a= 10;
    public:
    void funA(){
        cout<<"I am the function of Class A and The value of a is : "<<a<<endl;
    }
};

class B1 : public A{
    int b1= 20;
    public:
    void funB1(){
        cout<<"I am the function of Class A and The value of a is : "<<b1<<endl;
    }
};

class B2{
    int b2= 30;
    public:
    void funB2(){
        cout<<"I am the function of Class A and The value of a is : "<<b2<<endl;
    }
};

class C : public B1, public B2{
    int c= 40;
    public:
    void funC(){
        cout<<"I am the function of Class A and The value of a is : "<<c<<endl;
    }
};

int main(){
    cout<<"Hybrid inheritance in C++ programming\n";
    
    C c;
    c.funA();
    c.funB1();
    c.funB2();
    c.funC();
    
    //getch();
    return(0);
}