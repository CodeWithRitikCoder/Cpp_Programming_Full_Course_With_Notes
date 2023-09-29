//Write a program to use Function Call by Reference in C++ programming with Ritik.
#include"iostream"
#include"conio.h"
using namespace std;

//Function prototype.
void swapWithPointers(int *, int *);
void swapWithAmpercent(int &, int &);

int main(){

    cout<<"Function -- call by Reference in C++ programming."<<endl<<endl;

    int a= 5, b= 8;

    cout<<"The value of a is : "<<a<<" and b is : "<<b<<endl;
    swapWithPointers(&a, &b);//fucntion call by reference.
    cout<<"The value of a is : "<<a<<" and b is : "<<b<<endl;
    swapWithAmpercent(a, b);//function call by reference.
    cout<<"The value of a is : "<<a<<" and b is : "<<b<<endl;
    
    //getch();
    return(0);
}

//function definition.
void swapWithPointers(int *a, int *b){
    int temp= *a;
    *a= *b;
    *b= temp;
}

//fucntion definition.
void swapWithAmpercent(int &a, int &b){
    int temp= a;
    a= b;
    b= temp;
}