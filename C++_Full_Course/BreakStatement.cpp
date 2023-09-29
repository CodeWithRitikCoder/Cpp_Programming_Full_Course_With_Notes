//Write a program to use Break Statement in C++ programming with RitikCoder.
#include"iostream"
#include"conio.h"
using namespace std;
int main(){

    //Note.
    //What is break staement in C++ programming ?
    //->Break statement is used to break a block or program using some conditons.

    //Use break statement to break a program using a condition.

    int a;
    for(int i= 1; i<= 5; i++){
        cout<<"Enter a numer here : ";
        cin>>a;
        cout<<"You have entered : "<<a<<endl;

        if(a== 10){
            break;
        }
    }    
    
    //getch();
    return(0);
}