/* Code a software to find capacity, resize, find length, decrease capacity of string and print all that using "string" in C++. */
#include<iostream>
#include<conio.h>
#include<stdlib.h>
#include"string"
using namespace std;

    int main(){
        system("color 02");

    /* **** Use of "string" ****. */
    string str= "Code With RitikCoder";//Initilizing string.
    cout<<"The initial string is = "<<str<<endl;//Displaying string.
    cout<<"This is the capacity of your string = "<<str.capacity()<<endl;//Displaying capacity of string using "capacity()".
    str.resize(11);//Resizing of string using "resize()";
    cout<<"This is your resizing string = "<<str<<endl;//string after resize.
    cout<<"This is the length of your string = "<<str.length()<<endl;//Dispalying length of string using "length()";
    str.shrink_to_fit();//Decreasing capacity of string using "strink_to_fit()".
    cout<<"This is the capacity of string after decreasing = "<<str.capacity()<<endl;//Dispalying capacity after decrease.

    getch();
    return 0;
    }
