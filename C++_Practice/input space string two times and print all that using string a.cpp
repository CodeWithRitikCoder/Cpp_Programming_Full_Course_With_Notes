/* Code a software to input space string two times and print all that using "String" in C++. */
#include<iostream>
#include<conio.h>
#include<stdlib.h>
#include"string.h"
using namespace std;


    int main(){
        system("color 02");

        /* **** Use of "String" ****. */
      char str[100];//Declaring of string.
      cout<<"Enter your string here = "; 
      gets(str);
      cout<<"This is your string = "<<str<<endl;
      cout<<"Enter your second string here = "; gets(str);
      cout<<"This is your second string = "<<str<<endl;

    getch();
    return 0;
    } 
