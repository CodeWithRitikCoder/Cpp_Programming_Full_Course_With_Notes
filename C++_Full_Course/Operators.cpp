//Write a program to User Operators in C++ programming with RitikCoder.
#include"iostream"
#include"conio.h"
using namespace std;

int a= 200;

int main(){

//Notes.
    //What is operators in C++ Programming ?
    //-> An instructions which is used to manipulator data using any operators is know as operators
    //-> and operatos are used to perform different different types of operations in C++ Programming.

    //There are following types of operators in C++ Programming.
    //1. Arithmetic operators.
    //2. Comparision / Relational operatos.
    //3. Logical operators.
    //4. Assignment operators.
    //5. Bitwise operatos.
    //6. Miscellaneous operators.
    //7. Conditional operators.
    //8. Unary operators.
    //9. Scope resolution operator.

    //1. *****Arithmetic operators*****.
    int a= 20, b= 10;
    
    cout<<"The (a + b) is : "<<(a + b)<<endl;
    cout<<"The (a - b) is : "<<(a - b)<<endl;
    cout<<"The (a * b) is : "<<(a * b)<<endl;
    cout<<"The (a / b) is : "<<(a / b)<<endl;
    cout<<"The (a % b) is : "<<(a % b)<<endl<<endl;


    //2. *****Relational operators*****.
    cout<<"The (a == b) is : "<<(a == b)<<endl;
    cout<<"The (a != b) is : "<<(a != b)<<endl;
    cout<<"The (a > b) is : "<<(a > b)<<endl;
    cout<<"The (a < b) is : "<<(a < b)<<endl;
    cout<<"The (a >= b) is : "<<(a >= b)<<endl;
    cout<<"The (a <= b) is : "<<(a <= b)<<endl<<endl;


    //3. *****Logical operators*****.
    cout<<"The (a > b) && (a != b) is : "<<((a > b) && (a != b))<<endl;
    cout<<"The (a > b) || (a == b) is : "<<((a > b) || (a == b))<<endl;
    cout<<"The !(a > b) is : "<<!(a > b)<<endl;


    //4. *****Assignment operators*****.
    cout<<"The (a = 25) then a is : "<<(a = 25)<<endl;
    cout<<"The (a += 25) then a is : "<<(a += 25)<<endl;
    cout<<"The (a -= 25) then a is : "<<(a -= 25)<<endl;
    cout<<"The (a *= 25) then a is : "<<(a *= 25)<<endl;
    cout<<"The (a /= 25) then a is : "<<(a /= 25)<<endl;
    cout<<"The (a %= 25) then a is : "<<(a %= 25)<<endl<<endl;


    //5. *****Bitwise operators*****.
    a= 6, b= 2;
    cout<<"The (a & b) is : "<<(a & b)<<endl;
    cout<<"The (a | b) is : "<<(a | b)<<endl;
    cout<<"The (a ^ b) is : "<<(a ^ b)<<endl<<endl;


    //6. *****Miscellaneous operators*****.
    cout<<"The sizeof a variable is : "<<sizeof(a)<<endl;
    cout<<"Ths address of a variable is : "<<(&a)<<endl;
    cout<<"The * is pints to the pointer variable we will see it in the next time"<<endl<<endl;


    //7. *****Conditional operators*****.
    int c;
    cout<<"Enter a number under 25 : ";
    cin>>c;
    (c > 25)? cout<<"Your number is not under 25\n\n" : cout<<"Your number is under 25\n\n";


    //8. *****Unary operators*****.
    cout<<"The value of a++ is : "<<a++<<endl;
    cout<<"The value of a-- is : "<<a--<<endl;
    cout<<"The value of ++a is : "<<++a<<endl;
    cout<<"The value of --a is : "<<--a<<endl<<endl;

    //9. *****Scope resolution operators*****.
    cout<<"The value of local variable a is : "<<a<<endl;
    cout<<"The value of global variable a is : "<<::a<<endl<<endl;

    //getch();
    return(0);
}