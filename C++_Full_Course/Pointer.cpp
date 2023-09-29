//Write a program to Use pointer in C++ programming with RitikCoder.
#include"iostream"
#include"conio.h"
using namespace std;
int main(){

    //What is Pointer in C++ Programming ?
    //-> Pointer is a variable that can contain address of a variable.

    //1. Pointer -> *ptr
    //2. Pointer to pointer -> **ptr -> This will hold the address of a pointer variable.

    int a= 25;
    int *ptr= &a;
    int **ptr1= &ptr;

    cout<<"The value of a is : "<<a<<endl;    
    cout<<"The value of a is using pointer : "<<*ptr<<endl;
    cout<<"The value of a is using pointer : "<<++*ptr<<endl;
    cout<<"The address of a is : "<<&a<<endl;
    cout<<"The address of a is using pointer : "<<ptr<<endl;

    cout<<"The address of a *ptr is : "<<*ptr1<<endl;

    cout<<"The value of a is using pointer to pointer : "<<**ptr1<<endl;
    
    //getch();
    return(0);
}