/* Code a software to convert lower case string to upper case string and print that using "String" in C++. */
#include<iostream>
#include<conio.h>
#include<stdlib.h>
#include"string.h"
using namespace std;

    int main(){
        system("color 02");

        /* **** Use of "String" ****. */
       //Convert lower case string to lower case string.
      char d[100];
      cout<<"Enter your string here = "; gets(d);
      cout<<"This is your string = "<<d<<endl;
      //strupr(d);//we can use string function here & also with print statement.
      cout<<"It's your uper case String = "<<strupr(d);//if we can use upper line string 
                                                      //that "use this in print statement<<d;"
     
    getch();
    return 0;
    } 
