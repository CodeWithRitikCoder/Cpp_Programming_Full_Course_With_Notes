//Write a program to know all about Templates in C++ programming with Ritik.
#include"iostream"
#include"conio.h"
using namespace std;

//Classes code is here.
template <class T>
class Number{
    T a, b;

    public:
    Number(T a, T b){
        this->a= a;
        this->b= b;
    }

    T sum(){
        return (a+ b);
    }
};

int main(){
    cout<<"Templates in C++ programming\n"<<endl;
    
/*
Notes:
    What is Template in C++ programming ?
    -> Template is a keyword in C++ programming.
    -> which is used to define function template and class templates.
    -> It is a way to make your function, class generalize as far as data type is concern.

    //Template
    1. function template.
    2. class template.
*/

    Number <int>n1(3, 5);
    int sum= n1.sum();
    cout<<"This sum is : "<<sum<<endl;

    Number <float>n2(3.5, 5.9);
    float sum1= n2.sum();
    cout<<"This sum is : "<<sum1;

    //getch();
    return(0);
}