//Write a program to ------------ with Ritik.
#include"iostream"
#include"conio.h"
using namespace std;

// class definition.
class Number{
    int a;

    public:
    //default constructor.
    Number(void){

    }

    //Paramterized constructor.
    Number(int a1){
        a= a1;
    }

    //Copy constructor. // there is not need to create copy constructor because compiler automically create copy constructor.
    //and if you don't create copy constructor this program will not throw error.
    Number(Number &obj){
        a= obj.a;
        cout<<endl<<"Copy constructor is called "<<endl;
    }

    //Print number function.
    void printNumber(void){
        cout<<"The value for this object is : "<<a<<endl;
    }

};

int main(){
    cout<<"Copy constructor in C++ programming\n";

    Number n1, n2(4), n4;

    n1.printNumber();
    n2.printNumber();
    
    //Here I'm calling copy constructor.
    Number n3(n2);
    n3.printNumber();

    //n4= n2; //copy constructor not invoked.

    Number n5= n2; // Copy constructor invoked.


    
    //getch();
    return(0);
}