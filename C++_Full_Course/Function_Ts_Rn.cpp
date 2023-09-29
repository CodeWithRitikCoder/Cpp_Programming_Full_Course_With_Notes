//Write a program to user function nature Takes something -- Return nothing in C++ programming with RitikCoder.
#include"iostream"
#include"conio.h"
using namespace std;

//function prototype.
void function3(int a, int b);
// void function3(int, int);//this is also valid function prototype in C++ programming.

int main(){

    cout<<"Function -- Takes somthing -- Return nothing __ Nature."<<endl<<endl;
    int a, b;
    cout<<"Enter first number here : ";
    cin>>a;
    cout<<"Enter second number here : ";
    cin>>b;
    function3(a, b);//function call and passing arguments/parameters is called actual parameters.
    
    //getch();
    return(0);
}

//function definition.
void function3(int a, int b){//Reciving arguments/parameter is called formal parameter or arguments.
    cout<<"The multiplication of "<<a<<" and "<<b<<" is "<<(a* b);
}