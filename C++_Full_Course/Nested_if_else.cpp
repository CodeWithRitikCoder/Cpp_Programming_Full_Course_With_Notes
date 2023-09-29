//Write a program to use Nested if - else in C++ Programming with RitikCoder.
#include"iostream"
#include"conio.h"
using namespace std;
int main(){
    
    //To get notes of Nested if - else goto to "ControlStatemt.cpp" file.

    //This example is ued to check which number is greater within the (a, b and c).

    int a= 5, b= 15, c= 10;

    if(a> b){
        if(a> c){
            cout<<"The greater number is a";
        }else{
            cout<<"The greater number is c";
        }
    }else{
        cout<<"The greater number is b";
    }    
    
    //getch();
    return(0);
}