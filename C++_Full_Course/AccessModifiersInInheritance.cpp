//Write a program to Understand Access Modifiers in inheritance in C++ programming with Ritik.
#include"iostream"
#include"conio.h"
using namespace std;

class Base{
    protected:
    int a= 10;

    private:
    int b= 20;

    public:
    int c= 30;

};

class Derived: protected Base{
    //we can't acces protected members outside of this class.

};

int main(){
    cout<<"Access modifiers in inheritance in C++ programming\n";
    
//Notes:
    //Table for understand all about access modifiers in inheritance.
    /*
        ------------------------------------------------------------------------------------------------------
        |   ***************   |    Public derivation    |   Private derivation   |   Protected derivation   |
        |---------------------------------------------------------------------------------------------------|
        | 1. Private members  |      Not inherited      |     Not inherited      |     Not inherited        |
        | 2. Proteced members |      Protected          |      Private           |       Protected          |
        | 3. Public members   |      Public             |      Private           |       Protected          |
        -----------------------------------------------------------------------------------------------------
    */

    Base b;
    Derived d;
    //cout<<d.c; // this will not work since it is protected in both as well as derived class.
    
    //getch();
    return(0);
}