//Write a program to Constrants in C++ Programming with RitikCoder.
#include"iostream"
#include"conio.h"
using namespace std;
int main(){

//Notes.
    //What is Constrant in C++ Programming.
    //-> Constrant are unchangeable what a constrant variable is initialized in a program,
    // it's value cannot be change afterwards.
    
    int a= 30;
    const int b= 35;

    cout<<"The value of a is : "<<a<<endl;
    cout<<"The value of b is : "<<b<<endl;

    a= 45;
    //b= 12; //we can't change the value of b because of (b) is constant here.

    cout<<"The value of a after changing is : "<<a<<endl;
    cout<<"The value of b after changing is : "<<b<<endl;    
    
    //getch();
    return(0);
}