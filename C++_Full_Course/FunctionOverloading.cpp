//Write a program to Use Function overloading in C++ programming with Ritik.
#include"iostream"
#include"conio.h"
using namespace std;

//function definition.
void sum(int a, int b){
    cout<<"The sum of a and b is : "<<(a+ b)<<endl;
}

//function definition.
void sum(int a, int b, int c){
    cout<<"The sum of a, b and c is : "<<(a+ b+ c)<<endl;
}

//function definition.
void sum(int a, int b, int c, int d){
    cout<<"The sum of a, b, c and d is : "<<(a+ b+ c+ d)<<endl;
}

int sum(int a, int b, int c, int d, int e){
    return (a+ b+ c+ d+ e);
}

int main(){

//Notes.
    //What is Function overloading in C++ programming ?
    //-> Function overloading is : in the c++ program has two or more same name function but parameter are different that is called function overloading in C++ programming.
    //-> we can also change the return type while function overloading in C++ proramming.

    sum(2, 3);
    sum(2, 3, 5);
    sum(2, 3, 5, 6);
    cout<<"The result is : "<<sum(2, 2, 2, 2, 2);
    
    //getch();
    return(0);
}