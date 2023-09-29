/* Code a software to find out length of string print that using "String" in C++. */
#include<iostream>
#include<conio.h>
#include<stdlib.h>
#include"string.h"
using namespace std;

    int main(){
        system("color 02");

        /* **** Use of "String" ****. */
        //find length of string.
      char a[100];
      cout<<"Enter your string here to find length = "; gets(a);
      cout<<"this is your stirng = "<<a<<endl;
    //strlen(a);//we can use string function here & also with print statement.
      cout<<"It's a length of your string = "<<strlen(a);//if we can use upper line string 
                                                        //that "use this in print statement<<d;"
     
    getch();
    return 0;
    } 
