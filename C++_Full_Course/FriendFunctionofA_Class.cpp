//Write a program to use Friend function of a class in C++ programming with Ritik.
#include"iostream"
#include"conio.h"
using namespace std;

class Complex {

    int a, b;

    public: 
    void setNumbers(int, int);
    void printNmber(void);
    friend Complex setNumberBySum(Complex, Complex);
};

void Complex :: setNumbers(int a1, int b1){
    a= a1;
    b= b1;
}

void Complex :: printNmber(){
    cout<<"Your complex number is : "<<a<<" + "<<b<<"i"<<endl;
}

Complex setNumberBySum(Complex com1, Complex com2){
    Complex com3;
    com3.setNumbers((com1.a + com2.a), (com1.b + com2.b));
    return com3;
}

int main(){

    cout<<"Friend function in C++ programming\n";
    
//Notes.
    //What is Friend function in C++ programming.
    //-> Friend function is a friend function of a class.
    //-> Friend function not in the scope of class.
    //-> Friend function can access private members of class.
    //-> and object of class can't call it's class friend function.
    //-> friend function can be invoked without the help of any object of class.
    //-> it usually contains the objects as arguments.
    //-> it can be declared inside public or private section of the class.
    //-> it cann't access the members directly by their names and need object_name.member_name to access any member of class.

    Complex c1, c2, complexSum;

    c1.setNumbers(4, 6);
    c1.printNmber();
    
    c2.setNumbers(5, 5);
    c2.printNmber();

    complexSum= setNumberBySum(c1, c2);
    cout<<"\t  Afer sum"<<endl;
    complexSum.printNmber();
    
    //getch();
    return(0);
}
