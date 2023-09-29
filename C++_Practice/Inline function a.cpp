/* Code a software to print multiply of two numbers with "inline function" using "Function with take something-return something" in C++. */
#include<iostream>
#include<conio.h>
#include<stdlib.h>
using namespace std;

inline int Multiply(int a, int b){
    return (a* b);
}

    int main(){
        system("color 02");

        /* **** Use of "Inline function" ****. */
       int x, y;
       cout<<"Enter the first number here = "; cin>>x;
       cout<<"Enter the second number here = "; cin>>y;
       cout<<"Here the multiply of two numbers = "<<Multiply(x, y);

    getch();
    return 0;
    } 
