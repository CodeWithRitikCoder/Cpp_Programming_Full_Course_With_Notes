//Write a program to Mainpulator in C++ Programming with RitikCoder.
#include"iostream"
#include"conio.h"
using namespace std;
int main(){
    
//Notes.
    //What is Mainpulator in C++ Programming.
    //-> I C++ programming language manipulators are used to the formatting of output.

    //There are three types of Mainpulator in C++ Programming.
    //1. \n -> It is used to break the line.
    //2. endl -> It is also used to break the line.
    //3. setw() function. -> It is used to set width of outpur statement.

    int a= 20, b= 453, c= 3433, sum;
    sum= (a+ b+ c);

    cout<<"The value of a is : "<</*setw(6)*/a<<endl; //this setw() function is not working currently.
    cout<<"The value of a is : "<</*setw(5)*/a<<endl; //this setw() function is not working currently.
    cout<<"The value of a is : "<</*setw(4)*/a<<endl; //this setw() function is not working currently.

    cout<<"The sum of (a+ b+ c) is : "<<sum<<endl;
    
    //getch();
    return(0);
}