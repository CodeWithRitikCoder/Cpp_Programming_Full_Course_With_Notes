/* Code a software to 1 print Star pattern set limit by user in C++. */
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
        cout<<"* ";
    }
    cout<<endl;
   }

    getch();
    return 0;
    }
