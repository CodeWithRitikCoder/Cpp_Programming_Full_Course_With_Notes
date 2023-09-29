//Write a program to Function -- Call by value in C++ programming with RitikCoder.
#include"iostream"
#include"conio.h"
using namespace std;

//function prototype.
void swap(int, int);

int main(){

//Notes.
    //What is function call by value ?
    //-> Function call by value is when ever we call a function by passing some parameters, we pass copy of the actual arguments. that's why value don't change.
    //-> In function call by value values will change only inside of the function block.

    cout<<"Function -- call by value in C++ programming."<<endl<<endl;

    int a= 10, b= 20;
    cout<<"The value of a is : "<<a<<" and b is : "<<b<<endl;
    swap(a, b);//call by value. and here we have passed copy of the actule values.
    cout<<"The value of a is : "<<a<<" and b is : "<<b<<endl;//values are not changed because of this is call by value.
    
    //getch();
    return(0);
}

void swap(int a, int b){
    int temp= a;
    a= b;
    b= temp;
    //if we will print here the value of A and B then this will print swaped value of a and b. but not out of this function.
    //cout<<"The value of a is : "<<a<<" and b is : "<<b<<endl;
}