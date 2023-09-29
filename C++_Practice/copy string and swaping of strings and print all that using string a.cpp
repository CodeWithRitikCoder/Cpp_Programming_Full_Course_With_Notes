/* Code a software to copy string and swaping of strings and print all that using "string" in C++. */
#include<iostream>
#include<conio.h>
#include<stdlib.h>
#include"string"
using namespace std;

    int main(){
        system("color 02");

    /* **** Use of "string" ****. */
    string str1= "Code with RitikCoder on youtube.";//Declaring & initializing 1st string.
    string str2= "Code with RitikCoder on Facebook.";//Declaring & initializing 2st string.
    char ch[100];//Declaring character array.
    str1.copy(ch, 15, 0);//copy element into character array using "copy()".
    cout<<"The new copied character array is = "<<ch<<endl;//Displaying Copied string.
    cout<<"This is the 1st string before swaping = "<<str1<<endl;//Displaying 1st strings before swaping.
    cout<<"This is the 2nd string before swaping = "<<str2<<endl;//Displaying 2nd strings before swaping.

    str1.swap(str2);//using swap() to swap string content.
    cout<<"This is the 1st string after swaping = "<<str1<<endl;//Displaying 1st stirng after swaping.
    cout<<"This is the 2st string after swaping = "<<str2<<endl;//Displaying 2st stirng after swaping.

    getch();
    return 0;
    }
