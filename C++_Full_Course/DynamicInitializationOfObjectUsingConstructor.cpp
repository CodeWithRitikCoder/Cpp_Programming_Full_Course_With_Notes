//Write a program to Dynamic initialization of object using constructor in C++ with Ritik.
#include"iostream"
#include"conio.h"
using namespace std;

//class definition.
class Class1{
    int a, b;

    public:
    Class1(void){

    }
    Class1(int a1, int b1){
        a= a1;
        b= b1;
    }

    void printNumber(void){
        cout<<"The value of a is : "<<a<<" and b is : "<<b<<endl;
    }
};

int main(){
    cout<<"Dynamic initialization of object using constructor in C++ programming\n";

    Class1 c1, c2;

//This is called Dynaimc initialization of object using default constructor.
    c1= Class1();
    c1.printNumber();

//This is called Dynaimc initialization of object using parameterized constructor.
    c2= Class1(5, 8);
    c2.printNumber();
    
    //getch();
    return(0);
}