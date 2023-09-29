//Write a program to use Pointers to object and Arrow operator in C++ Programming with Ritik.
#include"iostream"
#include"conio.h"
using namespace std;

//CLasses code is here.
class Complex{
    int real, imaginary;

    public:
    void setData(int a, int b){
        real= a;
        imaginary= b;
    }

    void getData(){
        cout<<"The real part is : "<<real<<endl;
        cout<<"The imaginaray part is : "<<imaginary<<endl<<endl;
    }
};

int main(){
    cout<<"Pointers to object and Arrow operator in C++ programming\n\n";
    
    // First way to Accessing the public members of complex class.
    //We can create object of this class like this.
    Complex c1;
    c1.setData(10, 20);
    c1.getData();

    // Second way to Accessing the public members of complex class.
    //We can also create object of this class like this.
    Complex c2;
    Complex *ptr= &c2;
    (*ptr).setData(30, 40);
    (*ptr).getData();
    // Pherantheses are mendator here. because of the . dot operator have higher precedence.

    // Third way to Accessing the public members of complex class.
    //And We can also create object of this class like this.
    Complex *ptrr= new Complex;
    (*ptrr).setData(50, 60);
    (*ptrr).getData();


    // Arrow operator.

    // (*ptr).setData(70, 80);
    ptr->setData(70, 80); // THis is as exactly same as upper one.

    // (*ptr).getData();
    ptr->getData(); // THis is as exactly same as upper one.
    
    //getch();
    return(0);
}