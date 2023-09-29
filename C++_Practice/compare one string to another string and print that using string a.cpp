/* Code a software to compare one string to another string and print that using "String" in C++. */
#include<iostream>
#include<conio.h>
#include<stdlib.h>
#include"string.h"
using namespace std;

    int main(){
        system("color 02");

        /* **** Use of "String" ****. */
      //compare one string to another string.
      char g[100], h[100];
      cout<<"Enter your first string here = "; gets(g);
      cout<<"Enter your second string here = "; gets(h);
      cout<<"This is your firs string = "<<g<<endl;
      cout<<"This is your second string = "<<h<<endl;
      if(strcmp(g, h)== 0){
        cout<<"Your string is equal.";
      }else{
        cout<<"Your string is not equal.";
      }
     
    getch();
    return 0;
    } 
