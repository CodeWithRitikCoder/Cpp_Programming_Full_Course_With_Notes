//Write a program to use Function nature Takes something -- Return something in C++ programming with RitikCoder.
#include"iostream"
#include"conio.h"
using namespace std;

//function prototype.
int function4(int, int);

int main(){

    cout<<"Function -- Takes something -- Return something __ Nature."<<endl<<endl; 

    //function call and passing arguments/parameters is called actual parameters.
    cout<<"The result is : "<<function4(40, 5);
    
    //getch();
    return(0);
}

//functin definition/ body.
int function4(int a, int b){//Reciving arguments/parameter is called formal parameter or arguments.
    return (a/ b)+ 20;
}