/* Code a software to Joint/Add one string into another string and print that using "String" in C++. */
#include<iostream>
#include<conio.h>
#include<stdlib.h>
#include"string.h"
using namespace std;

    int main(){
        system("color 02");

        /* **** Use of "String" ****. */
       //Joint/Add one strint into another string. 
      char i[100], j[100];
      cout<<"Enter your First string here = "; gets(i);
      cout<<"Enter your Second string here = "; gets(j);
      cout<<"This is First string = "<<i<<endl;
      cout<<"This is Second string = "<<j<<endl;
      cout<<"It's your joint/add two stirng = "<<strcat(i, j);
     
    getch();
    return 0;
    }
