//Write a program to ------------ with Ritik.
#include"iostream"
#include"conio.h"
using namespace std;

//Class
class Complex{
    int a, b;

    public:
    Complex(int, int); // declaration of parameterized constructor.
    void printNumber(void);
};

Complex::Complex(int a1, int b1){
        a= a1;
        b= b1;
    }

//definition of parameterized construcor.
void Complex::printNumber(void){
    cout<<"The complex number is : "<<a<<" + "<<b<<"i"<<endl;
}

int main(){
    cout<<"Parameterized Constructor of Class in C++ programming\n";

    //Notes:
    //What is paramterized constructon of class in C++ programming ?
    //-> 

    Complex com1(4, 5), com2(6, 8);//calling paramterized constructor while creating the objecs.

    com1.printNumber();
    com2.printNumber();

    //getch();
    return(0);
}