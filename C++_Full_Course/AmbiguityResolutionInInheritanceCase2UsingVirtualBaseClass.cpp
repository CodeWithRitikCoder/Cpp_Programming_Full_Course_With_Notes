//Write a program to Resolve Ambiguity Resolution in inheritance using Virtual Base class in C++ programming with Ritik.
#include"iostream"
#include"conio.h"
using namespace std;

//classes code is here.
class A{
    int a= 10;
    public:
    void funA(){
        cout<<"I am funA of Class A and the value of a is : "<<a<<endl;
    }

};

class B1 : virtual public A{
    public:
    void funB1(){
        cout<<"I am funB1 of Class B1."<<endl;
    }
};

class B2 : virtual public A{
    public:
    void funB2(){
        cout<<"I am funB2 of Class B2."<<endl;
    }
};

class C : public B1, public B2{
    public:
    void funC(){
        cout<<"I am funC of Class C."<<endl;
    }
};

int main(){
    cout<<"Ambiguity Resolution in inheritance using Virtural base class in C++ programming\n";

//Notes:
    //What is Virtual base class.
    //-> Virtual base class means, When ever two classes extends a same class. then these two classes inherited by a another class.
    
    C c;
    c.funC();
    c.funB2();
    c.funA();
    
    //getch();
    return(0);
}