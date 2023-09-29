/* Code a software to pirnt forword form, reverse form of your string and print all that using "string" in C++. */
#include<iostream>
#include<conio.h>
#include<stdlib.h>
#include"string"
using namespace std;

    int main(){
        system("color 02");

    /* **** Use of "string" ****. */
    string str= "Code With RitikCoder";//Initializing string.

    std::string::iterator it;//Declaring of forword iterator functions of stirng.
    std::string::reverse_iterator it1;//Declaring of reverse iterator functions of string.

    cout<<"This is your string after using forword iterator functions of string = ";//Displaying forword iterator functions string.
        for(it= str.begin(); it!= str.end(); it++){
            cout<<*it;
        }
        cout<<endl;
    cout<<"This is your string after using reverse iterator functions of string = ";//Displaying reverse iterator functions string.
        for(it1= str.rbegin(); it1!= str.rend(); it1++){
            cout<<*it1;
        }
        cout<<endl;

    getch();
    return 0;
    }
