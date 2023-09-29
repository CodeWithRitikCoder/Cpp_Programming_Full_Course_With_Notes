/* Code a software to convert upper case string to lower case string and print that using "String" in C++. */
#include<iostream>
#include<conio.h>
#include<stdlib.h>
#include"string.h"
using namespace std;

    int main(){
        system("color 02");

        /* **** Use of "String" ****. */
        //convert upper case string to lower case string.
      char c[100];
      cout<<"Enter your string here = "; gets(c);
      cout<<"This is your string = "<<c<<endl;
      cout<<"It's your lower case string = "<<strlwr(c);
     
    getch();
    return 0;
    } 
