//Write a program to ------------ with Ritik.
#include"iostream"
#include"conio.h"
using namespace std;

//Forword declaration of a Complex class.
class Complex;

class Calculater {
    public:
    int add(int a, int b){
        return(a+ b);
    }

    int sumRealComplex(Complex, Complex);
    int sumCompComplex(Complex, Complex);
};

class Complex {

    int a, b;

    public: 
    void setNumbers(int, int);
    void printNmber(void);
    friend int Calculater :: sumRealComplex(Complex, Complex);
    friend int Calculater :: sumCompComplex(Complex, Complex);
};

void Complex :: setNumbers(int a1, int b1){
    a= a1;
    b= b1;
}

void Complex :: printNmber(){
    cout<<"Your complex number is : "<<a<<" + "<<b<<"i"<<endl;
}

//defintion of a Function of a Calculater class.
//Backword definiton of a function of a calculater class because of this function is a friend function of a Complex class.
int Calculater ::sumRealComplex(Complex o1, Complex o2){
        return(o1.a + o2.a);
    }

int Calculater ::sumCompComplex(Complex o1, Complex o2){
        return(o1.b + o2.b);
    }

int main(){
    cout<<"Simple sinppit for C++ programming\n";
    
    Complex com1, com2;
    com1.setNumbers(2, 4);
    com1.printNmber();
    com2.setNumbers(3, 3);
    com2.printNmber();

    Calculater calc;
    int result1= calc.sumRealComplex(com1, com2);
    int result2= calc.sumCompComplex(com1, com2);

    cout<<"The sum of real part of a complex number is : "<<result1<<endl;
    cout<<"The sum of Complex part of a complex number is : "<<result2<<endl;
    
    //getch();
    return(0);
}