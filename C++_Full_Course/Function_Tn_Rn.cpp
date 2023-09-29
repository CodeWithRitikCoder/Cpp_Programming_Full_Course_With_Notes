//Write a program to use Take nothing -- Return nothing function in C++ Programming with RitikCoder.
#include"iostream"
#include"conio.h"
using namespace std;

//funciton prototype/decleration.
//void function1();//this is also valide there is not need to mention void data type in the return type of function.
void function1(void);

int main(){

    cout<<"Function -- Takes nothing -- Return nothing _ Nature."<<endl<<endl;

    function1();//this is called function call.        
    
    //getch();
    return(0);
}

//this is funciton definition / body
void function1(){
    int a, b;
    cout<<"Enter first number here : ";
    cin>>a;
    cout<<"Enter second number here : ";
    cin>>b;

    cout<<endl<<"The sum of "<<a<<" and "<<b<<" is : "<<(a+ b);
}
