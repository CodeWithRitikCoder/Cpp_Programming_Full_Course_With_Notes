//Write a program to use costructor in C++ programming with Ritik.
#include"iostream"
#include"conio.h"
using namespace std;

//Class definition.
class Complex{
    int a, b;

    public:
    //Constructors declaration.
    Complex(void);
    Complex(int);
    Complex(int, int);

    //function declaration.
    void printNumber(void);
};

//Constructor defintions.
Complex::Complex(){
    a= 0;
    b= 0;
}

Complex::Complex(int a1){
    a= a1;
    b= 0;
}

Complex::Complex(int a1, int b1){
    a= a1;
    b= b1;
}

//function definiton.
void Complex::printNumber(void){
    cout<<"The complex number is : "<<a<<" + "<<b<<"i"<<endl;
}

int main(){
    cout<<"Constructor overloading in C++ programming\n";
    
    Complex com1, com2(4), com3(5, 9); //Passing arguments for constructor overloading.

    com1.printNumber();
    com2.printNumber();
    com3.printNumber();
    
    //getch();
    return(0);
}