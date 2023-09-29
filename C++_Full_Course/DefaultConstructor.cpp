//Write a program to ------------ with Ritik.
#include"iostream"
#include"conio.h"
using namespace std;

//Class
class Complex{
    int a, b;

    public:
    Complex(void); // declaration of default constructor.
    void printNumber(void);
};

Complex::Complex(void){
        a= 10;
        b= 25;
    }

//definition of default construcor.
void Complex::printNumber(void){
    cout<<"The complex number is : "<<a<<" + "<<b<<"i"<<endl;
}

int main(){
    cout<<"Default Constructor of Class in C++ programming\n";

//Notes:
    //What is default constructon of class in C++ programming ?
    //-> Default constructor don't take any parameter. that is called default construcor.
    //-> It is automatically invoked whenever the object is created and there is not need to pass any arguments because of 
    // default constructor don't take any parameters.
    
    Complex com1, com2;
        com1.printNumber();
        com2.printNumber(); 
    
    //getch();
    return(0);
}