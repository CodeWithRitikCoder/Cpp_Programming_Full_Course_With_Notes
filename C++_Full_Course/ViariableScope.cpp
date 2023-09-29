//Write a program to illubrate Scope of Variable in C++ programming with RitikCoder.
#include"iostream"
#include"conio.h"
using namespace std;

int a= 30;//This is called global variable.

int main(){

//Notes.
    //What is variable Scope in C++ Programming ?
    //-> Scope of a variable is the region in Code where the existence of variable is valid.

    //There are two types of variable scope in C++ Programming.
    //1. Local variable.
    //2. Global variable.

    //1. What is Local variable ?
    //-> Local variable are declared inside the braces of any function and can be accessed only from here.

    //2. What is Global variable ?
    //-> Global variable are declared ouside of any function and can be accessed from any where.

    //????? Can global and local variable have same name ??????????????.
    //Answer is ---> Yes, of couse.. It can happened. but C++ Program will give first priority for the local variable.

    int a= 24;//This is called local variable.

    cout<<"The value of Local variable a is : "<<a<<endl;

    cout<<"The value of Global variable a is : "<<::a<<endl;

    //getch();
    return(0);
}