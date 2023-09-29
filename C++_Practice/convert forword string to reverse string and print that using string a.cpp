/* Code a software to convert forword string to reverse string and print that using "String" in C++. */
#include<iostream>
#include<conio.h>
#include<stdlib.h>
#include"string.h"
using namespace std;

    int main(){
        system("color 02");

        /* **** Use of "String" ****. */
       //convert forword string to reverse string.
      char b[100];
      cout<<"Enter your string here to reverse = "; gets(b);
      cout<<"This is your string = "<<b<<endl;
      cout<<"It's your reverse string = "<<strrev(b);
     
    getch();
    return 0;
    } 
