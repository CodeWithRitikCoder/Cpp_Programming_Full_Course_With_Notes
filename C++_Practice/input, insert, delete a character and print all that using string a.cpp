/* Code a software to input, insert, delete a character and print all that using "string" in C++. */
#include<iostream>
#include<conio.h>
#include<stdlib.h>
#include"string"
using namespace std;



    int main(){
        system("color 02");

    /* **** Use of "string" ****. */
    string str;//decleration of string.
    cout<<"Enter your string here = "; getline(cin, str);//taking string input using getline().
    cout<<"Your string is this = "<<str<<endl;//displaying string.
    str.push_back('s');//it is used to inserting a character form end of string.
    cout<<"the string after push_back operation is = "<<str<<endl;
    str.pop_back();//it is used to deleting a charackter from end of string.
    cout<<"The string after pop_back operation is = "<<str<<endl;

    getch();
    return 0;
    }
