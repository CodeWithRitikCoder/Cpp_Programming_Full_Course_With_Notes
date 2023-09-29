//Write a program to Passing object as Function arguments in C++ programming with Ritik.
#include"iostream"
#include"conio.h"
using namespace std;

class Complex{
    
    int a, b;

    public: 
    void setNumbers(int, int);
    void printNumbers(void);
    void setNumberBySum(Complex, Complex);
};

void Complex :: setNumbers(int a1, int b1){
    a= a1;
    b= b1;
}

void Complex :: printNumbers(){
    cout<<"Your complex number is : "<<a<<" + "<<b<<"i"<<endl;
}

//Here I'm Passing objec as function arguments in C++ programming.
void Complex :: setNumberBySum(Complex com1, Complex com2){
    a= com1.a + com2.a;
    b= com1.b + com2.b;
}

int main(){

    cout<<"Passing object as function arguments in C++ programming.\n";

    Complex c1, c2, c3;
    c1.setNumbers(5, 2);
    c1.printNumbers();
    c2.setNumbers(3, 4);
    c2.printNumbers();

    c3.setNumberBySum(c1, c2);
    c3.printNumbers();

    //getch();
    return(0);
}