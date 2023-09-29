//Write a program to Taking input from the user in C++ Programming with RitikCoder.
#include"iostream"
#include"conio.h"
using namespace std;
int main(){

    //<< -> This is called Insertion operation.
    //>> -> This is called Extraction operation.

    //Taking integer input from the user.
    int a, b;
    cout<<"Enter the int value of a : ";
    cin>>a;

    cout<<"Enter the int value of b : ";
    cin>>b;

    cout<<"The sum of a and b is : "<<(a+ b)<<endl;

    //Taking floating input from the user.
    float c, d;
    cout<<"Enter the float value of c : ";
    cin>>c;

    cout<<"Enter the float value of d : ";
    cin>>d;

    cout<<"The sum of c and d is : "<<(c+ d)<<endl;

    //Taking character input from the user.
    char e, f;
    cout<<"Enter the char value of e : ";
    cin>>e;

    cout<<"Enter the char value of f : ";
    cin>>f;

    cout<<"The value of e is : "<<e<<endl;
    cout<<"The value of f is : "<<f<<endl;

    cout<<"The sum of e and f is : "<<(e+ f);

    return(0);
}