/* Code a software to copy one string to another string and print that using "String" in C++. */
#include<iostream>
#include<conio.h>
#include<stdlib.h>
#include"string.h"
using namespace std;

    int main(){
        system("color 02");

        /* **** Use of "String" ****. */
       //copy one string to another string.
      char e[100], f[100];
      cout<<"Enter your string here = "; gets(e);
      cout<<"This is your string = "<<e<<endl;
      strcpy(f, e);
      cout<<"It's your copyed string in A to B string = "<<f;
     
    getch();
    return 0;
    } 
