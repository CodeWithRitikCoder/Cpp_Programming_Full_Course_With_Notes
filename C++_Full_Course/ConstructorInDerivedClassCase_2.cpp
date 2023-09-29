//Write a program to Constructor in Derived Class Case- 1 in C++ programming with Ritik.
#include"iostream"
#include"conio.h"
using namespace std;

//Classes code is here.
class Base1{
    int base1A, base1B;

    public:
    Base1(int a, int b){
        base1A= a;
        base1B= b;
        cout<<"I am constructor of Class Base1."<<endl;
    }

    void printDataBase1(void){
        cout<<endl<<"The value of base1A is : "<<base1A<<endl;
        cout<<"The value of base1B is : "<<base1B<<endl<<endl;
    }
};

class Base2{
    int base2A, base2B;

    public:
    Base2(int a, int b){
        base2A= a;
        base2B= b;
        cout<<"I am constructor of Class Base2."<<endl;
    }

    void printDataBase2(void){
        cout<<"The value of base2A is : "<<base2A<<endl;
        cout<<"The value of base2B is : "<<base2B<<endl<<endl;
    }
};

class Derived : public Base1, public Base2{
    public:
    Derived(int a, int b, int c , int d): Base1(a, b), Base2(c, d){
        cout<<"I am constructor of CLass Derived."<<endl;
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
    
    Derived d1(2, 4, 6, 8);
    d1.printDataBase1();
    d1.printDataBase2();

    //getch();
    return(0);
}