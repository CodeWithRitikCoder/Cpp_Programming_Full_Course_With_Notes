//Write a program to Constructor in Derived Class Case- 1 in C++ programming with Ritik.
#include"iostream"
#include"conio.h"
using namespace std;

//classes code is here.
class A{
    int a, b;
    public:
    A(int a1, int a2){
        a= a1;
        b= a1;
        cout<<"I am constructor of Class A and the value of a is : "<<a<<", and b is : "<<b<<endl;
    }
};

class B : public A{
    int b;
    public:
    B(int b1, int b2): A(b1, b2){ // this is a intex to call parameterized constructor of the Base class, by passing arguments.
        b= b1;
        cout<<"I am constructor of Class B and the value of B is : "<<b<<endl;
    }
};

int main(){
    cout<<"Constructor in Derived Classs Case- 1 in C++ programming\n";

/*
Note:
    Always remember one thing - constructor will call always of the base class at first.

    Constructor in Derived class in C++ programming.
    -> Case- 1:
        class B : public A{
            //in order of execution of constructor -> first A() then B()
        }
    
    -> Case- 2:
        class C : public A, public B{
            //in order of execution of constructor -> first A() then B() and then C()
        }

    -> Case- 3:
        class C : public A, virtual public B{
            //in order of execution of constructor -> first B() the A() and then C();
        }
*/
    
    B b(4, 55);
    
    //getch();
    return(0);
}