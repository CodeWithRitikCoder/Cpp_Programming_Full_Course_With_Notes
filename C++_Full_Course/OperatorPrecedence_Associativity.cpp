//Write a program to Operator Precedence and Associativity in C++ Programming with RitikCoder.
#include"iostream"
#include"conio.h"
using namespace std;
int main(){
    
//Notes.
    //What is Operators Precedence in C++ ?
    //-> Operator Precedence helps us to solve an expression. for ex- "int c = a * b + c".
    //-> The multiplication operator's precedence is higher then the precedence of addtion operator,
    //so the multiplication between "a & b" first and then addition will be performed.

    //What is Operator Associativity in C++ ?
    //-> Operator Associativity helps us to solve an expression, when two or more operators have the
    //same precedence, the operator associativity helps us to decide that we should solve the expression
    //from "left to right" or from "right to left".

    //And always remember one thing ---> Never follow the (BODMAS) Rule in any Programming language.

    //If you want to see the online table of operators Precedence and Associativity.
    //-> Visit this link -> "https://en.cppreference.com/w/cpp/language/operators_precedence".

//Example -1
    int a1= 3, b1= 3, c1= 5;
    int d= a1* b1+ c1;

    cout<<"This is the value of d : "<<d;

//Example -2
    int a= 5, b= 6;
    int c= ((((a* 5)+ b)- 45)+ 87);

    cout<<"This is the value of c : "<<c<<endl;    
    
    //getch();
    return(0);
}