// Write a program to use Goto Statement in C++ programming with RitikCoder.
#include "iostream"
#include "conio.h"
using namespace std;
int main(){

    int a;
    lavel1://this is called the 
    for (int i = 1; i <= 5; i++){
        cout << "Enter a number here : ";
        cin>>a;
        cout<<"you got entered : "<<a<<endl;

        if (a== 10){
            goto lavel1;
        }
        
    }

    // getch();
    return (0);
}