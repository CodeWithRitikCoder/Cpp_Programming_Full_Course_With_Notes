/* Code a software to find factorial, find some error of some number and print that using "Exception handling" in C++. */
#include<iostream>
#include<conio.h>
#include<stdlib.h>
using namespace std;

    int main(){
        system("color 02");

        /* **** Use of "Exception hadling" ****. */
     int a, factorial= 1;
     cout<<"Enter number herer to find factorial = "; cin>>a;
     try{
        if(a<= 0){
            throw (a);
        }else{
            for(int i= a; i>= 1; i--){
                factorial= factorial* i;
            }
            cout<<"This is the factorial of "<<a<<" = "<<factorial;
        }
     }
     catch(int catcha){
        cout<<"This can't find factorial of = "<<catcha;
     }
       
    getch();
    return 0;
    }
