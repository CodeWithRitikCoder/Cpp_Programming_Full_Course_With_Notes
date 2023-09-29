//Write a program to user static variable in C++ programming. with Ritik.
#include"iostream"
#include"conio.h"
using namespace std;

//function definition.
void fun(){
    static int a;
    a++;
    cout<<"The value of a is : "<<a<<endl;
}

int main(){

//Notes.
    //What is Static variable in C++ programming ?
    //-> Static variable is used to contian previous value till the end of the program.

    cout<<"Static variable in C++ programming."<<endl<<endl;

    fun();
    fun();
    fun();
    
    //getch();
    return(0);
}