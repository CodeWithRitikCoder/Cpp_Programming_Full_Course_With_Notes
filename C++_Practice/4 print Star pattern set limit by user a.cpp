/* Code a software to 4 print Star pattern set limit by user in C++. */
#include<iostream>
#include<conio.h>
using namespace std;

    int main(){
        system("color 02");

    /* **** Use of "nested for loop" ****. */
   int a;
   cout<<"Enter your number here = "; cin>>a;
   for(int i= 1; i<= a; i++){
    for(int j= 1; j<= a; j++){
        if(j>= a+ 1- i){
        cout<<"* ";
        }else{
        cout<<"  ";
    }
    }
    cout<<endl;
   }
    }
